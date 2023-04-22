#include "stm32f10x.h"
#include "bsp_led.h"
#include "bsp_rccclockconfig.h"
#include "bsp_systick.h"
#include "usart.h"

void Delay(uint32_t count)
{
	for(;count!=0;count--);
}
	
int main(void)
{
	uint8_t ch;
	HSE_SetSystick( RCC_PLLMul_8);
	USART_Config();

	while(1)
	{
		
//  ch = USART_ReceiveData(DEBUG_USARTx);
//  USART_SendData(DEBUG_USARTx,ch);

		
//	Delay(0xFFFFFF);
	}

}



