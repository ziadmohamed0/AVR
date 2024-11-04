/*
 * Mcal_Interrupt_prog.c
 *
 *  Created on: Nov 4, 2024
 *      Author: s
 */

#include "../Mcal_EX_Interrupt/Mcal_EX_Interrupt_init.h"

/**
 * @brief  : External Interrupt Initialization Function.
 * @param1 : copyINTx-> Number Of External Interrupt (EX_INTx).
 * @param2 : copyINTx-> Sense Control Of External Interrupt (EX_Sense).
 * @retValue : Return Value if Function is Done Ok.
 * 			   				if Function is't Done Error.
 */
Std_Return MCAL_EX_InterruptInit(EX_INTx_t copyINTx, EX_INTx_Sense_Control_t copySense) {
	uint8 retVal = R_ERROR;
	MCAL_INTERRUPT_globaleInterruptEnable();
	switch (copyINTx) {
		case EX_INT0:
			MCAL_EX_INT0_clearFlage();
			MCAL_DIO_setPinDirection(GPIO_port_index_D, GPIO_pin_index_2, GPIO_pin_direction_input);
			MCAL_EX_INT0_enable();
			switch(copySense) {
				case EX_low_level:
					MCAL_EX_INT0_SenseControl_LowLevel();
					retVal = R_OK;
					break;
				case EX_Any_logical:
					MCAL_EX_INT0_SenseControl_AnyLogic();
					retVal = R_OK;
					break;
				case EX_falling_edge:
					MCAL_EX_INT0_SenseControl_FallingEdge();
					retVal = R_OK;
					break;
				case EX_rising_edge:
					MCAL_EX_INT0_SenseControl_RisingEdge();
					retVal = R_OK;
					break;
			}
			retVal = R_OK;
			break;
		case EX_INT1:
			MCAL_EX_INT1_clearFlage();
			MCAL_DIO_setPinDirection(GPIO_port_index_D, GPIO_pin_index_3, GPIO_pin_direction_input);
			MCAL_EX_INT1_enable();
			switch(copySense) {
				case EX_low_level:
					MCAL_EX_INT1_SenseControl_LowLevel();
					retVal = R_OK;
					break;
				case EX_Any_logical:
					MCAL_EX_INT1_SenseControl_AnyLogic();
					retVal = R_OK;
					break;
				case EX_falling_edge:
					MCAL_EX_INT1_SenseControl_FallingEdge();
					retVal = R_OK;
			    	break;
				case EX_rising_edge:
					MCAL_EX_INT1_SenseControl_RisingEdge();
					retVal = R_OK;
					break;
			}
			retVal = R_OK;
			break;
		case EX_INT2:
			MCAL_EX_INT2_clearFlage();
			MCAL_DIO_setPinDirection(GPIO_port_index_B, GPIO_pin_index_2, GPIO_pin_direction_input);
			MCAL_EX_INT2_enable();
			retVal = R_OK;
			break;
	}

	return retVal;
}
