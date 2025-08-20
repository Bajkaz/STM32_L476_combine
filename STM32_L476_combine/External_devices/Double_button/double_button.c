/**
 ******************************************************************************
 *
 * @file    double_button.h
 *
 * @brief   Double button library.
 *
 * @author  Szymon Szczukowski
 *
 ******************************************************************************
 */
/**
 *******************************************************************************
 * @brief USER INCLUDES
 *******************************************************************************
 */
#include "double_button.h"
#include "diodes.h"
#include "external_device.h"

/**
 *******************************************************************************
 * @brief USER GLOBAL VARIABLES
 *******************************************************************************
 */
uint8_t gDoubleButtonPouring;
uint8_t gDoubleButtonCounter = BUTTON_COUNTER_INIT;

/**
 *******************************************************************************
 * @brief USER FUNCTIONS
 *******************************************************************************
 */
/**
 *******************************************************************************
 * @brief Double button reset
 *******************************************************************************
 */
void vDoubleButtonReset()
{
	deviceState.doubleButton = CLICK_OFF;
	gExternalDevice = EXTERNAL_DEVICE_RESET;
}
/**
 *******************************************************************************
 * @brief Button click down
 *******************************************************************************
 */
void vDoubleButtonClickDown()
{
	if(gDoubleButtonPouring == INCREASE_MIN)
	{
		vDiodesOnOff(DIOD_RED, GPIO_PIN_SET);
		vDoubleButtonReset();
	}
	else
	{
		gDoubleButtonPouring -= INCREASE_DOWN;
		vDoubleButtonReset();
	}
}

/**
 *******************************************************************************
 * @brief Button click up
 *******************************************************************************
 */
void vDoubleButtonClickUp()
{
	if(gDoubleButtonPouring == INCREASE_MAX)
	{
		vDiodesOnOff(DIOD_RED, GPIO_PIN_SET);
		vDoubleButtonReset();
	}
	else
	{
		gDoubleButtonPouring += INCREASE_UP;
		vDoubleButtonReset();
	}
}

/**
 *******************************************************************************
 * @brief Double button state.
 *******************************************************************************
 */
void vDoubleButtonCounter(uint8_t state)
{
	switch (state)
	{
		case CLICK_UP:
			if(gDoubleButtonCounter < BUTTON_COUNTER_MAX)
				gDoubleButtonCounter += BUTTON_COUNTER_UP;
			break;
		case CLICK_DOWN:
			if(gDoubleButtonCounter > BUTTON_COUNTER_MIN)
				gDoubleButtonCounter -= BUTTON_COUNTER_DWON;
			break;
		case CLICK_OFF:
			gDoubleButtonCounter = BUTTON_COUNTER_INIT;
			break;
		default:
			break;
	}
}

/**
 *******************************************************************************
 * @brief Double button counter return.
 *******************************************************************************
 */
uint8_t uDoubleButtonReturnCounter()
{
	return gDoubleButtonCounter;
}

/**
 *******************************************************************************
 * @brief Double button state.
 *******************************************************************************
 */
void vDoubleButtonState(uint8_t button)
{
	switch (button)
	{
		case CLICK_UP:
			vDoubleButtonClickUp();
			vDoubleButtonCounter(button);
			break;
		case CLICK_DOWN:
			vDoubleButtonClickDown();
			vDoubleButtonCounter(button);
			break;
		case CLICK_OFF:
			vDoubleButtonCounter(button);
			break;
		default:
			;
			break;
	}
}
