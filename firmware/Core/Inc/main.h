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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define TIM2_CH1_Haptic_Pin GPIO_PIN_0
#define TIM2_CH1_Haptic_GPIO_Port GPIOA
#define TIM1_CH1_BL_Screen_Pin GPIO_PIN_8
#define TIM1_CH1_BL_Screen_GPIO_Port GPIOA
#define RST_Screen_Pin GPIO_PIN_9
#define RST_Screen_GPIO_Port GPIOA
#define DC_Screen_Pin GPIO_PIN_10
#define DC_Screen_GPIO_Port GPIOA
#define CS_S_Pin GPIO_PIN_11
#define CS_S_GPIO_Port GPIOA
#define Flashing_SWDIO_Pin GPIO_PIN_13
#define Flashing_SWDIO_GPIO_Port GPIOA
#define Flashing_SWCLK_Pin GPIO_PIN_14
#define Flashing_SWCLK_GPIO_Port GPIOA
#define ACC_Shutdown_Pin GPIO_PIN_2
#define ACC_Shutdown_GPIO_Port GPIOD
#define Heart_Rate_INT_Pin GPIO_PIN_9
#define Heart_Rate_INT_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
