/*************************************************************************************
 *************************************************************************************/

void Port_SetPinDirection(unsigned int port_index,unsigned int pins_mask,int pins_direction)
{
/************Change the direction of the selected pins by pins_mask********************
*************mask in the port selected by port_index**********************************/

    if(port_index == 0)                     //PORTA
    {
     if (pins_direction == 1)               //1 means output
     GPIO_PORTA_DIR_R |= pins_mask ;
     else                                   //0 means input
     GPIO_PORTA_DIR_R &= ~pins_mask ;
    }

else if(port_index == 1)                   //PORTB
    {
    if (pins_direction == 1)               //1 means output
    GPIO_PORTB_DIR_R |= pins_mask ;
    else                                   //0 means input
    GPIO_PORTB_DIR_R &= ~pins_mask ;
    }

else if(port_index == 2)                   //PORTC
    {
    if (pins_direction == 1)               //1 means output
    GPIO_PORTC_DIR_R |= pins_mask ;
    else                                   //0 means input
    GPIO_PORTC_DIR_R &= ~pins_mask ;
    }

else if(port_index == 3)                   //PORTD
    {
    if (pins_direction == 1)               //1 means output
    GPIO_PORTD_DIR_R |= pins_mask ;
    else                                   //0 means input
    GPIO_PORTD_DIR_R &= ~pins_mask ;
    }

else if(port_index == 4)                   //PORTE
    {
    if (pins_direction == 1)               //1 means output
    GPIO_PORTE_DIR_R |= pins_mask ;
    else                                   //0 means input
    GPIO_PORTE_DIR_R &= ~pins_mask ;
    }

else if(port_index == 5)                   //PORTF
    {
    if (pins_direction == 1)               //1 means output
    GPIO_PORTF_DIR_R |= pins_mask ;
    else                                   //0 means input
    GPIO_PORTF_DIR_R &= ~pins_mask ;
    }
}

