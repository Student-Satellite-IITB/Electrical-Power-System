/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
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
#define HBT_OBC_Pin GPIO_PIN_2
#define HBT_OBC_GPIO_Port GPIOE
#define HBT_ADCS_Pin GPIO_PIN_3
#define HBT_ADCS_GPIO_Port GPIOE
#define P1_ADC_Pin GPIO_PIN_4
#define P1_ADC_GPIO_Port GPIOA
#define P2_ADC_Pin GPIO_PIN_5
#define P2_ADC_GPIO_Port GPIOA
#define RDY_ADC_Pin GPIO_PIN_6
#define RDY_ADC_GPIO_Port GPIOA
#define STATUS_5V_Pin GPIO_PIN_8
#define STATUS_5V_GPIO_Port GPIOE
#define STATUS_3V3_Pin GPIO_PIN_9
#define STATUS_3V3_GPIO_Port GPIOE
#define SHDN_12V_Pin GPIO_PIN_10
#define SHDN_12V_GPIO_Port GPIOE
#define WDI_Pin GPIO_PIN_11
#define WDI_GPIO_Port GPIOE
#define SP1_CS_Pin GPIO_PIN_12
#define SP1_CS_GPIO_Port GPIOE
#define FLT_5V_PAY_Pin GPIO_PIN_12
#define FLT_5V_PAY_GPIO_Port GPIOB
#define EN_5V_PAY_Pin GPIO_PIN_13
#define EN_5V_PAY_GPIO_Port GPIOB
#define FLT_5V_EPS_Pin GPIO_PIN_14
#define FLT_5V_EPS_GPIO_Port GPIOB
#define EN_5V_EPS_Pin GPIO_PIN_15
#define EN_5V_EPS_GPIO_Port GPIOB
#define FLT_12V_ADCS_Pin GPIO_PIN_8
#define FLT_12V_ADCS_GPIO_Port GPIOD
#define EN_12V_ADCS_Pin GPIO_PIN_9
#define EN_12V_ADCS_GPIO_Port GPIOD
#define FLT_3V3_ADCS_Pin GPIO_PIN_10
#define FLT_3V3_ADCS_GPIO_Port GPIOD
#define EN_3V3_ADCS_Pin GPIO_PIN_11
#define EN_3V3_ADCS_GPIO_Port GPIOD
#define FLT_5V_ADCS_Pin GPIO_PIN_12
#define FLT_5V_ADCS_GPIO_Port GPIOD
#define EN_5V_ADCS_Pin GPIO_PIN_13
#define EN_5V_ADCS_GPIO_Port GPIOD
#define FLT_5V_OBC_Pin GPIO_PIN_14
#define FLT_5V_OBC_GPIO_Port GPIOD
#define EN_5V_OBC_Pin GPIO_PIN_15
#define EN_5V_OBC_GPIO_Port GPIOD
#define EPS_LED_Pin GPIO_PIN_6
#define EPS_LED_GPIO_Port GPIOC
#define FLT_3V3_EPS_Pin GPIO_PIN_7
#define FLT_3V3_EPS_GPIO_Port GPIOC
#define EN_5V_COMM_Pin GPIO_PIN_8
#define EN_5V_COMM_GPIO_Port GPIOC
#define FLT_5V_COMM_Pin GPIO_PIN_9
#define FLT_5V_COMM_GPIO_Port GPIOC
#define EN_3V3_ANT_Pin GPIO_PIN_8
#define EN_3V3_ANT_GPIO_Port GPIOA
#define FLT_3V3_ANT_Pin GPIO_PIN_9
#define FLT_3V3_ANT_GPIO_Port GPIOA
#define ANT_DEPLOY_STATUS_Pin GPIO_PIN_5
#define ANT_DEPLOY_STATUS_GPIO_Port GPIOD
#define ANT_DEPLOY_Pin GPIO_PIN_6
#define ANT_DEPLOY_GPIO_Port GPIOD

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
