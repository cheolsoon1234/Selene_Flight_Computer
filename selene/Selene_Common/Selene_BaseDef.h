//
// Created by admin on 2023-10-17.
//

#ifndef SELENE_COMMON_SELENE_BASEDEF_H
#define SELENE_COMMON_SELENE_BASEDEF_H

#include <Arduino.h> // USE Arduino
#include <Wire.h>  // USE arduino EEPROM
#include <Servo.h>   // USE arduino SERVO

/*  Selene_Setup  */
void setup_csv();
void setup_servo();
void setup_IMU();
void setup_BMP();


#endif //SELENE_COMMON_SELENE_BASEDEF_H
