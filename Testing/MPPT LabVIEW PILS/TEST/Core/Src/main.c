/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body for MPPT communication via UART.
  ******************************************************************************
  * @attention
  *
  * (License text here)
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include <string.h>
#include "mppt.h"
#include <stdio.h>
#include <stdlib.h>
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
UART_HandleTypeDef huart2;

/* USER CODE BEGIN PV */
MPPT_t mppt;

uint8_t rx_byte;
char uart_rx_buffer[128];
char uart_tx_buffer[128];
volatile uint8_t idx = 0;
volatile uint8_t line_received = 0;
/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_USART2_UART_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/**
  * @brief Callback that is called when a UART byte is received via interrupt.
  *        It accumulates bytes into uart_rx_buffer until a newline is received.
*/

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
  if (huart->Instance == USART2)
  {
    //char dbg[32];
    //snprintf(dbg, sizeof(dbg), "Got: 0x%02X\r\n", rx_byte);
    //HAL_UART_Transmit(&huart2, (uint8_t*)dbg, strlen(dbg), HAL_MAX_DELAY);
    if (rx_byte == '\n' || rx_byte == '\r') {
      uart_rx_buffer[idx++] = '\n';
      uart_rx_buffer[idx] = '\0';
      line_received = 1;
    }
    else {
      if (idx < sizeof(uart_rx_buffer) - 1) {
        uart_rx_buffer[idx++] = rx_byte;
      } else {
        idx = 0;  // overflow protection
      }
    }
    HAL_GPIO_TogglePin(B1_GPIO_Port, B1_Pin);
    // Restart reception
    HAL_UART_Receive_IT(&huart2, &rx_byte, 1);  
  }
}
/* USER CODE END 0 */
int main(void)
{
  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* Configure the system clock */
  SystemClock_Config();

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_USART2_UART_Init();

  /* USER CODE BEGIN 2 */
  MPPT_Init(&mppt);
  // Start interrupt-based receive
  
  HAL_UART_Receive_IT(&huart2, &rx_byte, 1);
  
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    if(line_received)
    {
    float voltage = 0.0f, current = 0.0f;
    //char debug_buff[64];
    // Look for 'v' and 'i' in the buffer
    char *v_ptr = strchr((char*)uart_rx_buffer,'v');  // or 'V'
    char *i_ptr = strchr((char*)uart_rx_buffer, 'i');  // or 'I'

      if (v_ptr && i_ptr){
        voltage = strtof(v_ptr + 1, NULL);  // text after 'v'
        current = strtof(i_ptr + 1, NULL);  // text after 'i'

        //snprintf(debug_buff, sizeof(debug_buff), "V=%.2f I=%.2f\r\n", voltage, current);
        //HAL_UART_Transmit(&huart2, (uint8_t *)uart_rx_buffer, idx, HAL_MAX_DELAY);
        idx = 0;
        line_received = 0;

        // Call your MPPT logic here (if needed)
        MPPT_Update(&mppt, voltage, current);

        // Send back the computed duty cycle
        snprintf(uart_tx_buffer, sizeof(uart_tx_buffer), "%.2f", mppt.duty_cycle);
        HAL_UART_Transmit(&huart2, (uint8_t *)uart_tx_buffer, strlen(uart_tx_buffer), HAL_MAX_DELAY);
      }
      else
      {
          const char *error = "Parse error: V= or I= not found\n";
          HAL_UART_Transmit(&huart2, (uint8_t *)error, strlen(error), HAL_MAX_DELAY);
          idx = 0;
          line_received = 0;
      }

      HAL_UART_Transmit(&huart2, (uint8_t*)uart_rx_buffer, idx, HAL_MAX_DELAY);

    }
    HAL_GPIO_TogglePin(LD2_GPIO_Port,LD2_Pin);
    HAL_Delay(500);
  }
  /* USER CODE END WHILE */

  /* USER CODE BEGIN 3 */
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};
  RCC_PeriphCLKInitTypeDef PeriphClkInit = {0};

  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_MSI;
  RCC_OscInitStruct.MSIState = RCC_MSI_ON;
  RCC_OscInitStruct.MSICalibrationValue = 0;
  RCC_OscInitStruct.MSIClockRange = RCC_MSIRANGE_5;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK
                                | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_MSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;
  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
  PeriphClkInit.PeriphClockSelection = RCC_PERIPHCLK_USART2;
  PeriphClkInit.Usart2ClockSelection = RCC_USART2CLKSOURCE_PCLK1;
  if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInit) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief USART2 Initialization Function
  * @retval None
  */
static void MX_USART2_UART_Init(void)
{
  huart2.Instance = USART2;
  huart2.Init.BaudRate = 115200;
  huart2.Init.WordLength = UART_WORDLENGTH_8B;
  huart2.Init.StopBits = UART_STOPBITS_1;
  huart2.Init.Parity = UART_PARITY_NONE;
  huart2.Init.Mode = UART_MODE_TX_RX;
  huart2.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart2.Init.OverSampling = UART_OVERSAMPLING_16;
  huart2.Init.OneBitSampling = UART_ONE_BIT_SAMPLE_DISABLE;
  huart2.AdvancedInit.AdvFeatureInit = UART_ADVFEATURE_NO_INIT;

  if (HAL_UART_Init(&huart2) != HAL_OK)
  {
    Error_Handler();
  }
  //Routing interrupt to HAL_UART_RxCpltCallback() function
  HAL_NVIC_SetPriority(USART2_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(USART2_IRQn);
}

/**
  * @brief GPIO Initialization Function
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOH_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();

  HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, GPIO_PIN_RESET);

  GPIO_InitStruct.Pin = B1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_FALLING;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(B1_GPIO_Port, &GPIO_InitStruct);

  GPIO_InitStruct.Pin = LD2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(LD2_GPIO_Port, &GPIO_InitStruct);
}

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  __disable_irq();
  while (1)
  {
  }
}

#ifdef  USE_FULL_ASSERT
void assert_failed(uint8_t *file, uint32_t line)
{
}
#endif /* USE_FULL_ASSERT */
