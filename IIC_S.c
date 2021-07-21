
#include "IIC_S.h"


void IIC_config(void)
{

	I2C_DeInit(I2C1);
	/* Initialize I2C peripheral */

	I2C_Init(I2C1, 100000, SLAVE_ADDRESS,
			 I2C_Mode_I2C, I2C_DutyCycle_2,
			 I2C_Ack_Enable, I2C_AcknowledgedAddress_7bit);

	/* Enable Error Interrupt*/
	I2C_ITConfig(I2C1, (I2C_IT_TypeDef)(I2C_IT_ERR | I2C_IT_EVT | I2C_IT_BUF), ENABLE);
  I2C_Cmd(I2C1,ENABLE);
	/* Enable general interrupts */

}






