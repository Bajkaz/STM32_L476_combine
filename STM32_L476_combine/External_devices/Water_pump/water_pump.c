/*
 * water_pump.c
 *
 *  Created on: Aug 13, 2025
 *      Author: szyszc0685
 */

#include "water_pump.h"

void vWaterPumpState(uint8_t state)
{
	switch (state)
	{
		case WATER_PUMP_OFF:

			break;
		case WATER_PUMP_ON:

			break;
		default:
			waterPumpState = WATER_PUMP_OFF;
			break;
	}
}
