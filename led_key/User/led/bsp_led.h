#ifndef _BSP_LED_H
#define _BSP_LED_H

#include "stm32f10x.h"

#define LED_GPIO_PIN  GPIO_Pin_5
#define LED_GPIO_PORT GPIOB
#define LED_GPIO_CLK RCC_APB2Periph_GPIOB

#define LED_G_TOGGLE {LED_GPIO_PORT->ODR ^=LED_GPIO_PIN;}

void LED_GPIO_Config(void);


#endif
