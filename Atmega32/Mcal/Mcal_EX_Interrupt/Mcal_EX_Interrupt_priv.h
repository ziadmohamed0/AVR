/*
 * Mcal_Interrupt_priv.h
 *
 *  Created on: Nov 4, 2024
 *      Author: Ziad Fathy
 */

#ifndef MCAL_MCAL_EX_INTERRUPT_MCAL_EX_INTERRUPT_PRIV_H_
#define MCAL_MCAL_EX_INTERRUPT_MCAL_EX_INTERRUPT_PRIV_H_

/* -------------------- Include Start -------------------- */
#include "../../Lib/Std_Types.h"
#include "../../Lib/bit_math.h"
#include "../Mcal_DIO/Mcal_DIO_init.h"
/* -------------------- Include End  -------------------- */

/* -------------------- Macro Start -------------------- */

/* Status Register */
#define SREG								(*((volatile uint8*) 0x5F))

/* MCU Control Register */
#define MCUCR								(*((volatile uint8*) 0x55))

/* MCU Control and Status Register */
#define MCUCSR								(*((volatile uint8*) 0x54))

/* General Interrupt Control Register */
#define GICR								(*((volatile uint8*) 0x5B))

/* General Interrupt Flag Register */
#define GIFR								(*((volatile uint8*) 0x5A))

#define ISC2								6U			// Interrupt Sense Control 2 Pin.
#define GIE									7U			// Global Interrupt Enable Pin.
/* -------------------- Macro End  -------------------- */

/* -------------------- Functions Macro Start -------------------- */
/* -------------------- Functions Macro End -------------------- */

/* -------------------- Standard Types Start -------------------- */

/**
 * @brief : MCUCR Pins
 */
typedef enum {
	ISC00,
	ISC01,
	ISC10,
	ISC11
}MCUCR_t;

/**
 * @brief : GICR Pins
 */
typedef enum {
	INT2 = 5,
	INT0,
	INT1
}GICR_t;

/**
 * @brief : GIFR Pins
 */
typedef enum {
	INTF2 = 5,
	INTF0,
	INTF1
}GIFR_t;
/* -------------------- Standard Types End -------------------- */

/* -------------------- API Start -------------------- */
/* -------------------- API End -------------------- */

#endif /* MCAL_MCAL_EX_INTERRUPT_MCAL_EX_INTERRUPT_PRIV_H_ */
