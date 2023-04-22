#include "stm32f10x.h"
#include "bsp_led.h"
#include "bsp_rccclockconfig.h"
#include "bsp_exti.h"

void Delay(uint32_t count)
{
	for(;count!=0;count--);
}
	
int main(void)
{
	HSE_SetSystick(RCC_PLLMul_8);
	LED_GPIO_Config();
	EXTI_Key_Config();
	while(1)
	{


	}
}



