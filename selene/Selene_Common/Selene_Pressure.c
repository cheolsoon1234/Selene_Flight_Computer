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
    // sensor operation
    Temperature = bmp.readTemperature();
    Pressure = bmp.readPressure();
    Altitude = bmp.readAltitude();

    // LOG
    LOG_BMP(Temperature, Pressure, Altitude);
}

