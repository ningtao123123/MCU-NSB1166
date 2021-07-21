/**




/**
  * @brief  Initialize port for KEY.
  * @param  None.
  * @retval  None.
**/
#include <string.h>
#include "stm8l15x_gpio.h"
#include "KEY.h"

void KEY_Init(void)//gpioc设置成输入模式，悬空输入，
{
	GPIO_Init(KEY_IOPORT, KEY_PIN, GPIO_Mode_In_FL_IT);

	return;
}

bool KEY_Read(void)
{
    if(GPIO_ReadInputDataBit(KEY_IOPORT, KEY_PIN) == 0)return FALSE;
    else return TRUE;
}




