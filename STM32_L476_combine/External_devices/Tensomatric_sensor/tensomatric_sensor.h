/**
 ******************************************************************************
 *
 * @file    tensometric_sensor.h
 *
 * @brief   Tensomatric  sensor library.
 *
 * @author  Szymon Szczukowski
 *
 ******************************************************************************
 */
#ifndef TENSOMATRIC_SENSOR_TENSOMATRIC_SENSOR_H_
#define TENSOMATRIC_SENSOR_TENSOMATRIC_SENSOR_H_

/**
 *******************************************************************************
 * @brief USER INCLUDES
 *******************************************************************************
 */
#include "main.h"

/**
 *******************************************************************************
 * @brief USER DEFINE
 *******************************************************************************
 */
#define TENSOMATRIC_SENSOR_MAX 	4
#define TENSOMATRIC_SENSOR_1	0
#define TENSOMATRIC_SENSOR_2	1
#define TENSOMATRIC_SENSOR_3	2
#define TENSOMATRIC_SENSOR_4	3

#define TENSOMATRIC_SENSOR_MASK	0x01

/**
 *******************************************************************************
 * @brief USER STRUCT/ENUM
 *******************************************************************************
 */

/**
 *******************************************************************************
 * @brief USER FUNCTIONS
 *******************************************************************************
 */
void vTensomatricSensorState(void);
uint8_t uTensomatricSensorRead(GPIO_TypeDef* gpioPort, uint16_t gpioPin);

#endif /* TENSOMATRIC_SENSOR_TENSOMATRIC_SENSOR_H_ */
