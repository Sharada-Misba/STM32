#include <mpu6050.h>
#include <main.h>
#include <stdio.h>

extern I2C_HandleTypeDef hi2c1;

void mpu6050_init()
{

	HAL_StatusTypeDef rt = HAL_I2C_IsDeviceReady(&hi2c1, (DEVICE_ADDRESS <<1) + 0, 1, 100);
	  if(rt == HAL_OK)
	  {
	  	  printf(" MPU ready\n");
	  }
	  else
	  {
	  	  printf(" MPU not ready\n");
	  }
	  rt = HAL_I2C_IsDeviceReady(&hi2c1, (BMP_ADDRESS <<1) + 0, 1, 100);
	  	  if(rt == HAL_OK)
	  	  {
	  	  	  printf("BMP ready\n");
	  	  }
	  	  else
	  	  {
	  	  	  printf("BMP not ready\n");
	  	  }
	  uint8_t temp_data = FS_GYRO_500;
	  rt = HAL_I2C_Mem_Write(&hi2c1, (DEVICE_ADDRESS <<1) + 0, REG_CONFIG_GYRO, 1, &temp_data, 1, 100);
	  if(rt == HAL_OK)
	  {
		  printf("Configured gyroscope\n");
	  }
	  else
	  {
		  printf("Configure gyroscope failed\n");
	  }
	  temp_data = FS_ACC_4G;
	  rt = HAL_I2C_Mem_Write(&hi2c1, (DEVICE_ADDRESS <<1) + 0, REG_CONFIG_ACC, 1, &temp_data, 1, 100);
	  if(rt == HAL_OK)
	  {
	  	  printf("Configured accelerometer\n");
	  }
	  else
	  {
	      printf("Configure accelerometer failed\n");
	  }

	  temp_data = 0;
	  	  rt = HAL_I2C_Mem_Write(&hi2c1, (DEVICE_ADDRESS <<1) + 0, REG_USR_CTRL, 1, &temp_data, 1, 100);
	  	  if(rt == HAL_OK)
	  	  {
	  	  	  printf("Exiting from sleep mode\n\n");
	  	  }
	  	  else
	  	  {
	  	      printf("Exiting from sleep mode failed\n\n");
	  	  }
}
void mpu6050_read()
{
	uint8_t datax[2];
	uint8_t datay[2];
	uint8_t dataz[2];
	uint8_t datgx[2];
	uint8_t datgy[2];
	uint8_t datgz[2];
	//uint8_t datmx[2];

	uint8_t datt[2];

	int16_t x_acc;
	int16_t y_acc;
	int16_t z_acc;
	int16_t x_gyr;
	int16_t y_gyr;
	int16_t z_gyr;

	//int16_t x_mag;

	//int16_t temp;

	HAL_I2C_Mem_Read(&hi2c1, (DEVICE_ADDRESS <<1) + 1, REG_DATAX, 1, datax, 2, 100);
	x_acc=((int16_t)datax[0] << 8) + datax[1];
	printf("x_acc: %d  	 ",x_acc);
	HAL_I2C_Mem_Read(&hi2c1, (DEVICE_ADDRESS <<1) + 1, REG_DATAY, 1, datay, 2, 100);
	y_acc=((int16_t)datay[0] << 8) + datay[1];
	printf("y_acc: %d 	 ",y_acc);
	HAL_I2C_Mem_Read(&hi2c1, (DEVICE_ADDRESS <<1) + 1, REG_DATAZ, 1, dataz, 2, 100);
	z_acc=((int16_t)dataz[0] << 8) + dataz[1];
	printf("z_acc: %d \n",z_acc);

	HAL_I2C_Mem_Read(&hi2c1, (DEVICE_ADDRESS <<1) + 1, REG_DATGX, 1, datgx, 2, 100);
	x_gyr=((int16_t)datgx[0] << 8) + datgx[1];
	printf("x_gyr: %d  	 ",x_gyr);
	HAL_I2C_Mem_Read(&hi2c1, (DEVICE_ADDRESS <<1) + 1, REG_DATGY, 1, datgy, 2, 100);
	y_gyr=((int16_t)datgy[0] << 8) + datgy[1];
	printf("y_gyr: %d 	 ",y_gyr);
	HAL_I2C_Mem_Read(&hi2c1, (DEVICE_ADDRESS <<1) + 1, REG_DATGZ, 1, datgz, 2, 100);
	z_gyr=((int16_t)datgz[0] << 8) + datgz[1];
	printf("z_gyr: %d \n",z_gyr);



}


