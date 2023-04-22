#ifndef _BSP_KEY_H
#define _BSP_KEY_H

#include "stm32f10x.h"

#define KEY_ON 0
#define KEY_OFF 1

#define KEY_GPIO_PIN  GPIO_Pin_3
#define KEY_GPIO_PORT GPIOE
#define KEY_GPIO_CLK RCC_APB2Periph_GPIOE

void KEY_GPIO_Config(void);
uint8_t Key_Scan(GPIO_TypeDef *GPIOx,uint16_t GPIO_Pin);

#endif
