/*
 * Mcal_DIO_prog.c
 *
 *  Created on: Oct 29, 2024
 *      Author: Ziad Fathy
 */

#include "Mcal_DIO_init.h"

volatile uint8* DDRx_registers[4]  = {&DDRA, &DDRB, &DDRC, &DDRD};
volatile uint8* PORTx_registers[4] = {&PORTA, &PORTB, &PORTC, &PORTD};
volatile uint8* PINx_registers[4]  = {&PINA, &PINB, &PINC, &PIND};


/**
 * @brief    : Set Direction function The DDxn bit in the DDRx Register selects the direction of this pin. If DDxn is written logic one,
 *				Pxn is configured as an output pin. If DDxn is written logic zero, Pxn is configured as an input pin.
 * @param1   : copyPORTx -> GPIO_port_index_x (index port).
 * @param2   : copyPINx -> GPIO_index_Pin_x (index pin).
 * @param3   : copyDirection -> GPIO_pin_direction_x (direction of pin).
 * @retValue : Return Value if Function is Done Ok.
 * 			   				if Function is't Done Error.
 */
Std_Return MCAL_DIO_setPinDirection(GPIO_index_Port_t copyPORTx, GPIO_index_Pin_t copyPINx, GPIO_PIN_direction_index_t copyDirection) {
	uint8 retValue = R_ERROR;
	switch (copyDirection) {
		case GPIO_pin_direction_output:
			SET_BIT((*(DDRx_registers[copyPORTx])), copyPINx);
			retValue = R_OK;
			break;
		case GPIO_pin_direction_input:
			CLR_BIT((*(DDRx_registers[copyPORTx])), copyPINx);
			retValue = R_OK;
			break;
		default:
			break;
	}
	return retValue;
}

/**
 * @brief    : Set Status function PORTxn is written logic one when the pin is configured as an output pin, the port pin is driven high (one).
 * 			   If PORTxn is written logic zero when the pin is configured as an output pin, the port pin is driven low (zero).
 *   		   active, even if no clocks are running.
active, even if no clocks are running.
 * @param1   : copyPORTx -> GPIO_port_index_x (index port).
 * @param2   : copyPINx -> GPIO_index_Pin_x (index pin).
 * @param3   : copyDirection -> GPIO_pin_status_x (Status of pin).
 * @retValue : Return Value if Function is Done Ok.
 * 			   				if Function is't Done Error.
 */
Std_Return MCAL_DIO_setPinStatus(GPIO_index_Port_t copyPORTx, GPIO_index_Pin_t copyPINx, GPIO_PIN_status_index_t copyStatus) {
	uint8 retValue = R_ERROR;
	switch (copyStatus) {
		case GPIO_pin_status_high:
			SET_BIT((*(PORTx_registers[copyPORTx])), copyPINx);
			retValue = R_OK;
			break;
		case GPIO_pin_status_low:
			CLR_BIT((*(PORTx_registers[copyPORTx])), copyPINx);
			retValue = R_OK;
			break;
		default:
			break;
	}
	return retValue;
}

/**
 * @brief    : Get Status function PORTxn is written logic one when the pin is configured as an input pin, the pull-up resistor is activated.
 * 			   To switch the pull-up resistor off, PORTxn has to be written logic zero or the pin has to be configured as an output pin.
 * 			   The port pins are tri-stated when a reset condition becomes active, even if no clocks are running.
 * @param1   : copyPORTx -> GPIO_port_index_x (index port).
 * @param2   : copyPINx -> GPIO_index_Pin_x (index pin).
 * @retValue : Return Value if PORTxn is High,Low .
 */
Std_Return MCAL_DIO_getPinStatus(GPIO_index_Port_t copyPORTx, GPIO_index_Pin_t copyPINx) {
	uint8 retValue = R_ERROR;
	retValue = GET_BIT((*(PINx_registers[copyPORTx])), copyPINx);
	return retValue;
}

/**
 * @brief    : Toggling Pin Function.
 * @param1   : copyPORTx -> GPIO_port_index_x (index port).
 * @param2   : copyPINx -> GPIO_index_Pin_x (index pin).
 * @retValue : Return Value if Function is Done Ok.
 * 			   				if Function is't Done Error.
 */
Std_Return MCAL_DIO_TogglePin(GPIO_index_Port_t copyPORTx, GPIO_index_Pin_t copyPINx) {
	uint8 retValue = R_ERROR;
	TOGGLE_BIT((*(PORTx_registers[copyPORTx])), copyPINx);
	retValue = R_OK;
	return retValue;
}


/**
 * @brief    : Set Direction function The DDxn bit in the DDRx Register selects the direction of this pin. If DDxn is written logic one,
 *				Pxn is configured as an output pin. If DDxn is written logic zero, Pxn is configured as an input pin.
 * @param1   : copyPORTx -> GPIO_port_index_x (index port).
 * @param2   : copyDirection -> GPIO_port_direction_x (direction of port).
 * @retValue : Return Value if Function is Done Ok.
 * 			   				if Function is't Done Error.
 */
Std_Return MCAL_DIO_setPortDirection(GPIO_index_Port_t copyPORTx, uint8 copyDirection) {
	uint8 retValue = R_ERROR;
	*DDRx_registers[copyPORTx] = copyDirection;
	retValue = R_OK;
	return retValue;
}

/**
 * @brief    : Set Status function PORTxn is written logic one when the pin is configured as an output pin, the port pin is driven high (one).
 * 			   If PORTxn is written logic zero when the pin is configured as an output pin, the port pin is driven low (zero).
 *   		   active, even if no clocks are running.
active, even if no clocks are running.
 * @param1   : copyPORTx -> GPIO_port_index_x (index port).
 * @param2   : copyPINx -> GPIO_index_port_x (index port).
 * @retValue : Return Value if PORTxn is High,Low
 */
Std_Return MCAL_DIO_setPortStatus(GPIO_index_Port_t copyPORTx, uint8 copyStatus) {
	uint8 retValue = R_ERROR;
	*PORTx_registers[copyPORTx] = copyStatus;
	retValue = R_OK;
	return retValue;
}

/**
 * @brief    : Get Status function PORTxn is written logic one when the pin is configured as an input pin, the pull-up resistor is activated.
 * 			   To switch the pull-up resistor off, PORTxn has to be written logic zero or the pin has to be configured as an output pin.
 * 			   The port pins are tri-stated when a reset condition becomes active, even if no clocks are running.
 * @param1   : copyPORTx -> GPIO_port_index_x (index port).
 * @param2   : copyPINx -> GPIO_index_Port_x (index port).
 * @retValue : Return Value if Function is Done Ok.
 * 			   				if Function is't Done Error.
 */
Std_Return MCAL_DIO_getPortStatus(GPIO_index_Port_t copyPORTx) {
	uint8 retValue = R_ERROR;
	retValue = *PINx_registers[copyPORTx];
	return retValue;
}
