# CBSH_Selene_Flight_Computer
충북과학고등학교 로켓 동아리 Selene의 Flight Computer 동작 소스코드입니다.

Arduino UNO 보드와 MPU-6050, BMP180, Micro SD Card Reader Module을 사용하며 
비행시 Kalman Filtering된 IMU Data와 Raw Pressure Data를 Micro SD Card에 csv 파일 형태의 LOG로 저장하고 
낙하산 사출조건을 만족할 시 서보모터를 작동해 CO2 카트리지를 개방, 낙하산을 사출합니다.

