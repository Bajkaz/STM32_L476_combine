/*
 * double_button.c
 *
 *  Created on: Aug 13, 2025
 *      Author: szyszc0685
 */

#include "double_button.h"

void vDoubleButtonState(uint8_t state)
{
	switch (state)
	{
		case CLICK_OFF:

			break;
		case CLICK_UP:

			break;
		case CLICK_DOWN:

			break;
		default:
			doubleButtonState = CLICK_OFF;
			break;
	}
}
