#include "Selene_Common\\Selene_SetUp"
#include "Selene_Common\\Selene_Operation.h"

void setup()
{      
  delay(90000);
  Serial.begin(115200);
  
  setup_csv();
  setup_servo();
  setup_IMU();
  caliIMU();
  setup_BMP();
}
 
void loop(){ 
  IMU_OP();
  DT_OP();
  Filtering_OP();
  BMP_OP();
  SD_OP();
  EJECT_OP();
  
}
