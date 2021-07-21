

#include "stm8l15x.h"
#include "stm8l15x_gpio.h"
#include "LED.h"

/**
  * @brief  Initialize port for LED.
  * @param  None.
  * @retval  None.
**/

void LED_Init(void)
{
	GPIO_Init(LED_IOPORT, LED_PIN_7, GPIO_Mode_Out_PP_High_Fast);
	// GPIO_Init(LED_IOPORT, LED_PIN_1, GPIO_Mode_Out_PP_Low_Slow);
	GPIO_Init(LED_IOPORC, LED_PIN_7, GPIO_Mode_Out_PP_High_Fast);
	return;
}

/**
  * @brief  LED0 Toggle.
  * @param  None.
  * @retval  None.
**/
void LED0_Toggle(void)
{
	GPIO_ToggleBits(LED_IOPORT, LED_PIN_7);

	return;
}

void LED1_Toggle(void)
{
	GPIO_ToggleBits(LED_IOPORC, LED_PIN_7);

	return;
}
