/*
 * engine.h
 *
 *  Created on: Aug 13, 2025
 *      Author: szyszc0685
 */

#ifndef ENGINE_ENGINE_H_
#define ENGINE_ENGINE_H_

#include "main.h"

typedef enum
{
	ENGINE_OFF,
	ENGINE_ON
}engineStateTypedef;

static engineStateTypedef engineState;

void vEngineState(uint8_t state);

#endif /* ENGINE_ENGINE_H_ */
