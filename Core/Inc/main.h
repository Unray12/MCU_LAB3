/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
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
#define EN0_Pin GPIO_PIN_0
#define EN0_GPIO_Port GPIOA
#define EN1_Pin GPIO_PIN_1
#define EN1_GPIO_Port GPIOA
#define EN2_Pin GPIO_PIN_2
#define EN2_GPIO_Port GPIOA
#define EN3_Pin GPIO_PIN_3
#define EN3_GPIO_Port GPIOA
#define Green1_Pin GPIO_PIN_4
#define Green1_GPIO_Port GPIOA
#define Yellow1_Pin GPIO_PIN_5
#define Yellow1_GPIO_Port GPIOA
#define Red1_Pin GPIO_PIN_6
#define Red1_GPIO_Port GPIOA
#define Green2_Pin GPIO_PIN_7
#define Green2_GPIO_Port GPIOA
#define SegA_Pin GPIO_PIN_0
#define SegA_GPIO_Port GPIOB
#define SegB_Pin GPIO_PIN_1
#define SegB_GPIO_Port GPIOB
#define SegC_Pin GPIO_PIN_2
#define SegC_GPIO_Port GPIOB
#define Yellow2_Pin GPIO_PIN_8
#define Yellow2_GPIO_Port GPIOA
#define Red2_Pin GPIO_PIN_9
#define Red2_GPIO_Port GPIOA
#define BTN0_Pin GPIO_PIN_10
#define BTN0_GPIO_Port GPIOA
#define BTN1_Pin GPIO_PIN_11
#define BTN1_GPIO_Port GPIOA
#define BTN2_Pin GPIO_PIN_12
#define BTN2_GPIO_Port GPIOA
#define SegD_Pin GPIO_PIN_3
#define SegD_GPIO_Port GPIOB
#define SegE_Pin GPIO_PIN_4
#define SegE_GPIO_Port GPIOB
#define SegF_Pin GPIO_PIN_5
#define SegF_GPIO_Port GPIOB
#define SegG_Pin GPIO_PIN_6
#define SegG_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
