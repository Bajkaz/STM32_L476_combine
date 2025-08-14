/**
 ******************************************************************************
 *
 * @file    diodes.c
 *
 * @brief   Diodes functions.
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
#include "diodes.h"
#include "external_device.h"

/**
 *******************************************************************************
 * @brief USER GLOBAL VARIABLES
 *******************************************************************************
 */
extern externalDeviceStateTypedef deviceState;
extern extneralDeviceCurrentTypedef diodesCurrent;
/**
 *******************************************************************************
 * @brief USER FUNCTIONS
 *******************************************************************************
 */
/**
 *******************************************************************************
 * @brief Diodes configuration.
 *******************************************************************************
 */
static const diodePinConfig_t diodeConfig[DIODES_NUMBER] =
{
    [DIOD_RED]    = {DIOD_RED_GPIO_Port, DIOD_RED_Pin},
    [DIOD_ORANGE] = {DIOD_ORANGE_GPIO_Port, DIOD_ORANGE_Pin},
    [DIOD_GREEN]  = {DIOD_GREEN_GPIO_Port, DIOD_GREEN_Pin}
};

/**
 *******************************************************************************
 * @brief Diodes ON/OFF.
 *******************************************************************************
 */
void vDiodesOnOff(diodesId_t diode, GPIO_PinState state)
{
    deviceState.diodes[diode] = state; // zapamiętaj stan
    vDiodesCurrent(diode);             // od razu ustaw fizyczny pin
}

/**
 *******************************************************************************
 * @brief Current diodes.
 *******************************************************************************
 */
void vDiodesCurrent(uint8_t diode)
{
    HAL_GPIO_WritePin(diodeConfig[diode].port, diodeConfig[diode].pin, deviceState.diodes[diode]);
}
