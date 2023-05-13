#ifndef __PWM_H
#define __PWM_H

#include "stm32f10x.h"
#include "stm32f10x_tim.h" 

void PWM_Init_TIM1(u16 psc,u16 per);

#endif
