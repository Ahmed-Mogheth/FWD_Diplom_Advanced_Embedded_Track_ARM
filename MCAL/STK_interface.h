#ifndef	STK_INTERFACE_H
#define STK_INTERFACE_H
#include"STD_TYPES.h"
#define AHB			0
#define AHB_DIV_8	1

#define STK_SINGLE_INTERVAL		0
#define STK_PERIODICE_INTERVAL	1
/*-------------------------------------------------------------------------------------------------------------------------------------------*/
/*
 * Author: Ahmed Ali Mogheth
 * Purpose: STK driver for Tiva-C
 * Date: 23-8-2022
 *
 */
/*-------------------------------------------------------------------------------------------------------------------------------------------*/
/* 
												Apply Clock choise from configuration file 
															Disable SysTick Interrupt 
																	Disable SysTick 						  */
																	
/*-------------------------------------------------------------------------------------------------------------------------------------------*/

void MSTK_voidInit(void);

void MSTK_voidSetBusyWaite(u32 copy_u32Ticks);

void MSTK_voidSetIntervalSingle(u32 copy_u32Ticks  , void (*copy_ptr)(void));

void MSTK_voidSetIntervalPeriodic(u32 copy_u32Ticks, void (*copy_ptr)(void));

void MSTK_voidStopInterval(void);

u32  MSTK_u32GetElapsedTime(void);

u32  MSTK_u32GetRemainingTime(void);





#endif
