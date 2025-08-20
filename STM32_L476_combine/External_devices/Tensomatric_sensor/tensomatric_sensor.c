/**
 ******************************************************************************
 *
 * @file    tensomatric_sensor.c
 *
 * @brief   Tensomatric sensor function.
 *
 * @author  Szymon Szczukowski
 *
 ******************************************************************************
 */
/**
 *******************************************************************************
 * @brief USER INCLUDES
 *******************************************************************************
 */
#include "tensomatric_sensor.h"

/**
 *******************************************************************************
 * @brief USER GLOBAL VARIABLES
 *******************************************************************************
 */
uint8_t gTensomatricSensorState[TENSOMATRIC_SENSOR_MAX];

/**
 *******************************************************************************
 * @brief USER FUNCTIONS
 *******************************************************************************
 */
/**
 *******************************************************************************
 * @brief Read state of tensomatric sensors.
 *******************************************************************************
 */
uint8_t uTensomatricSensorRead(GPIO_TypeDef* gpioPort, uint16_t gpioPin)
{
	return (uint8_t)HAL_GPIO_ReadPin(gpioPort, gpioPin);
}

/**
 *******************************************************************************
 * @brief Return tensomatric sensors state.
 *******************************************************************************
 */
uint8_t  uTensomatricSensorReturnState(void)
{
	gTensomatricSensorState[TENSOMATRIC_SENSOR_1] = uTensomatricSensorRead(TENSO_SENSOR_1_GPIO_Port, TENSO_SENSOR_1_Pin);
	gTensomatricSensorState[TENSOMATRIC_SENSOR_2] = uTensomatricSensorRead(TENSO_SENSOR_2_GPIO_Port, TENSO_SENSOR_2_Pin);
	gTensomatricSensorState[TENSOMATRIC_SENSOR_3] = uTensomatricSensorRead(TENSO_SENSOR_3_GPIO_Port, TENSO_SENSOR_3_Pin);
	gTensomatricSensorState[TENSOMATRIC_SENSOR_4] = uTensomatricSensorRead(TENSO_SENSOR_4_GPIO_Port, TENSO_SENSOR_4_Pin);

	return (gTensomatricSensorState[TENSOMATRIC_SENSOR_1] << 0) |
		   (gTensomatricSensorState[TENSOMATRIC_SENSOR_2] << 1) |
		   (gTensomatricSensorState[TENSOMATRIC_SENSOR_3] << 2) |
		   (gTensomatricSensorState[TENSOMATRIC_SENSOR_4] << 3);
}
