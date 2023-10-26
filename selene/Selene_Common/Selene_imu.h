#include <Wire.h>
#include <MPU6050.h>
#include "Selene_Common\\Selene_Kalman_Filter.h"
#include "Selene_Common\\Selene_Kalman_Filter.c"
#include "Selene_Common\\Selene_SD.h"
#include "Selene_Common\\Selene_SD.c"


#define MAX_REP_CNT     10000
int RepCNT =            0;

MPU6050 mpu;

KalmanFilter kalmanX(0.001, 0.003, 0.03);
KalmanFilter kalmanY(0.001, 0.003, 0.03);

float accPitch =        0;
float accRoll =         0;

float kalPitch =        0;
float kalRoll =         0;

