////////////////////////////////////////////////////////
// Selene Rocket Computer PROGRAM : 2023.10.26 (First Program)
// author: https://github.com/cheolsoon0604
///////////////////////////////////////////////////

/////////////////////////////////////////
#include "Selene_Common\\Selene_BaseDef.h"
/////////////////////////////////////////
//        사용할 데이터 선언              //
/////////////////////////////////////////
#include "Selene_Common\\Selene_Operation.h"
#include "Selene_Common\\Selene_imu.h"
#include "Selene_Common\\Selene_SD.h"
#include "Selene_Common\\Selene_Servo.h"
/////////////////////////////////////////
//            실행 코드 선언             //
/////////////////////////////////////////
#include "Selene_Common\\Selene_imu.c"
#include "Selene_Common\\Selene_SD.c"
#include "Selene_Common\\Selene_Servo.c"
#include "Selene_Common\\Selene_Time.c"
/////////////////////////////////////////

void setup()
{      
  delay(90000);
  Serial.begin(115200);
  
  setup_IMU();
  setup_BMP();
  setup_csv();
  setup_servo();
}
 
void loop(){ 
  
  IMU_OP();
  BMP_OP();
  EJECT_OP();
  
}
