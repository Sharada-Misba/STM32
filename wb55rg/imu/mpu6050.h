
#ifndef INC_MPU6050_H_
#define INC_MPU6050_H_


#define DEVICE_ADDRESS 0x68
#define BMP_ADDRESS 0x76

#define FS_GYRO_250 0
#define FS_GYRO_500 8
#define FS_GYRO_1000 16
#define FS_GYRO_2000 24

#define FS_ACC_2G 0
#define FS_ACC_4G 8
#define FS_ACC_8G 16
#define FS_ACC_16G 24

#define REG_CONFIG_GYRO 27
#define REG_CONFIG_ACC 28
#define REG_USR_CTRL 107


#define REG_DATAX 59
#define REG_DATAY 61
#define REG_DATAZ 63

#define REG_DATT 65

#define REG_DATGX 67
#define REG_DATGY 69
#define REG_DATGZ 71

void mpu6050_init();
void mpu6050_read();
#endif /* INC_MPU6050_H_ */


