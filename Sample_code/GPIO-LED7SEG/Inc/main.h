/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32f1xx_hal.h"

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
#define A_SEG_Pin GPIO_PIN_0
#define A_SEG_GPIO_Port GPIOC
#define B_SEG_Pin GPIO_PIN_1
#define B_SEG_GPIO_Port GPIOC
#define C_SEG_Pin GPIO_PIN_2
#define C_SEG_GPIO_Port GPIOC
#define D_SEG_Pin GPIO_PIN_3
#define D_SEG_GPIO_Port GPIOC
#define E_SEG_Pin GPIO_PIN_4
#define E_SEG_GPIO_Port GPIOC
#define F_SEG_Pin GPIO_PIN_5
#define F_SEG_GPIO_Port GPIOC
#define G_SEG_Pin GPIO_PIN_6
#define G_SEG_GPIO_Port GPIOC
#define H_SEG_Pin GPIO_PIN_7
#define H_SEG_GPIO_Port GPIOC
#define NUM0_Pin GPIO_PIN_8
#define NUM0_GPIO_Port GPIOC
#define NUM1_Pin GPIO_PIN_9
#define NUM1_GPIO_Port GPIOC
#define NUM2_Pin GPIO_PIN_10
#define NUM2_GPIO_Port GPIOC
#define NUM3_Pin GPIO_PIN_11
#define NUM3_GPIO_Port GPIOC
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
