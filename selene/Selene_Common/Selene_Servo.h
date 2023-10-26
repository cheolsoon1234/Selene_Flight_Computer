//
// Created by admin on 2023-10-04.
//

#ifndef SELENE_COMMON_SELENE_KALMAN_H
#define SELENE_COMMON_SELENE_KALMAN_H

#include <Servo.h>

#include "Selene_Common\\Selene_imu.h"
#include "Selene_Common\\Selene_imu.c"
#include "Selene_Common\\Selene_Pressure.h"
#include "Selene_Common\\Selene_Pressure.c"
#include "Selene_Common\\Selene_SD.h"
#include "Selene_Common\\Selene_SD.c"

#define INITIAL_SERVO_ANGLE         100;
#define EJECTION_SERVO_ANGLE        45;
#define SERVO_PIN                   8;
#define EJECTION_ALT_DIFFERENCE     5;

Servo myservo;

#define MAX(a,b) a>b ? a : b

#endif //SELENE_COMMON_SELENE_KALMAN_H
