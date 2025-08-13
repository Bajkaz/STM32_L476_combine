/*
 * water_pump.h
 *
 *  Created on: Aug 13, 2025
 *      Author: szyszc0685
 */

#ifndef WATER_PUMP_WATER_PUMP_H_
#define WATER_PUMP_WATER_PUMP_H_

#include "main.h"

enum
{
	WATER_PUMP_OFF,
	WATER_PUMP_ON
};

void vWaterPumpState(uint8_t state);

#endif /* WATER_PUMP_WATER_PUMP_H_ */
