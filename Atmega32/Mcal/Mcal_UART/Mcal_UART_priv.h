/*
 * Mcal_UART_priv.h
 *
 *  Created on: Nov 4, 2024
 *      Author: Ziad Fathy
 */

#ifndef MCAL_MCAL_UART_MCAL_UART_PRIV_H_
#define MCAL_MCAL_UART_MCAL_UART_PRIV_H_

/* -------------------- Include Start -------------------- */
#include "../Mcal_dfs.h"
/* -------------------- Include End  -------------------- */

/* -------------------- Macro Start -------------------- */
#define UDR								(*((volatile uint8*) 0x2C))
#define UCSRA							(*((volatile uint8*) 0x2B))
#define UCSRB							(*((volatile uint8*) 0x2A))
#define UCSRC							(*((volatile uint8*) 0x40))
#define UBRRH							(*((volatile uint8*) 0x40))
#define UBRRL							(*((volatile uint8*) 0x29))
/* -------------------- Macro End  -------------------- */

/* -------------------- Functions Macro Start -------------------- */
/* -------------------- Functions Macro End -------------------- */

/* -------------------- Standard Types Start -------------------- */
/**
 * @brief : USART Control and Status Register A.
 */
typedef enum {
	MPCM,
	U2X,
	PE,
	DOR,
	FE,
	UDRE,
	TXC,
	RXC
}UCSRA_t;

/**
 * @brief : USART Control and Status Register B.
 */
typedef enum {
	TXB8,
	RXB8,
	UCSZ2,
	TXEN,
	RXEN,
	UDRIE,
	TXCIE,
	RXCIE
}UCSRB_t;

/**
 * @brief : USART Control and Status Register C.
 */
typedef enum {
	UCPOL,
	UCSZ0,
	UCSZ1,
	USBS,
	UPM0,
	UPM1,
	UMSEL,
	URSEL
}UCSRC_t;
/* -------------------- Standard Types End -------------------- */

/* -------------------- API Start -------------------- */
/* -------------------- API End -------------------- */

#endif /* MCAL_MCAL_UART_MCAL_UART_PRIV_H_ */
