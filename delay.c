


/* Includes ------------------------------------------------------------------*/
#include "delay.h"

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
static void delay_4us(void);
static void delay_1ms(void);
/* Private functions ---------------------------------------------------------*/
/* Public functions ----------------------------------------------------------*/

/**
  * @brief  delay_1us
  * @note   None
  * @param  None: None
  * @retval None
  */
void delay_4us(void)
{
	volatile u8 cnt = 7;
	while(cnt--)
		nop();
}

/**
  * @brief  delay_us
  * @note   None
  * @param  us
  * @retval None
  */
void delay_us(u16 us)
{
	volatile u16 cnt = us >> 2;
	cnt = (cnt * 10) / 11;
	while(cnt--)
		delay_4us();
}

/**
  * @brief  delay_1ms
  * @note   None
  * @param  None: None
  * @retval None
  */
void delay_1ms(void)
{
	volatile u16 cnt = 837;
	while(cnt--)
		cnt = cnt;
}

/**
  * @brief  delay_ms
  * @note   None
  * @param  ms
  * @retval None
  */
void delay_ms(u16 ms)
{
	volatile u16 cnt = ms;
	while(cnt--)
		delay_1ms();
}

/**
  * @brief  delay_test
  * @note   None
  * @param  None: None
  * @retval None
  */
void delay_test(void)
{
	return;
}

/****END OF FILE****/








