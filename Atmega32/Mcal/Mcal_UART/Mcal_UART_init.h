/*
 * Mcal_UART_init.h
 *
 *  Created on: Nov 4, 2024
 *      Author: Ziad Fathy
 */

#ifndef MCAL_MCAL_UART_MCAL_UART_INIT_H_
#define MCAL_MCAL_UART_MCAL_UART_INIT_H_

/* -------------------- Include Start -------------------- */
#include "Mcal_UART_cfg.h"
/* -------------------- Include End  -------------------- */

/* -------------------- Macro Start -------------------- */
#define USART_Tx_vec								__vector_13
#define USART_Rx_vec								__vector_14
#define USART_UDRE_vec								__vector_15
/* -------------------- Macro End  -------------------- */

/* -------------------- Functions Macro Start -------------------- */
	/* RX Complete Interrupt Enable */
#define MCAL_USART_RX_InterruptCompleteEnable(void)				SET_BIT(UCSRB, RXCIE);
	/* RX Complete Interrupt Disable */
#define MCAL_USART_RX_InterruptCompleteDisable(void)			CLR_BIT(UCSRB, RXCIE);

	/* TX Complete Interrupt Enable */
#define MCAL_USART_TX_InterruptCompleteEnable(void)				SET_BIT(UCSRB, TXCIE);
	/* TX Complete Interrupt Disable */
#define MCAL_USART_TX_InterruptCompleteDisable(void)			CLR_BIT(UCSRB, TXCIE);

	/* USART Data Register Empty Interrupt Enable */
#define MCAL_USART_InterruptDataRegisterEmptyEnable(void)		SET_BIT(UCSRB, UDRIE);
	/* USART Data Register Empty Interrupt Disable */
#define MCAL_USART_InterruptDataRegisterEmptyDisable(void)		CLR_BIT(UCSRB, UDRIE);

	/* USART Receiver Enable */
#define MCAL_USART_ReceiverEnable(void)							SET_BIT(UCSRB, RXEN);
	/* USART Receiver Disable */
#define MCAL_USART_ReceiverDisable(void)						CLR_BIT(UCSRB, RXEN);

	/* USART Transmitter Enable */
#define MCAL_USART_TransmitterEnable(void)						SET_BIT(UCSRB, TXEN);
	/* USART Transmitter Disable */
#define MCAL_USART_TransmitterDisable(void)						CLR_BIT(UCSRB, TXEN);

	/* USART Mode Asynchronous */
#define MCAL_USART_ModeAsynchronous(void)						CLR_BIT(UCSRC, UMSEL);

	/* USART Mode Synchronous */
#define MCAL_USART_ModeSynchronous(void)						SET_BIT(UCSRC, UMSEL);

	/* Parity Modes */

	/* Parity Modes Disable */
#define MCAL_USART_ParityDisable(void)							CLR_BIT(UCSRC, UPM1);\
																CLR_BIT(UCSRC, UPM0)

	/* Parity Modes Even */
#define MCAL_USART_ParityEvenEnable(void)						SET_BIT(UCSRC, UPM1);\
																CLR_BIT(UCSRC, UPM0)

	/* Parity Modes Odd */
#define MCAL_USART_ParityOddEnable(void)						SET_BIT(UCSRC, UPM1);\
																SET_BIT(UCSRC, UPM0)

	/* Stop Bits*/
#define MCAL_USART_Stop1Bit(void)								CLR_BIT(UCSRC, USBS);
#define MCAL_USART_Stop2Bit(void)								SET_BIT(UCSRC, USBS);

	/* Character Size 5 */
#define MCAL_USART_CharacterSize_5bit(void)						CLR_BIT(UCSRC, UCSZ0);\
																CLR_BIT(UCSRC, UCSZ1);\
																CLR_BIT(UCSRC, UCSZ2);

	/* Character Size 6 */
#define MCAL_USART_CharacterSize_6bit(void)						SET_BIT(UCSRC, UCSZ0);\
																CLR_BIT(UCSRC, UCSZ1);\
																CLR_BIT(UCSRC, UCSZ2);

	/* Character Size 7 */
#define MCAL_USART_CharacterSize_7bit(void)						CLR_BIT(UCSRC, UCSZ0);\
																SET_BIT(UCSRC, UCSZ1);\
																CLR_BIT(UCSRC, UCSZ2);

	/* Character Size 8 */
#define MCAL_USART_CharacterSize_8bit(void)						SET_BIT(UCSRC, UCSZ0);\
																SET_BIT(UCSRC, UCSZ1);\
																CLR_BIT(UCSRC, UCSZ2);

	/* Character Size 9 */
#define MCAL_USART_CharacterSize_9bit(void)						SET_BIT(UCSRC, UCSZ0);\
																SET_BIT(UCSRC, UCSZ1);\
																SET_BIT(UCSRC, UCSZ2);

	/* Clock Polarity Setting */
#define MCAL_USART_CLK_TxDRising_RxDFalling(void)				CLR_BIT(UCSRC, UCPOL);
#define MCAL_USART_CLK_RxDRising_TxDFalling(void)				SET_BIT(UCSRC, UCPOL);
/* -------------------- Functions Macro End -------------------- */

/* -------------------- Standard Types Start -------------------- */
/* -------------------- Standard Types End -------------------- */

/* -------------------- API Start -------------------- */
void MCAL_USART_init(void);
void MCAL_USART_sendData(void);
Std_Return MCAL_USART_recivedData(void);
/* -------------------- API End -------------------- */

#endif /* MCAL_MCAL_UART_MCAL_UART_INIT_H_ */
