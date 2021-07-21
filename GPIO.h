/**
  ********************************************************************************
  * @file    gpio.h
  * @author  hubin
  * @version V0.1
  * @date    30-Apr-2019
  * @brief   This file contains all functions prototypes and macros for the GPIO.
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __GPIO_H
#define __GPIO_H

/* Includes ------------------------------------------------------------------*/
#include "stm8l15x.h"

/* Exported types ------------------------------------------------------------*/
typedef struct
{
	const GPIO_TypeDef * const port;
	const GPIO_Pin_TypeDef pin;
	const BitStatus act_level;	// active levela
} Custom_GPIO_t;

/* Exported constants --------------------------------------------------------*/
#define MCU_TO_SOC_PWR_BTN_N_PORT     	GPIOA
#define MCU_TO_SOC_PWR_BTN_N_PIN      	GPIO_Pin_4

#define PWR_BTN_TO_MCU_N_PORT         	GPIOA
#define PWR_BTN_TO_MCU_N_PIN          	GPIO_Pin_5

#define MCU_TO_SOC_RST_BTN_N_PORT     	GPIOA
#define MCU_TO_SOC_RST_BTN_N_PIN      	GPIO_Pin_6

#define SIO_WDT_PORT                  	GPIOA
#define SIO_WDT_PIN                   	GPIO_Pin_7

#define MCU_TO_SOC_GPIO_BTN_N_PORT    	GPIOG
#define MCU_TO_SOC_GPIO_BTN_N_PIN     	GPIO_Pin_0

#define RST_BTN_TO_MCU_N_PORT         	GPIOG
#define RST_BTN_TO_MCU_N_PIN          	GPIO_Pin_1

#define AT_ATX_SEL_PORT               	GPIOG
#define AT_ATX_SEL_PIN                	GPIO_Pin_3

#define MCU_BYPASS_LED1_PROT          	GPIOE
#define MCU_BYPASS_LED1_PIN           	GPIO_Pin_0

#define MCU_BYPASS_LED2_PROT          	GPIOE
#define MCU_BYPASS_LED2_PIN           	GPIO_Pin_1

#define ATX_PG_PORT                   	GPIOB
#define ATX_PG_PIN                    	GPIO_Pin_1

#define SOC_SLP_S45_N_R_PORT          	GPIOC
#define SOC_SLP_S45_N_R_PIN           	GPIO_Pin_6

#define SOC_SLP_S3_N_R_PORT           	GPIOC
#define SOC_SLP_S3_N_R_PIN            	GPIO_Pin_7

#define SOC_PLTRST_N_PORT             	GPIOE
#define SOC_PLTRST_N_PIN              	GPIO_Pin_6

#define SOC_RSMRST_N_PORT             	GPIOE
#define SOC_RSMRST_N_PIN              	GPIO_Pin_7

#define BYPASS_GROUP0_GATE_EN_PORT    	GPIOB
#define BYPASS_GROUP0_GATE_EN_PIN     	GPIO_Pin_2

#define BYPASS_GROUP0_A_EN_PORT       	GPIOB
#define BYPASS_GROUP0_A_EN_PIN        	GPIO_Pin_4

#define BYPASS_GROUP0_B_EN_PORT       	GPIOB
#define BYPASS_GROUP0_B_EN_PIN        	GPIO_Pin_5

#define BYPASS_GROUP1_GATE_EN_PORT    	GPIOF
#define BYPASS_GROUP1_GATE_EN_PIN     	GPIO_Pin_5

#define BYPASS_GROUP1_A_EN_PORT       	GPIOB
#define BYPASS_GROUP1_A_EN_PIN        	GPIO_Pin_6

#define BYPASS_GROUP1_B_EN_PORT       	GPIOF
#define BYPASS_GROUP1_B_EN_PIN        	GPIO_Pin_7

#define BYPASS_GROUP1_C_EN_PORT       	GPIOB
#define BYPASS_GROUP1_C_EN_PIN        	GPIO_Pin_7

#define BYPASS_GROUP1_D_EN_PORT       	GPIOF
#define BYPASS_GROUP1_D_EN_PIN        	GPIO_Pin_0

#define BYPASS_GROUP2_GATE_EN_PORT    	GPIOD
#define BYPASS_GROUP2_GATE_EN_PIN     	GPIO_Pin_6

#define BYPASS_GROUP2_A_EN_PORT       	GPIOF
#define BYPASS_GROUP2_A_EN_PIN        	GPIO_Pin_1

#define BYPASS_GROUP2_B_EN_PORT       	GPIOG
#define BYPASS_GROUP2_B_EN_PIN        	GPIO_Pin_4

#define BYPASS_GROUP2_C_EN_PORT       	GPIOF
#define BYPASS_GROUP2_C_EN_PIN        	GPIO_Pin_4

#define BYPASS_GROUP2_D_EN_PORT       	GPIOF
#define BYPASS_GROUP2_D_EN_PIN        	GPIO_Pin_6

#define NC_PORT                       	GPIOG
#define NC_PIN                        	GPIO_Pin_5

/* Exported macros ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
void gpio_config(void);

#endif /* __GPIO_H */

/****END OF FILE****/
