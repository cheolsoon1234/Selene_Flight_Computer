//
// Created by admin on 2023-10-18.
//
#include "Selene_Common\\Selene_Complemetray_Filter.h"
#include "Selene_Common\\Selene_IMU.h"
#include "Selene_Common\\Selene_BaseDef.h"

void Filtering_OP() {
    angleAcX = atan(AcY / sqrt(pow(AcX, 2) + pow(AcZ, 2)));
    angleAcX *= RADIAN_TO_DEGREE;
    angleAcY = atan(-AcX / sqrt(pow(AcY, 2) + pow(AcZ, 2)));
    angleAcY *= RADIAN_TO_DEGREE;

    angleGyX += ((GyX - averGyX) / DEG_PER_SEC) * dt;  //각속도로 변환
    angleGyY += ((GyY - averGyY) / DEG_PER_SEC) * dt;
    angleGyZ += ((GyZ - averGyZ) / DEG_PER_SEC) * dt;

    double angleTmpX = angleFiX + angleGyX * dt;
    double angleTmpY = angleFiY + angleGyY * dt;
    double angleTmpZ = angleFiZ + angleGyZ * dt;

    angleFiX = ALPHA * angleTmpX + (1.0 - ALPHA) * angleAcX;
    angleFiY = ALPHA * angleTmpY + (1.0 - ALPHA) * angleAcY;
    angleFiZ = angleGyZ;
}

void caliIMU() {

    getIMUData();
    for (int i=0;i<10;i++) {
        getIMUData();
        sumAcX+=AcX;  sumAcY+=AcY;  sumAcZ+=AcZ;
        sumGyX+=GyX;  sumGyY+=GyY;  sumGyZ+=GyZ;
        delay(50);
    }
    averAcX=sumAcX/10;  averAcY=sumAcY/10;  averAcZ=sumAcY/10;
    averGyX=sumGyX/10;  averGyY=sumGyY/10;  averGyZ=sumGyZ/10;
}