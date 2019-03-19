#include <C:/Keil/Datasheets/tm4c123gh6pm.h>
#include "stdint.h"

void Port_SetPinPullUp(uint8_t port_index,uint8_t pins_mask,uint8_t enable)
{

/******************If enable is 1, the selected pins by pins_mask in the port selected************
******************by port_index will be connected to internal pull-up resistor*******************
******************If enable is 0, the selected pins by pins_mask in the port selected************
******************by port_index will be not be connected to internal pull-up resistor***********/

if(enable==1)
{
    if(port_index == 0)
    GPIO_PORTA_PUR_R|=pins_mask;

    else if(port_index == 1)
    GPIO_PORTB_PUR_R|=pins_mask;


    else if(port_index == 2)
    GPIO_PORTC_PUR_R|=pins_mask;


    else if(port_index == 3)
    GPIO_PORTD_PUR_R|=pins_mask;


    else if(port_index == 4)
    GPIO_PORTE_PUR_R|=pins_mask;

    else if(port_index == 5)
    GPIO_PORTF_PUR_R|=pins_mask;
}

else if(enable == 0)
{


     if(port_index == 0)
     GPIO_PORTA_PUR_R &= ~pins_mask;


    else if(port_index == 1)
    GPIO_PORTB_PUR_R &= ~pins_mask;


    else if(port_index == 2)
    GPIO_PORTC_PUR_R &= ~pins_mask;

    else if(port_index == 3)
    GPIO_PORTD_PUR_R &= ~pins_mask;


    else if(port_index == 4)
    GPIO_PORTE_PUR_R &= ~pins_mask;


    else if(port_index == 5)
    GPIO_PORTF_PUR_R &= ~pins_mask;

}
}