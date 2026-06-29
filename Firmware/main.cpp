#include <Arduino.h>
#include <Wire.h>
#include <MPU9250.h>
#include <Adafruit_AHRS_Mahony.h>
#include "MPU9250.h"

MPU9250 (imu);

BolderFlight::MPU9250 imu(&Wire, 0x68); 
Adafruit_Mahony filter;

void setup(){

Serial.begin(115200);
Wire.begin();

if (!imu.begin()) {
Serial.println("Error initializing MPU9250");
while(1); 
}

filter.begin(100.0f);

}

void loop() {
    
    if (imu.readSensor()) {
        float ax = imu.getAccelX_mss();
        float ay = imu.getAccelY_mss();
        float az = imu.getAccelZ_mss();
        
        float gx = imu.getGyroX_rads();
        float gy = imu.getGyroY_rads();
        float gz = imu.getGyroZ_rads();
        
        float mx = imu.getMagX_uT();
        float my = imu.getMagY_uT();
        float mz = imu.getMagZ_uT();

        
        filter.update(
            gx * 180.0 / PI, gy * 180.0 / PI, gz * 180.0 / PI,
            ax, ay, az,
            my, mx, -mz  
        );

        
        float roll  = filter.getRoll();
        float pitch = filter.getPitch();
        float yaw   = filter.getYaw();

      
        Serial.print("Orientation: ");
        Serial.print(roll);  Serial.print(", ");
        Serial.print(pitch); Serial.print(", ");
        Serial.println(yaw);
    }
    
    
    delay(10); 
}