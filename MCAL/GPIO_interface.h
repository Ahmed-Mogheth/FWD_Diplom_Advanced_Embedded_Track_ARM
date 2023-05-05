#ifndef _GPIO_INTERFACE_H
#define _GPIO_INTERFACE_H

/*-------------------------------------------------------------------------------------------------------------------------------------------*/
/*
 * Author: Ahmed Ali Mogheth
 * Purpose: GPIO driver for Tiva-C
 * Date: 23-8-2022
 *
 */
/*-------------------------------------------------------------------------------------------------------------------------------------------*/
/*
																					GPIO Fun Decliration
*/																					
void GPIO_INTI(void);/* initialize gpio and configure it*/  
void GPIO_Set_PinValue(u8 u8_Copy_Port_Num,u8 u8PinNumCpy, u8 u8ValueCpy);/*this fun make the o/p pin highr or low*/
void GPIO_Set_Direction(u8 u8_Copy_Port_Num, u8 u8PinCpy,u8 u8DirCpy);/*configure the state of the pin ,is it i/p or o/p*/
void GPIO_Set_Digetal_Enable(u8 u8_Copy_Port_Num, u8 u8PinCpy, u8 u8DigEnable);/*configure the state of the pin ,is it digital or analog*/
void GPIO_Toggle(u8 u8_Copy_Port_Num, u8 u8PinNumCpy);/*toggle u8PinNumCpy */
/*-------------------------------------------------------------------------------------------------------------------------------------------*/
																					/*define GPIO_PORTS*/																					
#define GPIO_PORTA 0
#define GPIO_PORTB 1
#define GPIO_PORTC 2
#define GPIO_PORTD 3
#define GPIO_PORTE 4
#define GPIO_PORTF 5
/*-------------------------------------------------------------------------------------------------------------------------------------------*/
																					/*define GPIO_PINS*/																					
#define GPIO_PIN0 0
#define GPIO_PIN1 1
#define GPIO_PIN2 2
#define GPIO_PIN3 3
#define GPIO_PIN4 4
#define GPIO_PIN5 5
#define GPIO_PIN6 6
#define GPIO_PIN7 7
/*-------------------------------------------------------------------------------------------------------------------------------------------*/
																					/*define GPIO_I/O Put*/																					
#define GPIO_INPUT 0
#define GPIO_OUTPUT 1
/*-------------------------------------------------------------------------------------------------------------------------------------------*/
																		/*define GPIO_Digetal and anable */																					
#define GPIO_DEN_SET 1
#define GPIO_DEN_CLEAR 0
/*-------------------------------------------------------------------------------------------------------------------------------------------*/
#endif