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

#ifndef __eeprom_H__
#define __eeprom_H__
#include "stm8l15x_flash.h"

/**
  * @brief  LED OUTPUT High or Low.
  * @param  n=0,Output Low; n=1,Output High
**/

#define LED0(n)    n?GPIO_SetBits(LED_IOPORT, LED_PIN_0):GPIO_ResetBits(LED_IOPORT, LED_PIN_0)      
#define LED1(n)    n?GPIO_SetBits(LED_IOPORT, LED_PIN_1):GPIO_ResetBits(LED_IOPORT, LED_PIN_1)


/* Private function prototypes -----------------------------------------------*/
void Init_EEPROM(void) ;
void __eeprom_write_16(unsigned short addr_eep, unsigned short data);
s16__eeprom_read_16(unsigned short addr_eep);
void __eeprom_write_8(unsigned short addr_eep, unsigned char data);
s8__eeprom_read_8(unsigned short addr_eep);
#endif    /* __LED_H__ */


