/**
******************************************************************************
* 	@file    	CLK.c
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

#include "stm8l15x_clk.h"
#include "CLK.h"


/**
  * @brief  Configure System Clock HSE/HSI/LSE/LSI ����ϵͳʱ��
  * @param  CLK_SYSCLKDiv ʱ�ӷ�Ƶ
  * @retval None
**/

void CLK_HSE_Config(void)    
{
    /* Select HSE as system clock source */
    CLK_SYSCLKSourceSwitchCmd(ENABLE);  
    CLK_SYSCLKSourceConfig(CLK_SYSCLKSource_HSE);
    /* system clock prescaler*/
	CLK_SYSCLKDivConfig(CLK_SYSCLKDiv_1);
	while (CLK_GetSYSCLKSource() != CLK_SYSCLKSource_HSE);  //�ȴ�ʱ���ȶ�
}

void CLK_HSI_Config(void)
{
    /* Select HSE as system clock source */
    CLK_SYSCLKSourceSwitchCmd(ENABLE);
    CLK_SYSCLKSourceConfig(CLK_SYSCLKSource_HSI);
    /**/
	CLK_SYSCLKDivConfig(CLK_SYSCLKDiv_1);
	while (CLK_GetSYSCLKSource() != CLK_SYSCLKSource_HSI);  //�ȴ�ʱ���ȶ�
}

void CLK_LSE_Config(void)
{
    /* Select HSE as system clock source */
    CLK_SYSCLKSourceSwitchCmd(ENABLE);
    CLK_SYSCLKSourceConfig(CLK_SYSCLKSource_LSE);
    /* system clock prescaler*/
	CLK_SYSCLKDivConfig(CLK_SYSCLKDiv_1);
	while (CLK_GetSYSCLKSource() != CLK_SYSCLKSource_LSE);  //�ȴ�ʱ���ȶ�
}

void CLK_LSI_Config(void)
{
    /* Select HSE as system clock source */
    CLK_SYSCLKSourceSwitchCmd(ENABLE);
    CLK_SYSCLKSourceConfig(CLK_SYSCLKSource_LSI);
    /* system clock prescaler*/
	CLK_SYSCLKDivConfig(CLK_SYSCLKDiv_1);
	while (CLK_GetSYSCLKSource() != CLK_SYSCLKSource_LSI);  //�ȴ�ʱ���ȶ�
}
void clc_Config(void)
{
   CLK_HSE_Config();
//    CLK_LSICmd();
    CLK_PeripheralClockConfig(CLK_Peripheral_I2C1,ENABLE);
    delay_ms(2);

}










