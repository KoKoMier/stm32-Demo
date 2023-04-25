#include "stm32f10x.h"
#include "bsp_led.h"
#include "bsp_rccclockconfig.h"
#include "bsp_systick.h"
#include "usart.h"
#include "adc.h"

extern __IO uint16_t ADC_ConvertedValue;

float ADC_ConvertedValueLocal;        

void Delay(uint32_t count)
{
	for(;count!=0;count--);
}
	
int main(void)
{
	HSE_SetSystick( RCC_PLLMul_4);
	USART_Config();
	ADCx_Init();
	while(1)
	{
		ADC_ConvertedValueLocal =(float) ADC_ConvertedValue/4096*3.3; 
	
		printf("\r\n The current AD value = 0x%04X \r\n", 
		       ADC_ConvertedValue); 
		printf("\r\n The current AD  value = %f V \r\n",
		       ADC_ConvertedValueLocal); 
		printf("\r\n\r\n");

		Delay(0xffff); 
	}

}



