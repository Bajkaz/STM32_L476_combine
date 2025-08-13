/*
 * double_button.h
 *
 *  Created on: Aug 13, 2025
 *      Author: szyszc0685
 */

#ifndef DOUBLE_BUTTON_DOUBLE_BUTTON_H_
#define DOUBLE_BUTTON_DOUBLE_BUTTON_H_

#include "main.h"

typedef enum
{
	CLICK_OFF,
	CLICK_UP = 2,
	CLICK_DOWN
}doubleButtonStateTypedef;

static doubleButtonStateTypedef doubleButtonState;

void vDoubleButtonState(uint8_t state);

#endif /* DOUBLE_BUTTON_DOUBLE_BUTTON_H_ */
