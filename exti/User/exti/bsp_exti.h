#ifndef _BSP_EXTI_H
#define _BSP_EXTI_H

#include "stm32f10x.h"

#define KEY1_GPIO_PIN  GPIO_Pin_3
#define KEY1_GPIO_PORT GPIOE
#define KEY1_GPIO_CLK RCC_APB2Periph_GPIOE

void EXTI_Key_Config(void);


#endif
