/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define DIOD_RED_Pin GPIO_PIN_2
#define DIOD_RED_GPIO_Port GPIOE
#define DIOD_ORANGE_Pin GPIO_PIN_3
#define DIOD_ORANGE_GPIO_Port GPIOE
#define DIOD_GREEN_Pin GPIO_PIN_4
#define DIOD_GREEN_GPIO_Port GPIOE
#define ENGINE_CONTROL_Pin GPIO_PIN_5
#define ENGINE_CONTROL_GPIO_Port GPIOE
#define CONTROL_WATER_PUMP_Pin GPIO_PIN_6
#define CONTROL_WATER_PUMP_GPIO_Port GPIOA
#define TENSO_SENSOR_1_Pin GPIO_PIN_10
#define TENSO_SENSOR_1_GPIO_Port GPIOA
#define TENSO_SENSOR_2_Pin GPIO_PIN_11
#define TENSO_SENSOR_2_GPIO_Port GPIOA
#define TENSO_SENSOR_3_Pin GPIO_PIN_12
#define TENSO_SENSOR_3_GPIO_Port GPIOA
#define TENSO_SENSOR_4_Pin GPIO_PIN_13
#define TENSO_SENSOR_4_GPIO_Port GPIOA
#define STOP_BUTTON_Pin GPIO_PIN_8
#define STOP_BUTTON_GPIO_Port GPIOB
#define STOP_BUTTON_EXTI_IRQn EXTI9_5_IRQn
#define RESET_POURING_Pin GPIO_PIN_9
#define RESET_POURING_GPIO_Port GPIOB
#define RESET_POURING_EXTI_IRQn EXTI9_5_IRQn
#define DOUBLE_BUTTON_DOWN_Pin GPIO_PIN_0
#define DOUBLE_BUTTON_DOWN_GPIO_Port GPIOE
#define DOUBLE_BUTTON_DOWN_EXTI_IRQn EXTI0_IRQn
#define DOUBLE_BUTTON_UP_Pin GPIO_PIN_1
#define DOUBLE_BUTTON_UP_GPIO_Port GPIOE
#define DOUBLE_BUTTON_UP_EXTI_IRQn EXTI1_IRQn

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
