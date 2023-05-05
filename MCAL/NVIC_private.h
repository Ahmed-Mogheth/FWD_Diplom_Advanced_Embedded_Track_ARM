#ifndef NVIC_private_h
#define NVIC_private_h

/*-------------------------------------------------------------------------------------------------------------------------------------------*/
/*
 * Author: Ahmed Ali Mogheth
 * Purpose: NVIC driver for Tiva-C
 * Date: 18-8-2022
 *
 */
/*-------------------------------------------------------------------------------------------------------------------------------------------*/
/*base adresse for nvic registers is 0xE000E100*/
#define NVIC_ENEBLE_INT0        *((u32*)0xE000E100)/*writing zero makke no effect ^^write one enevle interrupt*/
#define NVIC_ENEBLE_INT1        *((u32*)0xE000E104)/*from 32 to63*/
#define NVIC_clear_INT0         *((u32*)0xE000E180)/* writing one disable this interrupt and put zero on eneble bit*/
#define NVIC_clear_INT1         *((u32*)0xE000E184)
#define NVIC_set_pinding_INT0   *((u32*)0xE000E200)/* force interrupt to enter pendiong state*/
#define NVIC_set_pinding_INT1   *((u32*)0xE000E204)
#define NVIC_clear_pinding_INT0 *((u32*)0xE000E280)
#define NVIC_clear_pinding_INT1 *((u32*)0xE000E284)
#define NVIC_active_bit_INT0    *((volatile u32*)0xE000E300)/*we write volatile in read only register*/
#define NVIC_active_bit_INT1    *((volatile u32*)0xE000E304)/*we write volatile in read only register*/
#define NVIC_PIR_ptr             ((volatile u8*)0xE00E400)  /*priority pointer to access all 138 external interrupt*/
#define APINT                   *(volatile u32*)0xE000ED0C/*lock is 0x05FA*/ 

#endif
