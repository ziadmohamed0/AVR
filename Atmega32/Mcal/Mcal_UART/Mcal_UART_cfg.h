/*
 * Mcal_UART_cfg.h
 *
 *  Created on: Nov 4, 2024
 *      Author: Ziad Fathy
 */

#ifndef MCAL_MCAL_UART_MCAL_UART_CFG_H_
#define MCAL_MCAL_UART_MCAL_UART_CFG_H_

/* -------------------- Include Start -------------------- */
#include "Mcal_UART_priv.h"
/* -------------------- Include End  -------------------- */

/* -------------------- Macro Start -------------------- */
	/* @groupMacros: selects between Asynchronous and Synchronous mode */
#define USART_Mode_Asynchronous									0U
#define USART_Mode_synchronous									1U

	/* @groupMacros: Parity Setting Mode */
#define USART_Mode_ParityDisable								0U
#define USART_Mode_ParityEven									1U
#define USART_Mode_ParityOdd									2U

	/* @groupMacros: Stop bit Setting Mode */
#define USART_Mode_Stop_1Bit									0U
#define USART_Mode_Stop_2Bit									1U

	/* @groupMacros: Character Size Setting Mode */
#define USART_Mode_CharSize_5Bits								0U
#define USART_Mode_CharSize_6Bits								1U
#define USART_Mode_CharSize_7Bits								2U
#define USART_Mode_CharSize_8Bits								3U
#define USART_Mode_CharSize_9Bits								4U

	/* @groupMacros: Clock Polarity Setting Mode */
#define USART_Mode_TxDRising_RxDFalling							0U
#define USART_Mode_RxDRising_TxDFalling							1U

	/* @groupMacros: Baud Rate Setting (f = 8.0000MHz) */
#define MCAL_USART_BuadRate_2400								207U
#define MCAL_USART_BuadRate_4800								103U
#define MCAL_USART_BuadRate_9600								51U
#define MCAL_USART_BuadRate_14_4k								34U
#define MCAL_USART_BuadRate_19_2k								25U
#define MCAL_USART_BuadRate_28_8k								16U
#define MCAL_USART_BuadRate_38_4k								12U
#define MCAL_USART_BuadRate_57_6k								8U
#define MCAL_USART_BuadRate_76_8k								6U
#define MCAL_USART_BuadRate_115_2k								3U
#define MCAL_USART_BuadRate_230_4k								1U
#define MCAL_USART_BuadRate_250k								1U
#define MCAL_USART_BuadRate_0_5M								0U
/* -------------------- Macro End  -------------------- */

/* -------------------- Functions Macro Start -------------------- */


/* -------------------- Functions Macro End -------------------- */

/* -------------------- Standard Types Start -------------------- */
/* -------------------- Standard Types End -------------------- */

/* -------------------- API Start -------------------- */
/* -------------------- API End -------------------- */

#endif /* MCAL_MCAL_UART_MCAL_UART_CFG_H_ */
