#include <C:/Keil/Datasheets/tm4c123gh6pm.h>
#include "stdint.h"

unsigned int Read_Port(uint8_t port_index,uint8_t pins_mask) //pins_level is the output value//pins_mask is the pins iwant to manipulate
{

if(port_index == 0)
{
GPIO_PORTF_LOCK_R = GPIO_LOCK_KEY;
GPIO_PORTA_CR_R|=pins_mask;
GPIO_PORTA_AMSEL_R&=~pins_mask;
GPIO_PORTA_PCTL_R&=~pins_mask;
GPIO_PORTA_AFSEL_R&=~pins_mask;
GPIO_PORTA_DEN_R |=pins_mask;
return GPIO_PORTA_DATA_R&pins_mask;
}

else if(port_index == 1)
{
GPIO_PORTF_LOCK_R = GPIO_LOCK_KEY;
GPIO_PORTB_CR_R|=pins_mask;
GPIO_PORTB_AMSEL_R&=~pins_mask;
GPIO_PORTB_PCTL_R&=~pins_mask;
GPIO_PORTB_AFSEL_R&=~pins_mask;
GPIO_PORTB_DEN_R |=pins_mask;
return GPIO_PORTB_DATA_R&pins_mask;
}


else if(port_index == 2)
{
GPIO_PORTF_LOCK_R = GPIO_LOCK_KEY;
GPIO_PORTC_CR_R|=pins_mask;
GPIO_PORTC_AMSEL_R&=~pins_mask;
GPIO_PORTC_PCTL_R&=~pins_mask;
GPIO_PORTC_AFSEL_R&=~pins_mask;
GPIO_PORTC_DEN_R |=pins_mask;
return GPIO_PORTC_DATA_R&pins_mask;
}

else if(port_index == 3)
{
GPIO_PORTF_LOCK_R = GPIO_LOCK_KEY;
GPIO_PORTD_CR_R|=pins_mask;
GPIO_PORTD_AMSEL_R&=~pins_mask;
GPIO_PORTD_PCTL_R&=~pins_mask;
GPIO_PORTD_AFSEL_R&=~pins_mask;
GPIO_PORTD_DEN_R |=pins_mask;
return GPIO_PORTD_DATA_R&pins_mask;
}


else if(port_index == 4)
{
GPIO_PORTF_LOCK_R = GPIO_LOCK_KEY;
GPIO_PORTE_CR_R|=pins_mask;
GPIO_PORTE_AMSEL_R&=~pins_mask;
GPIO_PORTE_PCTL_R&=~pins_mask;
GPIO_PORTE_AFSEL_R&=~pins_mask;
GPIO_PORTE_DEN_R |=pins_mask;
return GPIO_PORTE_DATA_R&pins_mask;
}

else if(port_index == 5)
{
GPIO_PORTF_LOCK_R = GPIO_LOCK_KEY;
GPIO_PORTF_CR_R|=pins_mask;
GPIO_PORTF_AMSEL_R&=~pins_mask;
GPIO_PORTF_PCTL_R&=~pins_mask;
GPIO_PORTF_AFSEL_R&=~pins_mask;
GPIO_PORTF_DEN_R |=pins_mask;
return GPIO_PORTF_DATA_R&pins_mask;
}
//return 0;
}

