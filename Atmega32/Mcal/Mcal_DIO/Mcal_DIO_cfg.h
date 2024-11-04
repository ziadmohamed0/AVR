/*
 * Mcal_DIO_cfg.h
 *
 *  Created on: Oct 29, 2024
 *      Author: Ziad Fathy
 */

#ifndef MCAL_MCAL_DIO_MCAL_DIO_CFG_H_
#define MCAL_MCAL_DIO_MCAL_DIO_CFG_H_

/* -------------------- Include Start -------------------- */
#include "Mcal_DIO_priv.h"
/* -------------------- Include End  -------------------- */

/* -------------------- Macro Start -------------------- */

/**
 * @brief : Direction of port (output, input).
 */
#define GPIO_PORT_DIRECTION_OUTPUT						0xFF
#define GPIO_PORT_DIRECTION_INPUT						0x00

/**
 * @brief : Status of port (high, low).
 */
#define GPIO_PORT_STATUS_HIGH							0xFF
#define GPIO_PORT_STATUS_LOW							0x00
/* -------------------- Macro End  -------------------- */

/* -------------------- Functions Macro Start -------------------- */
/* -------------------- Functions Macro End -------------------- */

/* -------------------- Standard Types Start -------------------- */
/**
 * @brief : Pin Directions Macros.
 */
typedef enum {
	GPIO_pin_direction_input,
	GPIO_pin_direction_output
}GPIO_PIN_direction_index_t;

/**
 * @brief : Pin Status Macros.
 */
typedef enum {
	GPIO_pin_status_low,
	GPIO_pin_status_high
}GPIO_PIN_status_index_t;
/* -------------------- Standard Types End -------------------- */

/* -------------------- API Start -------------------- */
/* -------------------- API End -------------------- */

#endif /* MCAL_MCAL_DIO_MCAL_DIO_CFG_H_ */
