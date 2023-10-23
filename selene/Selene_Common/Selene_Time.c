//
// Created by admin on 2023-10-18.
//
#include "Selene_Common\\Selene_BaseDef.h"

void DT_OP() {
    now = millis();
    dt = (now - past) / 1000.0;
    past = now;
}