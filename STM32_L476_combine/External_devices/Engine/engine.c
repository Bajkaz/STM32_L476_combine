/*
 * engine.c
 *
 *  Created on: Aug 13, 2025
 *      Author: szyszc0685
 */

#include "engine.h"

void vEngineState(uint8_t state)
{
	switch (state)
	{
		case ENGINE_OFF:

			break;
		case ENGINE_ON:

			break;
		default:
			engineState = ENGINE_OFF;
			break;
	}
}
