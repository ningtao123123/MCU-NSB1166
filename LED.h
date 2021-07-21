/**
******************************************************************************
* 	@file    	LED.h
* 	@author  	Alex����С��
* 	@version 	V1.0
* 	@date    	2019.5.1
* 	@brief   	LED Init, etc
*	@store   	�м�Proteus�������
*	@Link    	https://shop484534014.taobao.com/
*	@Email	 	844545015@qq.com
******************************************************************************
* 	@attention	All Rights Reserved  
**/

#ifndef __LED_H__
#define __LED_H__
#define LED_IOPORC GPIOC
#define LED_IOPORT GPIOE

#define LED_PIN_7 GPIO_Pin_7 //LED7

/**
  * @brief  LED OUTPUT High or Low.
  * @param  n=0,Output Low; n=1,Output High
**/

#define LED0(n) n ? GPIO_SetBits(LED_IOPORT, LED_PIN_0) : GPIO_ResetBits(LED_IOPORT, LED_PIN_0)
#define LED1(n) n ? GPIO_SetBits(LED_IOPORT, LED_PIN_1) : GPIO_ResetBits(LED_IOPORT, LED_PIN_1)

/* Private function prototypes -----------------------------------------------*/
void LED_Init(void);
void LED0_Toggle(void);
void LED1_Toggle(void);

#endif /* __LED_H__ */
