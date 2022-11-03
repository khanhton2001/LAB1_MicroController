/* USER CODE BEGIN LAB1_Exercise6 Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

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
TIM_HandleTypeDef htim2;

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_TIM2_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_TIM2_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */

  HAL_GPIO_WritePin(one_GPIO_Port, one_Pin , SET) ;
  HAL_GPIO_WritePin(two_GPIO_Port, two_Pin , SET) ;
  HAL_GPIO_WritePin(three_GPIO_Port, three_Pin , SET) ;
  HAL_GPIO_WritePin(four_GPIO_Port, four_Pin , SET) ;
  HAL_GPIO_WritePin(five_GPIO_Port, five_Pin , SET) ;
  HAL_GPIO_WritePin(six_GPIO_Port, six_Pin , SET) ;
  HAL_GPIO_WritePin(seven_GPIO_Port, seven_Pin , SET) ;
  HAL_GPIO_WritePin(eight_GPIO_Port, eight_Pin , SET) ;
  HAL_GPIO_WritePin(nine_GPIO_Port, nine_Pin , SET) ;
  HAL_GPIO_WritePin(ten_GPIO_Port, ten_Pin , SET) ;
  HAL_GPIO_WritePin(eleven_GPIO_Port, eleven_Pin , SET) ;
  HAL_GPIO_WritePin(twelve_GPIO_Port, twelve_Pin , SET) ;

  int counter = 1 ; int count = 12 ;
  int hour = 0 ; int minute = 0 ;
  void clearAllClock() ;
  void setNumberOnClock (int num);
  void clearNumberOnClock(int number) ;

  while (1)
  {
    /* USER CODE END WHILE */
	  if(counter == 13){counter = 1 ; minute++ ;  HAL_GPIO_TogglePin(twelve_GPIO_Port, twelve_Pin) ; }

	  if(minute == 12 ){minute = 1 ; hour++ ; }
	  if(hour == 12){setNumberOnClock(0) ;hour = 0 ; }
	  if(hour == 0){ setNumberOnClock(0) ;}
	  if(minute == 1){setNumberOnClock(1) ; }
	  if(minute == 2){setNumberOnClock(2) ; clearNumberOnClock(1) ;   }
	  if(hour == 1){setNumberOnClock(1); clearNumberOnClock(0) ;    }
	  if(hour == 2){setNumberOnClock(2); clearNumberOnClock(1) ;    }
	  if(minute == 3){setNumberOnClock(3) ; clearNumberOnClock(2) ;   }
	  	  if(hour == 4){setNumberOnClock(4) ; clearNumberOnClock(3) ;    }
	  	  if(hour == 5){setNumberOnClock(5) ; clearNumberOnClock(4) ;  }
	  	  if(hour == 6){setNumberOnClock(6) ; clearNumberOnClock(5) ;    }
	  	  if(hour == 7){setNumberOnClock(7) ; clearNumberOnClock(6) ;   }
	  	  if(hour == 8){setNumberOnClock(8) ; clearNumberOnClock(7) ;   }
	  	  if(hour == 9){setNumberOnClock(9) ; clearNumberOnClock(8) ;    }
	  	  if(hour == 10){setNumberOnClock(10) ; clearNumberOnClock(9) ;   }
	  	  if(hour == 11){setNumberOnClock(11) ;clearNumberOnClock(10) ;    }


	  if(minute == 4){setNumberOnClock(4) ; clearNumberOnClock(3) ;    }
	  if(minute == 5){setNumberOnClock(5) ; clearNumberOnClock(4) ;  }
	  if(minute == 6){setNumberOnClock(6) ; clearNumberOnClock(5) ;    }
	  if(minute == 7){setNumberOnClock(7) ; clearNumberOnClock(6) ;   }
	  if(minute == 8){setNumberOnClock(8) ; clearNumberOnClock(7) ;   }
	  if(minute == 9){setNumberOnClock(9) ; clearNumberOnClock(8) ;    }
	  if(minute == 10){setNumberOnClock(10) ; clearNumberOnClock(9) ;   }
	  if(minute == 11){setNumberOnClock(11) ;clearNumberOnClock(10) ;    }
	  if(minute == 12){setNumberOnClock(0); clearNumberOnClock(11) ;    }





  	  switch(counter){


  	  case 1:

          HAL_GPIO_TogglePin(one_GPIO_Port , one_Pin) ;
  		  counter++ ;
  		  break ;

  	  case 2:
  		  HAL_GPIO_TogglePin(one_GPIO_Port , one_Pin ) ;
  		  HAL_GPIO_TogglePin(two_GPIO_Port , two_Pin ) ;
  		  counter++ ;
  		  break ;

  	  case 3:
  			  HAL_GPIO_TogglePin(three_GPIO_Port , three_Pin ) ;
  			  HAL_GPIO_TogglePin(two_GPIO_Port , two_Pin ) ;
  			  counter++ ;
  			  break ;

  	  case 4:
  	  	      HAL_GPIO_TogglePin(three_GPIO_Port , three_Pin ) ;
  	  		  HAL_GPIO_TogglePin(four_GPIO_Port , four_Pin ) ;
  	  		  counter++ ;
  	  		  break ;

  	  case 5:
  	  	  HAL_GPIO_TogglePin(five_GPIO_Port , five_Pin ) ;
  	  	  HAL_GPIO_TogglePin(four_GPIO_Port , four_Pin ) ;
  	  	  counter++ ;
  	  	  break ;

  	  case 6:
  		  HAL_GPIO_TogglePin(five_GPIO_Port , five_Pin ) ;
  		  HAL_GPIO_TogglePin(six_GPIO_Port , six_Pin ) ;
  		  counter++ ;
  		  break ;

  	  case 7:
  		  HAL_GPIO_TogglePin(six_GPIO_Port , six_Pin ) ;
  		  HAL_GPIO_TogglePin(seven_GPIO_Port , seven_Pin ) ;
  		  counter++ ;
  		  break ;

  	  case 8:
  		  HAL_GPIO_TogglePin(seven_GPIO_Port , seven_Pin ) ;
  		  HAL_GPIO_TogglePin(eight_GPIO_Port , eight_Pin ) ;
  		  counter++ ;
  		  break ;

  	  case 9:
  		  HAL_GPIO_TogglePin(nine_GPIO_Port , nine_Pin ) ;
  		  HAL_GPIO_TogglePin(eight_GPIO_Port , eight_Pin ) ;
  		  counter++ ;
  		  break ;

  	  case 10:
  		  HAL_GPIO_TogglePin(nine_GPIO_Port , nine_Pin ) ;
  		  HAL_GPIO_TogglePin(ten_GPIO_Port , ten_Pin ) ;
  		  counter++ ;
  		  break ;

  	  case 11:
  		  HAL_GPIO_TogglePin(ten_GPIO_Port , ten_Pin ) ;
  		  HAL_GPIO_TogglePin(eleven_GPIO_Port , eleven_Pin ) ;
  		  counter++ ;
  		  break ;

  	  case 12:
  		  HAL_GPIO_TogglePin(eleven_GPIO_Port , eleven_Pin ) ;
  		  HAL_GPIO_TogglePin(twelve_GPIO_Port , twelve_Pin ) ;
  		  counter++ ;
  		  break ;


  	  case 13:

  		  	  counter++ ;

  	  case 14:
  		  count-- ;
  		  clearNumberOnClock(count) ;
  		  break ;



  	  default:
  		  break ;
  	  }



	      /* USER CODE BEGIN 3 */
	  	  HAL_Delay(250) ;

	  }

}



    /* USER CODE BEGIN 3 */


  /* USER CODE END 3 */

void clearAllClock(){
	      HAL_GPIO_WritePin(one_GPIO_Port, one_Pin , SET) ;
		  HAL_GPIO_WritePin(two_GPIO_Port, two_Pin , SET) ;
		  HAL_GPIO_WritePin(three_GPIO_Port, three_Pin , SET) ;
		  HAL_GPIO_WritePin(four_GPIO_Port, four_Pin , SET) ;
		  HAL_GPIO_WritePin(five_GPIO_Port, five_Pin , SET) ;
		  HAL_GPIO_WritePin(six_GPIO_Port, six_Pin , SET) ;
		  HAL_GPIO_WritePin(seven_GPIO_Port, seven_Pin , SET) ;
		  HAL_GPIO_WritePin(eight_GPIO_Port, eight_Pin , SET) ;
		  HAL_GPIO_WritePin(nine_GPIO_Port, nine_Pin , SET) ;
		  HAL_GPIO_WritePin(ten_GPIO_Port, ten_Pin , SET) ;
		  HAL_GPIO_WritePin(eleven_GPIO_Port, eleven_Pin , SET) ;
		  HAL_GPIO_WritePin(twelve_GPIO_Port, twelve_Pin , SET) ;

}

void clearNumberOnClock (int num){
	switch(num){

	case 0:
		HAL_GPIO_WritePin(twelve_GPIO_Port ,twelve_Pin, SET) ;
		break ;

	case 1:
		HAL_GPIO_WritePin(one_GPIO_Port ,one_Pin, SET) ;
		break ;

	case 2:
	    HAL_GPIO_WritePin(two_GPIO_Port ,two_Pin, SET) ;
		break ;

	case 3:
		HAL_GPIO_WritePin(three_GPIO_Port , three_Pin ,SET) ;
		break ;

	case 4:
		HAL_GPIO_WritePin(four_GPIO_Port, four_Pin,SET) ;
		break;

	case 5:
		HAL_GPIO_WritePin(five_GPIO_Port,five_Pin,SET) ;
		break ;

	case 6:
		HAL_GPIO_WritePin(six_GPIO_Port,six_Pin,SET) ;
		break;

	case 7:
		HAL_GPIO_WritePin(seven_GPIO_Port,seven_Pin,SET) ;
		break ;

	case 8:
		HAL_GPIO_WritePin(eight_GPIO_Port,eight_Pin,SET) ;
		break;

	case 9:
		HAL_GPIO_WritePin(nine_GPIO_Port,nine_Pin,SET) ;
		break ;

	case 10:
		HAL_GPIO_WritePin(ten_GPIO_Port,ten_Pin, SET);
		break ;

	case 11:
		HAL_GPIO_WritePin(eleven_GPIO_Port,eleven_Pin,SET);
		break ;




	}

};

void setNumberOnClock (int num){
	switch(num){

	case 0:

		HAL_GPIO_WritePin(twelve_GPIO_Port ,twelve_Pin, RESET) ;
		break ;

	case 1:

		HAL_GPIO_WritePin(one_GPIO_Port ,one_Pin, RESET) ;
		break ;

	case 2:

	    HAL_GPIO_WritePin(two_GPIO_Port ,two_Pin, RESET) ;
		break ;

	case 3:

		HAL_GPIO_WritePin(three_GPIO_Port , three_Pin ,RESET) ;
		break ;

	case 4:

		HAL_GPIO_WritePin(four_GPIO_Port, four_Pin,RESET) ;
		break;

	case 5:

		HAL_GPIO_WritePin(five_GPIO_Port,five_Pin,RESET) ;
		break ;

	case 6:

		HAL_GPIO_WritePin(six_GPIO_Port,six_Pin,RESET) ;
		break;

	case 7:

		HAL_GPIO_WritePin(seven_GPIO_Port,seven_Pin,RESET) ;
		break ;

	case 8:

		HAL_GPIO_WritePin(eight_GPIO_Port,eight_Pin,RESET) ;
		break;

	case 9:

		HAL_GPIO_WritePin(nine_GPIO_Port,nine_Pin,RESET) ;
		break ;

	case 10:

		HAL_GPIO_WritePin(ten_GPIO_Port,ten_Pin, RESET);
		break ;

	case 11:

		HAL_GPIO_WritePin(eleven_GPIO_Port,eleven_Pin,RESET);
		break ;




	}

};
/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief TIM2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM2_Init(void)
{

  /* USER CODE BEGIN TIM2_Init 0 */

  /* USER CODE END TIM2_Init 0 */

  TIM_ClockConfigTypeDef sClockSourceConfig = {0};
  TIM_MasterConfigTypeDef sMasterConfig = {0};

  /* USER CODE BEGIN TIM2_Init 1 */

  /* USER CODE END TIM2_Init 1 */
  htim2.Instance = TIM2;
  htim2.Init.Prescaler = 0;
  htim2.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim2.Init.Period = 65535;
  htim2.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim2.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_Base_Init(&htim2) != HAL_OK)
  {
    Error_Handler();
  }
  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  if (HAL_TIM_ConfigClockSource(&htim2, &sClockSourceConfig) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim2, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM2_Init 2 */

  /* USER CODE END TIM2_Init 2 */

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, one_Pin|two_Pin|three_Pin|four_Pin
                          |five_Pin|six_Pin|seven_Pin|eight_Pin
                          |nine_Pin|ten_Pin|eleven_Pin|twelve_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : one_Pin two_Pin three_Pin four_Pin
                           five_Pin six_Pin seven_Pin eight_Pin
                           nine_Pin ten_Pin eleven_Pin twelve_Pin */
  GPIO_InitStruct.Pin = one_Pin|two_Pin|three_Pin|four_Pin
                          |five_Pin|six_Pin|seven_Pin|eight_Pin
                          |nine_Pin|ten_Pin|eleven_Pin|twelve_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
