//
// Created by admin on 2023-10-04.
//

#ifndef SELENE_COMMON_SELENE_KALMAN_H
#define SELENE_COMMON_SELENE_KALMAN_H

#include <Adafruit_BMP085.h>
#include "Selene_Common\\Selene_SD.h"
#include "Selene_Common\\Selene_SD.c"

#define MAX_REP_CNT        10000;
int RepCNT =               0;

double Pressure;
double Altitude;

#endif //SELENE_COMMON_SELENE_KALMAN_H
