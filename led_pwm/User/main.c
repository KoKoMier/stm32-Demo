#include "stm32f10x.h"
#include "bsp_led.h"
#include "bsp_rccclockconfig.h"
#include "bsp_systick.h"
#include "usart.h"
#include "pwm.h"
#include "encoder.h"

void Delay(uint32_t count)
{
	for(;count!=0;count--);
}
	
int main(void)
{
	int i = 0;
	int mode = 1;
	HSE_SetSystick( RCC_PLLMul_8);
	USART_Config();
	LED_GPIO_Config();
	PWM_Init_TIM1(7199,0);
	while(1)
	{

		Delay(0xFFF);
		TIM_SetCompare1(TIM1,i);		
		if (mode == 1) i++;
		else if (mode == 2) i--;
    if (i == 7200) mode = 2;
    else if (i == 0) mode = 1;
			
	}
}



