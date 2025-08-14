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
#ifndef DOUBLE_BUTTON_DOUBLE_BUTTON_H_
#define DOUBLE_BUTTON_DOUBLE_BUTTON_H_

/**
 *******************************************************************************
 * @brief USER INCLUDES
 *******************************************************************************
 */
#include "main.h"

/**
 *******************************************************************************
 * @brief USER DEFINE
 *******************************************************************************
 */
#define INCREASE_MAX 	40
#define INCREASE_MIN 	10
#define INCREASE_UP		10
#define INCREASE_DOWN	10

/**
 *******************************************************************************
 * @brief USER GLOBAL VARIABLES
 *******************************************************************************
 */
extern uint8_t gDoubleButtonPouring;

/**
 *******************************************************************************
 * @brief USER STRUCT/ENUM
 *******************************************************************************
 */
enum
{
	CLICK_OFF,
	CLICK_UP,
	CLICK_DOWN
};

typedef struct
{
    GPIO_TypeDef *port;
    uint16_t pin;
}buttonPinConfig_t;

typedef struct
{
	uint8_t increase;
	uint8_t reduce;

}doubleButtonPouring_t;

/**
 *******************************************************************************
 * @brief USER FUNCTIONS
 *******************************************************************************
 */
void vDoubleButtonState(uint8_t state);

#endif /* DOUBLE_BUTTON_DOUBLE_BUTTON_H_ */
