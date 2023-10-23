//
// Created by admin on 2023-10-18.
//

#ifndef SELENE_COMMON_SELENE_CONPLEMETRAY_FILTER_H
#define SELENE_COMMON_SELENE_CONPLEMETRAY_FILTER_H

double angleAcX, angleAcY, angleAcZ;
double angleGyX, angleGyY, angleGyZ;
double angleFiX, angleFiY, angleFiZ;
double max_altitude=0;

double sumAcX = 0 , sumAcY = 0, sumAcZ = 0;
double sumGyX = 0 , sumGyY = 0, sumGyZ = 0;

const double RADIAN_TO_DEGREE = 180 / 3.14159;
const double DEG_PER_SEC = 32767 / 250;    // 1초에 회전하는 각도
const double ALPHA = 1 / (1 + 0.12);
// GyX, GyY, GyZ 값의 범위 : -32768 ~ +32767 (16비트 정수범위)

unsigned long now = 0;   // 현재 시간 저장용 변수
unsigned long past = 0;  // 이전 시간 저장용 변수
past = millis();
double dt = 0;           // 한 사이클 동안 걸린 시간 변수

double averAcX, averAcY, averAcZ;
double averGyX, averGyY, averGyZ;

#endif //SELENE_COMMON_SELENE_CONPLEMETRAY_FILTER_H
