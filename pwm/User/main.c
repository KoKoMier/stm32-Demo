#include "stm32f10x.h"
#include "bsp_led.h"
#include "bsp_rccclockconfig.h"
#include "bsp_systick.h"
#include "usart.h"
#include "advance_tim.h"


void Delay(uint32_t count)
{
	for(;count!=0;count--);
}
	
int main(void)
{
	HSE_SetSystick( RCC_PLLMul_4);
	ADVANCE_TIM_Init();
	USART_Config();
//	printf("cyh \n");
	while(1);

}



