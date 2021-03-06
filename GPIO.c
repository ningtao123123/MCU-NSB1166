
#include "gpio.h"

#define NC_NUM 21
Custom_GPIO_t NC_GPIO [NC_NUM] = {
  {GPIOG, GPIO_Pin_2, RESET},
  {GPIOE, GPIO_Pin_2, RESET},
  {GPIOE, GPIO_Pin_3, RESET},
  {GPIOE, GPIO_Pin_4, RESET},
  {GPIOE, GPIO_Pin_5, RESET},
  {GPIOD, GPIO_Pin_0, RESET},
  {GPIOD, GPIO_Pin_1, RESET},
  {GPIOD, GPIO_Pin_2, RESET},
  {GPIOD, GPIO_Pin_3, RESET},
  {GPIOB, GPIO_Pin_0, RESET},
  {GPIOB, GPIO_Pin_3, RESET},
  {GPIOD, GPIO_Pin_4, RESET},
  {GPIOD, GPIO_Pin_5, RESET},
  {GPIOD, GPIO_Pin_7, RESET},
  {GPIOG, GPIO_Pin_5, RESET},
  {GPIOG, GPIO_Pin_6, RESET},
  {GPIOG, GPIO_Pin_7, RESET},
  {GPIOC, GPIO_Pin_2, RESET},
  {GPIOC, GPIO_Pin_3, RESET},
  {GPIOC, GPIO_Pin_4, RESET},
  {GPIOC, GPIO_Pin_5, RESET}
};

void gpio_config(void)
{
	u8 i=0;
    //PA4 6
    GPIO_Init(MCU_TO_SOC_PWR_BTN_N_PORT,MCU_TO_SOC_PWR_BTN_N_PIN,GPIO_Mode_Out_PP_High_Slow);
    GPIO_Init(MCU_TO_SOC_RST_BTN_N_PORT,MCU_TO_SOC_RST_BTN_N_PIN,GPIO_Mode_Out_PP_High_Slow);
    //PG0 4 
    GPIO_Init(MCU_TO_SOC_GPIO_BTN_N_PORT,MCU_TO_SOC_GPIO_BTN_N_PIN,GPIO_Mode_Out_PP_Low_Slow);
    GPIO_Init(BYPASS_GROUP2_B_EN_PORT,BYPASS_GROUP2_B_EN_PIN,GPIO_Mode_Out_PP_Low_Slow);


	//E0 1 
	GPIO_Init(MCU_BYPASS_LED1_PROT, MCU_BYPASS_LED1_PIN, GPIO_Mode_Out_PP_Low_Slow);
	GPIO_Init(MCU_BYPASS_LED2_PROT, MCU_BYPASS_LED2_PIN, GPIO_Mode_Out_PP_Low_Slow);
	//B 2 4 5 
	GPIO_Init(BYPASS_GROUP0_GATE_EN_PORT, BYPASS_GROUP0_GATE_EN_PIN, GPIO_Mode_Out_PP_Low_Slow);
	GPIO_Init(BYPASS_GROUP0_A_EN_PORT, BYPASS_GROUP0_A_EN_PIN, GPIO_Mode_Out_PP_Low_Slow);
	GPIO_Init(BYPASS_GROUP0_B_EN_PORT, BYPASS_GROUP0_B_EN_PIN, GPIO_Mode_Out_PP_Low_Slow);
	//F5 B6 F7 B7 F0
	GPIO_Init(BYPASS_GROUP1_GATE_EN_PORT, BYPASS_GROUP1_GATE_EN_PIN, GPIO_Mode_Out_PP_Low_Slow);
	GPIO_Init(BYPASS_GROUP1_A_EN_PORT, BYPASS_GROUP1_A_EN_PIN, GPIO_Mode_Out_PP_Low_Slow);
	GPIO_Init(BYPASS_GROUP1_B_EN_PORT, BYPASS_GROUP1_B_EN_PIN, GPIO_Mode_Out_PP_Low_Slow);
	GPIO_Init(BYPASS_GROUP1_C_EN_PORT, BYPASS_GROUP1_C_EN_PIN, GPIO_Mode_Out_PP_Low_Slow);
	GPIO_Init(BYPASS_GROUP1_D_EN_PORT, BYPASS_GROUP1_D_EN_PIN, GPIO_Mode_Out_PP_Low_Slow);
	//D6 F1 E4 F4 F6
	GPIO_Init(BYPASS_GROUP2_GATE_EN_PORT, BYPASS_GROUP2_GATE_EN_PIN, GPIO_Mode_Out_PP_Low_Slow);
	GPIO_Init(BYPASS_GROUP2_A_EN_PORT, BYPASS_GROUP2_A_EN_PIN, GPIO_Mode_Out_PP_Low_Slow);
	GPIO_Init(BYPASS_GROUP2_B_EN_PORT, BYPASS_GROUP2_B_EN_PIN, GPIO_Mode_Out_PP_Low_Slow);
	GPIO_Init(BYPASS_GROUP2_C_EN_PORT, BYPASS_GROUP2_C_EN_PIN, GPIO_Mode_Out_PP_Low_Slow);
	GPIO_Init(BYPASS_GROUP2_D_EN_PORT, BYPASS_GROUP2_D_EN_PIN, GPIO_Mode_Out_PP_Low_Slow);
	//E 3 0
	GPIO_Init(AT_ATX_SEL_PORT, AT_ATX_SEL_PIN, GPIO_Mode_In_FL_No_IT);

	GPIO_Init(MCU_TO_SOC_GPIO_BTN_N_PORT, MCU_TO_SOC_GPIO_BTN_N_PIN, GPIO_Mode_Out_PP_High_Slow);
	//E B   	 1
	GPIO_Init(RST_BTN_TO_MCU_N_PORT, RST_BTN_TO_MCU_N_PIN, GPIO_Mode_In_FL_IT);
	GPIO_Init(ATX_PG_PORT, ATX_PG_PIN, GPIO_Mode_In_FL_IT);
	EXTI_SetPinSensitivity(EXTI_Pin_1, EXTI_Trigger_Rising_Falling);
	//A   		 5
	GPIO_Init(PWR_BTN_TO_MCU_N_PORT, PWR_BTN_TO_MCU_N_PIN, GPIO_Mode_In_FL_IT);
	EXTI_SetPinSensitivity(EXTI_Pin_5, EXTI_Trigger_Rising_Falling);
	//A E C  	 7
	GPIO_Init(SIO_WDT_PORT, SIO_WDT_PIN, GPIO_Mode_In_FL_IT);
	GPIO_Init(SOC_RSMRST_N_PORT, SOC_RSMRST_N_PIN, GPIO_Mode_In_FL_No_IT);
	GPIO_Init(SOC_SLP_S3_N_R_PORT, SOC_SLP_S3_N_R_PIN, GPIO_Mode_In_FL_IT);
	EXTI_SetPinSensitivity(EXTI_Pin_7, EXTI_Trigger_Rising_Falling);
	//E C  		 6
	GPIO_Init(SOC_PLTRST_N_PORT, SOC_PLTRST_N_PIN, GPIO_Mode_In_FL_IT);
	GPIO_Init(SOC_SLP_S45_N_R_PORT, SOC_SLP_S45_N_R_PIN, GPIO_Mode_In_FL_IT);
	EXTI_SetPinSensitivity(EXTI_Pin_6, EXTI_Trigger_Rising_Falling);

	for (i=0; i<NC_NUM; i++)
	{
		GPIO_Init(NC_GPIO[i].port, NC_GPIO[i].pin, GPIO_Mode_Out_PP_Low_Slow);
	}
}





