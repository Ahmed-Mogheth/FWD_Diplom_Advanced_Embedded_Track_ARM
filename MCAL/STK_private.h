#ifndef	STK_PRIVATE_H
#define STK_PRIVATE_H

/*-------------------------------------------------------------------------------------------------------------------------------------------*/
/*
 * Author: Ahmed Ali Mogheth
 * Purpose: STK driver for Tiva-C
 * Date: 23-8-2022
 *
 */
/*-------------------------------------------------------------------------------------------------------------------------------------------*/

void (*MSTK_CallBack)(void);

#define STK_BASS_ADDRESS	0xE000E010

#define STK_CTRL  	*((volatile u32*)(STK_BASS_ADDRESS+0x00))
#define STK_LOAD  	*((volatile u32*)(STK_BASS_ADDRESS+0x04))
#define STK_VAL 	  *((volatile u32*)(STK_BASS_ADDRESS+0x08))



#endif
