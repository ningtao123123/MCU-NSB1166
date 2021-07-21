#ifndef __IIC_S_H__
#define __IIC_S_H__


#include "stm8l15x_i2c.h"
#include "stm8l15x.h"

#ifdef I2C_slave_7Bits_Address
#define SLAVE_ADDRESS 0x20
#else
#define SLAVE_ADDRESS 0x330
#endif

void IIC_config();





#endif

