/**
******************************************************************************
* 	@file    	LED.c
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

#include "stm8l15x.h"
#include "stm8l15x_flash.h"
#include "eeprom.h"

void Init_EEPROM(void) //FLASH解锁
{
	/*FLASH编程时间定义*/
	FLASH_SetProgrammingTime(FLASH_ProgramTime_Standard);
	/* Unlock flash Data memory */
	FLASH_Unlock(FLASH_MemType_Data);
	/* Wait until Data EEPROM area unlocked flag is set*/
	while (FLASH_GetFlagStatus(FLASH_FLAG_DUL) == RESET)
	{
	}
}

void __eeprom_write_8(unsigned short addr_eep, unsigned char data) //写一个双字节数据
{
	FLASH_WaitForLastOperation(FLASH_MemType_Data);
	FLASH_Unlock(FLASH_MemType_Data);
	FLASH_ProgramByte(addr_eep, data);
	FLASH_WaitForLastOperation(FLASH_MemType_Data);
	FLASH_Lock(FLASH_MemType_Data);
}

s8__eeprom_read_8(unsigned short addr_eep) //读一个单字节数据
{
	s16 Save = 0;
	FLASH_WaitForLastOperation(FLASH_MemType_Data);
	FLASH_Unlock(FLASH_MemType_Data);
	Save = FLASH_ReadByte(addr_eep);
	FLASH_WaitForLastOperation(FLASH_MemType_Data);
	FLASH_Lock(FLASH_MemType_Data);
	return (Save);
}

void __eeprom_write_16(unsigned short addr_eep, unsigned short data) //写一个双字节数据
{
	FLASH_WaitForLastOperation(FLASH_MemType_Data);
	FLASH_Unlock(FLASH_MemType_Data);
	FLASH_ProgramByte(addr_eep, data / 256);
	FLASH_WaitForLastOperation(FLASH_MemType_Data);
	FLASH_ProgramByte(addr_eep + 1, data % 256);
	FLASH_WaitForLastOperation(FLASH_MemType_Data);
	FLASH_Lock(FLASH_MemType_Data);
}
s16__eeprom_read_16(unsigned short addr_eep) //读一个双字节数据
{
	s16 Save = 0;
	FLASH_WaitForLastOperation(FLASH_MemType_Data);
	FLASH_Unlock(FLASH_MemType_Data);
	Save = FLASH_ReadByte(addr_eep);
	Save = Save * 256;
	FLASH_WaitForLastOperation(FLASH_MemType_Data);
	Save += FLASH_ReadByte(addr_eep + 1);
	FLASH_WaitForLastOperation(FLASH_MemType_Data);
	FLASH_Lock(FLASH_MemType_Data);
	return (Save);
}




