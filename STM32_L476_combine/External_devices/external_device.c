/**
 ******************************************************************************
 *
 * @file    external_devices.c
 *
 * @brief   External devices functions.
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
#include "external_device.h"
#include "diodes.h"
#include "double_button.h"
#include "engine.h"
#include "lcd.h"
#include "microswitch.h"
#include "stop_button.h"
#include "water_pump.h"
#include "time.h"

/**
 *******************************************************************************
 * @brief USER GLOBAL VARIABLES
 *******************************************************************************
 */
uint8_t gExternalDevice;

externalDeviceStateTypedef deviceState;

/**
 *******************************************************************************
 * @brief USER FUNCTIONS
 *******************************************************************************
 */
/**
 *******************************************************************************
 * @brief External devices error.
 *******************************************************************************
 */
void vExternalDeviceError(uint8_t error)
{
;
}

/**
 *******************************************************************************
 * @brief External devices main control.
 *******************************************************************************
 */
void vExternalDeviceMainControl()
{

}
