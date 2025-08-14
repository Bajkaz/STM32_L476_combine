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
/**
 *******************************************************************************
 * @brief USER FUNCTIONS
 *******************************************************************************
 */
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
void vDoubleButtonState(uint8_t button)
{
	if(button == CLICK_UP)
	{
		vDoubleButtonClickUp();
	}
	else if(button == CLICK_DOWN)
	{
		vDoubleButtonClickDown();
	}
}
