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

void loop(){



}