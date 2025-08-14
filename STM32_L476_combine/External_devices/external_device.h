/**
 ******************************************************************************
 *
 * @file    external_device.h
 *
 * @brief   External devices library.
 *
 * @author  Szymon Szczukowski
 *
 ******************************************************************************
 */
#ifndef EXTERNAL_DEVICE_H_
#define EXTERNAL_DEVICE_H_

/**
 *******************************************************************************
 * @brief USER INCLUDES
 *******************************************************************************
 */
#include "main.h"
#include "diodes.h"

/**
 *******************************************************************************
 * @brief USER DEFINE
 *******************************************************************************
 */
#define DEVICE_NUMBER 	7
#define DIODES_NUMBER	3

/**
 *******************************************************************************
 * @brief USER STRUCT/ENUM
 *******************************************************************************
 */
enum
{
	EXTERNAL_DEVICE_DIODES,
	EXTERNAL_DEVICE_DOUBLE_BUTTON,
	EXTERNAL_DEVICE_ENGINE,
	EXTERNAL_DEVICE_MICROSWITCH,
	EXTERNAL_DEVICE_STOP_BUTTON,
	EXTERNAL_DEVICE_WATER_PUMP,
	EXTERNAL_DEVICE_LCD
};

typedef struct
{
	GPIO_PinState diodes[DIODES_NUMBER];
	uint8_t doubleButton;
	uint8_t engine;
	uint8_t microswitch;
	uint8_t stopButton;
	uint8_t waterPump;
	uint8_t lcd;
}externalDeviceStateTypedef;

typedef struct
{
	diodesId_t diodesID;
}extneralDeviceCurrentTypedef;

/**
 *******************************************************************************
 * @brief USER FUNCTIONS
 *******************************************************************************
 */
void vExternalDeviceError(uint8_t error);

#endif /* EXTERNAL_DEVICE_H_ */
