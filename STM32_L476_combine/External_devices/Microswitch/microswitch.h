/*
 * microswitch.h
 *
 *  Created on: Aug 13, 2025
 *      Author: szyszc0685
 */

#ifndef MICROSWITCH_MICROSWITCH_H_
#define MICROSWITCH_MICROSWITCH_H_

#include "main.h"

enum
{
	MICROSWITCH_OFF,
	MICROSWITCH_ON
};


void vMicroswitchState(uint8_t state);

#endif /* MICROSWITCH_MICROSWITCH_H_ */
