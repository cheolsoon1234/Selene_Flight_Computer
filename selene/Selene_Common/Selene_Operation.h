//
// Selene Rocket Computer Main Operation Code
//

#ifndef SELENE_COMMON_SELENE_OPERATION_H
#define SELENE_COMMON_SELENE_OPERATION_H

//////////////////////////////////////////////
/*                 함수 선언                  */
//////////////////////////////////////////////

// IMU 동작함수
void IMU_OP();

// 시간 동작함수
void DT_OP();

// 상호보완필터 동작함수
void Filtering_OP();

//기압센서 동작함수
void BMP_OP();

// LOG 동작함수
void SD_OP();

// 사출 동작함수
void EJECT_OP();

#endif //SELENE_COMMON_SELENE_OPERATION_H
