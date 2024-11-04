/*
 * Mcal_DIO_priv.h
 *
 *  Created on: Oct 29, 2024
 *      Author: Ziad Fathy
 */

#ifndef MCAL_MCAL_DIO_MCAL_DIO_PRIV_H_
#define MCAL_MCAL_DIO_MCAL_DIO_PRIV_H_

/* -------------------- Include Start -------------------- */
#include "../../Lib/Std_Types.h"
#include "../../Lib/bit_math.h"
/* -------------------- Include End  -------------------- */

/* -------------------- Macro Start -------------------- */
	/* @groupMacro : PORTx Register Output Status */
#define PORTA								(*((volatile uint8*) 0x3B))
#define PORTB								(*((volatile uint8*) 0x38))
#define PORTC								(*((volatile uint8*) 0x35))
#define PORTD								(*((volatile uint8*) 0x32))

	/* @groupMacro : DDRx Register Direction */
#define DDRA								(*((volatile uint8_t*) 0x3A))
#define DDRB								(*((volatile uint8_t*) 0x37))
#define DDRC								(*((volatile uint8_t*) 0x34))
#define DDRD								(*((volatile uint8_t*) 0x31))

	/* @groupMacro : PINx Register Output Status */
#define PINA								(*((volatile uint8*) 0x39))
#define PINB								(*((volatile uint8*) 0x36))
#define PINC								(*((volatile uint8*) 0x33))
#define PIND								(*((volatile uint8*) 0x30))
/* -------------------- Macro End  -------------------- */

/* -------------------- Functions Macro Start -------------------- */
/* -------------------- Functions Macro End -------------------- */

/* -------------------- Standard Types Start -------------------- */
/**
 * @brief : General Propose register Pin in PORTx
 */
typedef enum {
	GPIO_pin_index_0,
	GPIO_pin_index_1,
	GPIO_pin_index_2,
	GPIO_pin_index_3,
	GPIO_pin_index_4,
	GPIO_pin_index_5,
	GPIO_pin_index_6,
	GPIO_pin_index_7,
}GPIO_index_Pin_t;

/**
 * @brief : General Propose registers Ports.
 */
typedef enum {
	GPIO_port_index_A,
	GPIO_port_index_B,
	GPIO_port_index_C,
	GPIO_port_index_D,
}GPIO_index_Port_t;
/* -------------------- Standard Types End -------------------- */

/* -------------------- API Start -------------------- */
/* -------------------- API End -------------------- */

#endif /* MCAL_MCAL_DIO_MCAL_DIO_PRIV_H_ */
