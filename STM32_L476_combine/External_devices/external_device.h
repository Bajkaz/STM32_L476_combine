/*
 * external_device.h
 *
 *  Created on: Aug 13, 2025
 *      Author: szyszc0685
 */

#ifndef EXTERNAL_DEVICE_H_
#define EXTERNAL_DEVICE_H_

#include "main.h"

#define DEVICE_NUMBER 	6

enum
{
	EXTERNAL_DEVICE_DIODES,
	EXTERNAL_DEVICE_DOUBLE_BUTTON,
	EXTERNAL_DEVICE_ENGINE,
	EXTERNAL_DEVICE_MICROSWITCH,
	EXTERNAL_DEVICE_STOP_BUTTON,
	EXTERNAL_DEVICE_WATER_PUMP,
};

typedef struct
{
	uint8_t diodes;
	uint8_t doubleButton;
	uint8_t engine;
	uint8_t microswitch;
	uint8_t stopButton;
	uint8_t waterPump;
}externalDeviceStateTypedef;

void vExternalDeviceError(uint8_t error);

#endif /* EXTERNAL_DEVICE_H_ */
