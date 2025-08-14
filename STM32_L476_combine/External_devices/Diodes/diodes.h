/**
 ******************************************************************************
 *
 * @file    diodes.h
 *
 * @brief   Diodes library.
 *
 * @author  Szymon Szczukowski
 *
 ******************************************************************************
 */
#ifndef DIODES_DIODES_H_
#define DIODES_DIODES_H_

/**
 *******************************************************************************
 * @brief USER INCLUDES
 *******************************************************************************
 */
#include "main.h"

/**
 *******************************************************************************
 * @brief USER STRUCT/ENUM
 *******************************************************************************
 */
enum
{
	BLINK_OFF,
	BLINK_ON
};

typedef enum
{
	DIOD_RED,
	DIOD_ORANGE,
	DIOD_GREEN,
	DIODES_NUMBER
}diodesId_t;

typedef struct
{
    GPIO_TypeDef *port;
    uint16_t pin;
}diodePinConfig_t;

/**
 *******************************************************************************
 * @brief USER FUNCTIONS
 *******************************************************************************
 */
void vDiodesOnOff(diodesId_t diode, GPIO_PinState state);
void vDiodesState(uint8_t state);
void vDiodesCurrent(uint8_t diode);
void vDiodesStopButtonTriger();

#endif /* DIODES_DIODES_H_ */
