//
// Created by admin on 2023-10-04.
//
#include "Selene_Common\\Selene_Servo.h"

void setup_servo() {
    myservo.attach(SERVO_PIN);
    myservo.write(initial_servo_angle);
}

void EJECT_OP() {

    max_altitude = max(max_altitude, Altitude);
    // if(angleFiY >0 || ((max_altitude - Altitude)>2)) {

    if(((max_altitude - Altitude) > EJECTION_ALT_DIFFERENCE)) { //ejection condition
        myservo.write(ejection_servo_angle); //ejection

        //ejection log
        EJECTION_LOG();
    }
}

