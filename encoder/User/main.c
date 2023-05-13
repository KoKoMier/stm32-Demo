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
	HSE_SetSystick( RCC_PLLMul_8);
	USART_Config();
	LED_GPIO_Config();
	PWM_Init_TIM1(7199,0);
	while(1)
	{

		Delay(0xFFFFF);
		TIM_SetCompare4(TIM1,1000);
		TIM_SetCompare1(TIM1,1000);		
		TIM_SetCompare2(TIM1,1000);		
		TIM_SetCompare3(TIM1,1000);		
		Delay(0xFFFFF);	
	
	}
}



