//
// Created by admin on 2023-10-04.
//

#include "Selene_Common\\Selene_Pressure.h"

void setup_BMP() {
    if (!bmp.begin() && RepCNT < MAX_REP_CNT) {
        Serial.println("Could not find a valid BMP085 sensor, check wiring!");
        RepCNT++;
        setup_BMP();
    }
}

void BMP_OP() {
    Pressure = bmp.readPressure();
    Altitude = bmp.readAltitude();
}

