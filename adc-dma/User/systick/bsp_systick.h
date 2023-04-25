#ifndef _BSP_SYSTICK_H
#define _BSP_SYSTICK_H

#include "stm32f10x.h"
#include "core_cm3.h"
#include "misc.h"

void SysTick_Delay_us(uint32_t us);
void SysTick_Delay_ms(uint32_t ms);

#endif


