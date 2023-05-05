#ifndef NVIC_INTERFACE_H
#define NVIC_INTERFACE_H



#include "STD_TYPES.h"
void NVIC_enable_interrupt(u8 COPY_U8mum);
void NVIC_disable_interrupt(u8 COPY_U8mum);
void NVIC_set_pending_flag_interrupt(u8 COPY_U8mum);

u8 NVIC_get_active_bit_interrupt(  u8 COPY_U8mum);
void NVIC_clear_pending_flag_interrupt( u8 COPY_U8mum);
void NVIC_SET_priorty(s8 copy_s8_intID ,u8 copy_u8Gropu,u8 copy_sub,u32 copy_groupforming);
#define g1_8group_1sub 0x05Fa0400
#define g2_4groups_2sub 0x05Fa0500
#define g3_2groups_4sub 0x05Fa0600
#define g4_1group_8sub 0x05Fa0700

#endif