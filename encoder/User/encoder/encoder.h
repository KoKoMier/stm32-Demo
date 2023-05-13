#ifndef __ENCODER_H
#define __ENCODER_H

#include "stm32f10x.h"
#include "stm32f10x_tim.h" 

void Encoder_TIM2_Init(void);
void Encoder_TIM4_Init(void);
int Read_Speed(int TIMx);
void TIM2_IRQHandler(void);
void TIM4_IRQHandler(void);

#endif
