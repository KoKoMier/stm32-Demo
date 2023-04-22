#include "stm32f10x.h"
#include "bsp_led.h"
#include "bsp_rccclockconfig.h"
#include "bsp_systick.h"

void Delay(uint32_t count)
{
	for(;count!=0;count--);
}
	
int main(void)
{
	HSE_SetSystick( RCC_PLLMul_4);
	LED_GPIO_Config();
	while(1)
	{
		GPIO_ResetBits(LED_GPIO_PORT,LED_GPIO_PIN);
		SysTick_Delay_ms(500);
		GPIO_SetBits(LED_GPIO_PORT,LED_GPIO_PIN);
		SysTick_Delay_ms(500);


	}
}



