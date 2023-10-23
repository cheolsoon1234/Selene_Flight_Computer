//
// Created by admin on 2023-10-17.
//

#ifndef SELENE_COMMON_SELENE_BASEDEF_H
#define SELENE_COMMON_SELENE_BASEDEF_H

#include <Arduino.h> // USE Arduino
#include <Wire.h>  // USE arduino EEPROM
#include <Servo.h>   // USE arduino SERVO

#define MAX_REP_CNT        10000;
int RepCNT =               0;

/*  Selene_Setup  */
void setup_csv();
void setup_servo();
void setup_IMU();
void caliIMU();
void setup_BMP();


#endif //SELENE_COMMON_SELENE_BASEDEF_H
