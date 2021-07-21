/**
******************************************************************************
* 	@file    	CLK.h
* 	@author  	Alex����С��
* 	@version 	V1.0
* 	@date    	2019.5.1
* 	@brief   	CLK Init, etc
*	@store   	�м�Proteus�������
*	@Link    	https://shop484534014.taobao.com/
*	@Email	 	844545015@qq.com
******************************************************************************
* 	@attention	All Rights Reserved  
**/

#ifndef __CLK_H__
#define __CLK_H__
 
#include "stm8l15x.h"
#include "delay.h"

/* Private function prototypes -----------------------------------------------*/
void CLK_HSE_Config(void);
void CLK_HSI_Config(void);
void CLK_LSE_Config(void);
void CLK_LSI_Config(void);
void clc_Config(void);
#endif    /* __CLK_H__ */


