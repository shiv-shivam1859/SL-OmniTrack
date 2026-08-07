Note - I dont know exactly how to write BOM as its my first time so im gonna include all relevant info i could add like supplier etc.

| Component | Amount | Use in project |
|---|---|---|
| 7semi ESP32-S3 Dev Board (1U-N8R8) WiFi BLE, 8MB Flash, 8MB PSRAM | 2 | Main microcontroller — one in the avionics bay, one in the ground station |
| SmartElex LoRa Module Ra-02 SX1278 433MHz (bundled antenna) | 2 | Sends/receives telemetry between avionics bay and ground station; comes with a pre-attached antenna, no separate antenna sourcing needed |
| 1.3" I2C OLED Display Module | 1 | Mounted on the ground station; displays health/status received via LoRa from the avionics bay at startup |
| 1S 18650 Li-ion BMS Charger Protection Board 3.7V | 1 | Protects the single 18650 cell powering the avionics bay |
| MT3608 DC-DC Boost Converter | 1 | Steps up the 1S 18650 cell's ~3.7V to a stable 5V rail for the avionics bay's ESP32-S3, GPS, and microSD module |
| Ublox NEO-6M GPS Module with EEPROM | 1 | GPS fused with barometer and IMU data for 3D flight tracking/visualization |
| MPU9250 / MPU6500 IMU Module | 1 | Orientation sensing (accelerometer + gyroscope) in the avionics bay — already owned |
| BMP280 Barometric Pressure Sensor Module | 1 | Altitude/pressure sensing in the avionics bay — already owned |
| MicroSD Card + Module | 1 | Onboard flight data logging in the avionics bay — already owned |
| 18650 Li-ion Cell | 1 | Single-cell power source for the avionics bay — already owned |
| Wires and USB 2.0 A-to-B Cable | Depends | Wiring for both modules; cable connects ground station to laptop/PC |

**IMPORTANT** — Supplier is Robocraze.com (except already-owned components).