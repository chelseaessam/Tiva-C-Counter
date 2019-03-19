#include <C:/Keil/Datasheets/tm4c123gh6pm.h>
#include "stdint.h"
void FlipPort(uint8_t port_index,uint8_t pins_mask)
{


if (port_index == 0)
GPIO_PORTA_DATA_R^=pins_mask;

else if (port_index == 1)
GPIO_PORTB_DATA_R^=pins_mask;

else if (port_index == 2)
GPIO_PORTC_DATA_R^=pins_mask;


else if (port_index == 3)
GPIO_PORTD_DATA_R^=pins_mask;


else if (port_index == 4)
GPIO_PORTE_DATA_R^=pins_mask;


else if (port_index == 5)
GPIO_PORTF_DATA_R^=pins_mask;

}

