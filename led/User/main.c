#include "stm32f10x.h"
#include "bsp_led.h"

void Delay(uint32_t count)
{
	for(;count!=0;count--);
}
	
int main(void)
{
	LED_GPIO_Config();
	while(1)
	{
		GPIO_ResetBits(LED_GPIO_PORT,LED_GPIO_PIN);
		Delay(0xFFFFF);
		GPIO_SetBits(LED_GPIO_PORT,LED_GPIO_PIN);
		Delay(0xFFFFF);

	}
}



