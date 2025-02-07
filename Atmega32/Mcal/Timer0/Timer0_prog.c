/*
 * Timer0_prog.c
 *
 *  Created on: Jan 7, 2025
 *      Author: s
 */

#include "Timer0_init.h"


void TIMER0_vidInit(void){

#if TIMER_MODE_WAVE == NORMAL_MODE
	CLR_BIT(TCCR0,WGM00);
	CLR_BIT(TCCR0,WGM01);
#elif TIMER_MODE_WAVE == PWM_MODE
	SET_BIT(TCCR0,WGM00);
	CLR_BIT(TCCR0,WGM01);
	TCCR0 |= TIMER_COMP_OUTPUT_MODE;
#elif TIMER_MODE_WAVE == CTC_MODE
	CLR_BIT(TCCR0,WGM00);
	SET_BIT(TCCR0,WGM01);
	TCCR0 |= TIMER_COMP_OUTPUT_MODE;
#elif TIMER_MODE_WAVE == FAST_PWM_MODE
	SET_BIT(TCCR0,WGM00);
	SET_BIT(TCCR0,WGM01);
	TCCR0 |= TIMER_COMP_OUTPUT_MODE;
#endif
}

void TIMER0_vidStart(void){
	TCCR0 |= TIMER_SELECT_ENABLE;
}

void TIMER0_vidStop(void){
	TCCR0 &= TIMER0_CLOCK_STOP;
}

void TIMER0_vidWriteOVRTCNT0(uint8 Copy_Start_Value){
	TCNT0 = Copy_Start_Value;
}

void TIMER0_vidWriteCOMPOCR0(uint8 Copy_Start_Value){
	OCR0 = Copy_Start_Value;
}

void TIMER0_vidOVRInterruptEnable(void){
	SET_BIT(SREG,GIE);
	SET_BIT(TIMSK,TOIE0);
}

void TIMER0_vidOVRInterruptDisable(void){
	CLR_BIT(TIMSK,TOIE0);
}

void TIMER0_vidCOMPInterruptEnable(void){
	SET_BIT(SREG,GIE);
	SET_BIT(TIMSK,OCIE0);
}

void TIMER0_vidCOMPInterruptDisable(void){
	CLR_BIT(TIMSK,OCIE0);
}
