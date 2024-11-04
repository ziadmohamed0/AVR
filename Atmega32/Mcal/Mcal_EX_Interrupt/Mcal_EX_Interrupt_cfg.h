/*
 * Mcal_Interrupt_cfg.h
 *
 *  Created on: Nov 4, 2024
 *      Author: Ziad Fathy
 */

#ifndef MCAL_MCAL_EX_INTERRUPT_MCAL_EX_INTERRUPT_CFG_H_
#define MCAL_MCAL_EX_INTERRUPT_MCAL_EX_INTERRUPT_CFG_H_

/* -------------------- Include Start -------------------- */
#include "../Mcal_EX_Interrupt/Mcal_EX_Interrupt_priv.h"
/* -------------------- Include End  -------------------- */

/* -------------------- Macro Start -------------------- */
/* -------------------- Macro End  -------------------- */

/* -------------------- Functions Macro Start -------------------- */

		/* Interrupt 1 Sense Control */
/**
 * brief : The low level of INT1 generates an interrupt request.
 */
#define MCAL_EX_INT1_SenseControl_LowLevel(void)			CLR_BIT(MCUCR, ISC10); \
															CLR_BIT(MCUCR, ISC11);

/**
 * brief : Any logical change on INT1 generates an interrupt request.
 */
#define MCAL_EX_INT1_SenseControl_AnyLogic(void)			SET_BIT(MCUCR, ISC10); \
															CLR_BIT(MCUCR, ISC11);

/**
 * brief : The falling edge of INT1 generates an interrupt request.
 */
#define MCAL_EX_INT1_SenseControl_FallingEdge(void)			CLR_BIT(MCUCR, ISC10); \
															SET_BIT(MCUCR, ISC11);

/**
 * brief : The rising edge of INT1 generates an interrupt request.
 */
#define MCAL_EX_INT1_SenseControl_RisingEdge(void)			SET_BIT(MCUCR, ISC10); \
															SET_BIT(MCUCR, ISC11);

		/* Interrupt 0 Sense Control */

/**
 * brief : The low level of INT0 generates an interrupt request.
 */
#define MCAL_EX_INT0_SenseControl_LowLevel(void)			CLR_BIT(MCUCR, ISC00); \
															CLR_BIT(MCUCR, ISC01);

/**
 * brief : Any logical change on INT0 generates an interrupt request.
 */
#define MCAL_EX_INT0_SenseControl_AnyLogic(void)			SET_BIT(MCUCR, ISC00); \
															CLR_BIT(MCUCR, ISC01);

/**
 * brief : The falling edge of INT0 generates an interrupt request.
 */
#define MCAL_EX_INT0_SenseControl_FallingEdge(void)			CLR_BIT(MCUCR, ISC00); \
															SET_BIT(MCUCR, ISC01);

/**
 * brief : The rising edge of INT0 generates an interrupt request.
 */
#define MCAL_EX_INT0_SenseControl_RisingEdge(void)			SET_BIT(MCUCR, ISC00); \
															SET_BIT(MCUCR, ISC01);

/**
 * brief : Global Interrupt Enable.
 */
#define MCAL_INTERRUPT_globaleInterruptEnable(void)			SET_BIT(SREG, GIE);

/**
 * brief : External Interrupt Request 1 Enable.
 */
#define MCAL_EX_INT1_enable(void)							SET_BIT(GICR, INT1);

/**
 * brief : External Interrupt Request 1 Disable.
 */
#define MCAL_EX_INT1_disable(void)							CLR_BIT(GICR, INT1);

/**
 * brief : External Interrupt Request 0 Enable.
 */
#define MCAL_EX_INT0_enable(void)							SET_BIT(GICR, INT0);

/**
 * brief : External Interrupt Request 0 Disable.
 */
#define MCAL_EX_INT0_disable(void)							CLR_BIT(GICR, INT0);


/**
 * brief : External Interrupt Request 2 Enable.
 */
#define MCAL_EX_INT2_enable(void)							SET_BIT(GICR, INT2);

/**
 * brief : External Interrupt Request 2 Disable.
 */
#define MCAL_EX_INT2_disable(void)							CLR_BIT(GICR, INT2);

/**
 * brief : External Interrupt Clear Flag 1.
 */
#define MCAL_EX_INT1_clearFlage(void)						CLR_BIT(GIFR, INT1);

/**
 * brief : External Interrupt Clear Flag 0.
 */
#define MCAL_EX_INT0_clearFlage(void)						CLR_BIT(GIFR, INT0);

/**
 * brief : External Interrupt Clear Flag 2.
 */
#define MCAL_EX_INT2_clearFlage(void)						CLR_BIT(GIFR, INT2);
/* -------------------- Functions Macro End -------------------- */

/* -------------------- Standard Types Start -------------------- */
/* -------------------- Standard Types End -------------------- */

/* -------------------- API Start -------------------- */
/* -------------------- API End -------------------- */

#endif /* MCAL_MCAL_EX_INTERRUPT_MCAL_EX_INTERRUPT_CFG_H_ */
