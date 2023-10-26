#include "Selene_Common\\Selene_imu.h"

void setup_IMU() {
    if (!mpu.begin(MPU6050_SCALE_2000DPS, MPU6050_RANGE_2G) && RepCNT < MAX_COUNT) {
        Serial.println("Could not find a valid IMU, check wiring!");
        RepCNT++;
        setup_IMU();
    }
    mpu.calibrateGyro();
}

void IMU_OP() {
    Vector acc = mpu.readNormalizeAccel();
    Vector gyr = mpu.readNormalizeGyro();

    // Calculate Pitch & Roll from accelerometer (deg)
    accPitch = -(atan2(acc.XAxis, sqrt(acc.YAxis*acc.YAxis + acc.ZAxis*acc.ZAxis))*180.0)/M_PI;
    accRoll  = (atan2(acc.YAxis, acc.ZAxis)*180.0)/M_PI;

    // Kalman filter
    kalPitch = kalmanY.update(accPitch, gyr.YAxis);
    kalRoll = kalmanX.update(accRoll, gyr.XAxis);

    // IMU LOG
    LOG_IMU_Accel(acc.XAxis, acc.YAxis, acc.ZAxis);
    LOG_IMU_Gyro(gyr.XAxis, gyr.YAxis, gyr.ZAxis);
    LOG_ANGLE_Accel(accPitch, accRoll);
    LOG_FIXED_ANGLE(kalPitch, kalRoll);

}