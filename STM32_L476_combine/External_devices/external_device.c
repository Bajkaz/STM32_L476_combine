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
#include "tensomatric_sensor.h"
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

void vExternalDevicesTensomatricSensorState(uint8_t sensor)
{

}

/**
 *******************************************************************************
 * @brief External devices main control.
 *******************************************************************************
 */
void vExternalDeviceMainControl()
{
	//!< Local variables
	uint8_t tensomatricSensorState[TENSOMATRIC_SENSOR_MAX];

	//!< Checking how much liquid
	uint8_t liquidCounter = uDoubleButtonReturnCounter();

	//!< Supplying which vessel is located
	uint8_t combinedState = uTensomatricSensorReturnState();

	//!< Assigning sensor values
	tensomatricSensorState[TENSOMATRIC_SENSOR_1] = (combinedState >> TENSOMATRIC_SENSOR_1) & TENSOMATRIC_SENSOR_MASK;
	tensomatricSensorState[TENSOMATRIC_SENSOR_2] = (combinedState >> TENSOMATRIC_SENSOR_2) & TENSOMATRIC_SENSOR_MASK;
	tensomatricSensorState[TENSOMATRIC_SENSOR_3] = (combinedState >> TENSOMATRIC_SENSOR_3) & TENSOMATRIC_SENSOR_MASK;
	tensomatricSensorState[TENSOMATRIC_SENSOR_4] = (combinedState >> TENSOMATRIC_SENSOR_4) & TENSOMATRIC_SENSOR_MASK;

}
