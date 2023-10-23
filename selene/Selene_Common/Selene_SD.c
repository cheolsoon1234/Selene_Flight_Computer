//
// Created by admin on 2023-10-04.
//
#include "Selene_Common\\Selene_SD.h"
#inlcude "Selne_Common\\Selene_IMU.h"
void setup_csv() {
    Serial.println("Initializing SD card...");

    if (!SD.begin(SD_PIN), RepCNT < MAX_REP_CNT) { // SD카드 모듈을 초기화합니다.
        Serial.println("SD initialization failed!"); // SD카드 모듈 초기화에 실패하면 에러를 출력.
        RepCNT++;
        setup_csv();
    }

    Serial.println("initialization done.");

    //LOG START
    myFile = SD.open(filename + ".csv", FILE_WRITE);
    myFile.println("Rocket,Log,Started");
    myFile.println("x_accel,y_accel,z_accel,x_gyro,y_gyro,z_gyro,x_fix_angel,y_fix_angel,z_fix_angel,temperature,Pressure,Altitude");
    myFile.close();
}

void LOG_IMU_Accel (int16_t xa, int16_t ya, int16_t za) {

    myFile = SD.open(filename + ".csv", FILE_WRITE);
    if (myFile) {
        // Serial.print("Writing to " + filename + ".csv...");
        myFile.print('IMU(Accel)' + ',');
        myFile.print((String)xa + ',');
        myFile.print((String)ya + ',');
        myFile.print((String)za + ',');
        myFile.println();
        myFile.close();
    } else {
        Serial.println("error opening " + filename + ".csv");
    }

}

void LOG_IMU_Gyro (int16_t xg, int16_t yg, int16_t zg) {

    myFile = SD.open(filename + ".csv", FILE_WRITE);
    if (myFile) {
        // Serial.print("Writing to " + filename + ".csv...");
        myFile.print('IMU(Gyro)' + ',');
        myFile.print((String)xg + ',');
        myFile.print((String)yg + ',');
        myFile.print((String)zg + ',');
        myFile.println();
        myFile.close();
    } else {
        Serial.println("error opening " + filename + ".csv");
    }
}

void LOG_FIXED_ANGLE (int16_t x_fix_angel, int16_t y_fix_angel, int16_t z_fix_angel) {
    myFile = SD.open(filename + ".csv", FILE_WRITE);
    if (myFile) {
        // Serial.print("Writing to " + filename + ".csv...");
        myFile.print((String)x_fix_angel + ',');
        myFile.print((String)y_fix_angel + ',');
        myFile.print((String)z_fix_angel + ',');
        myFile.println();
        myFile.close();
    } else {
        Serial.println("error opening " + filename + ".csv");
    }
}

void LOG_BMP (double temperature, double pressure, double altitude) {
    myFile = SD.open(filename + ".csv", FILE_WRITE);
    if (myFile) {
        // Serial.print("Writing to " + filename + ".csv...");
        myFile.print((String)temperature + ',');
        myFile.print((String)pressure + ',');
        myFile.print((String)altitude);
        myFile.println();
        myFile.close();
    }
}

void EJECTION_LOG() {
    myFile = SD.open(filename + ".csv", FILE_WRITE);
    myFile.println("ejection");
    myFile.close();
}




