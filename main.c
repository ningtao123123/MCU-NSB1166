/**
  ******************************************************************************
  * @file    I2C/I2C_TwoBoards/I2C_DataExchange/Master/main.c
  * @author  MCD Application Team
  * @version V1.5.2
  * @date    30-September-2014
  * @brief   Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2014 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software 
  * distributed under the License is distributed on an "AS IS" BASIS, 
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "stm8l15x.h"
#include "main.h"
#include "LED.h"
#include "CLK.h"
#include "IIC_S.h"

/** @addtogroup STM8L15x_StdPeriph_Examples
  * @{
  */

/** @addtogroup I2C_TwoBoards
  * @{
  */

/** @addtogroup I2C_DataExchange
  * @{
  */

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
extern __IO uint8_t Slave_Buffer_Rx[255];

extern __IO uint8_t Tx_Idx,Rx_Idx,Fla;
__IO uint8_t a = 255;
/* Private function prototypes -----------------------------------------------*/

/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program.
  * @param  None
  * @retval None
  */

void main(void)
{
	
  clc_Config();

	enableInterrupts();
  
	/*Main Loop */
	while (1)
	{
		
	}
}

/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/