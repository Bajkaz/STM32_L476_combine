/*
 * diodes.h
 *
 *  Created on: Aug 13, 2025
 *      Author: szyszc0685
 */

#ifndef DIODES_DIODES_H_
#define DIODES_DIODES_H_

#include "main.h"

typedef enum
{
	BLINK_OFF,
	BLINK_ON
}diodesStateTypdef;

static diodesStateTypdef diodesState;

void vDiodesState(uint8_t state);

#endif /* DIODES_DIODES_H_ */
