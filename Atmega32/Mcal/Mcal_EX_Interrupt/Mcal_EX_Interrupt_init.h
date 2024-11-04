/*
 * Mcal_Interrupt_init.h
 *
 *  Created on: Nov 4, 2024
 *      Author: Ziad Fathy
 */

#ifndef MCAL_MCAL_EX_INTERRUPT_MCAL_EX_INTERRUPT_INIT_H_
#define MCAL_MCAL_EX_INTERRUPT_MCAL_EX_INTERRUPT_INIT_H_

/* -------------------- Include Start -------------------- */
#include "../Mcal_EX_Interrupt/Mcal_EX_Interrupt_cfg.h"
/* -------------------- Include End  -------------------- */

/* -------------------- Macro Start -------------------- */
/**
 * @brief : External Interrupt Vectors.
 */
#define INT0_vec									__vector_1
#define INT1_vec									__vector_2
#define INT2_vec									__vector_3
/* -------------------- Macro End  -------------------- */

/* -------------------- Functions Macro Start -------------------- */
/**
 * brief : Interrupt Function.
 */
#define ISR(vector)            \
    void vector (void)  __attribute__ ((signal,used, externally_visible)); \
    void vector (void)
/* -------------------- Functions Macro End -------------------- */

/* -------------------- Standard Types Start -------------------- */

/**
 * @brief : External Interrupt Number typed enum.
 */
typedef enum {
	EX_INT0,
	EX_INT1,
	EX_INT2
}EX_INTx_t;

/**
 * @brief : External Interrupt Sense Control.
 */
typedef enum {
	EX_low_level,
	EX_Any_logical,
	EX_falling_edge,
	EX_rising_edge
}EX_INTx_Sense_Control_t;
/* -------------------- Standard Types End -------------------- */

/* -------------------- API Start -------------------- */
/**
 * @brief  : External Interrupt Initialization Function.
 * @param1 : copyINTx-> Number Of External Interrupt (EX_INTx).
 * @param2 : copyINTx-> Sense Control Of External Interrupt (EX_Sense).
 * @retValue : Return Value if Function is Done Ok.
 * 			   				if Function is't Done Error.
 */
Std_Return MCAL_EX_InterruptInit(EX_INTx_t copyINTx, EX_INTx_Sense_Control_t copySense);
/* -------------------- API End -------------------- */

#endif /* MCAL_MCAL_EX_INTERRUPT_MCAL_EX_INTERRUPT_INIT_H_ */
