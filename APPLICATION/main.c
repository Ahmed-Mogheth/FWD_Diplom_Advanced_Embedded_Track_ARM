

#include "STD_TYPES.h"
#include "Macros.h"
#include "GPIO_interface.h"
#include "NVIC_INTERFACE.h"
#include "STK_interface.h"
#define time_on_sec 5
#define time_off_sec 1
static s8 counter =(time_on_sec);/*b3araf al static var for counting 3lashan awsal llzamzn al mo3ayan*/
void togle_led(void);

int main(void) {
/*-------------------------------------------------------------------------------------------------------------------------------------------*/
	  GPIO_INTI();/* initialize gpio and configure it*/  
    GPIO_Set_Direction(GPIO_PORTA,GPIO_PIN0,GPIO_OUTPUT);/*configure the state of the pin ,is it i/p or o/p*/
    GPIO_Set_Digetal_Enable(GPIO_PORTA,GPIO_PIN0,GPIO_DEN_SET);/*configure the state of the pin ,is it digital or analog*/
/*-------------------------------------------------------------------------------------------------------------------------------------------*/
    MSTK_voidInit();
    MSTK_voidSetIntervalPeriodic(0x00FFFFFF,togle_led);

    while(1) {

 

		}}	
/*-------------------------------------------------------------------------------------------------------------------------------------------*/

void togle_led(){
counter--;
	if(counter<0){
GPIO_Toggle(GPIO_PORTA,GPIO_PIN0);
	}
}

