
void Port_Init(unsigned int port_index)

/****Initialize port based on selected port_index (0 to 5)*****
*****by enabling the clock, unlocking the port, and making*****
*****the selected mode digital*********************************/

{
volatile unsigned long delay;

    if(port_index == 0)
    {
    SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_R0;          //PORTA
    delay=SYSCTL_RCGCGPIO_R;
    GPIO_PORTA_LOCK_R = GPIO_LOCK_KEY;                // Unlock PortA Commit register
    }

    else if(port_index == 1)
    {
    SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_R1;         //PORTB
    delay=SYSCTL_RCGCGPIO_R;
    GPIO_PORTB_LOCK_R = GPIO_LOCK_KEY;               // Unlock PortB Commit register
    }

    else if(port_index == 2)
    {
    SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_R2;         //PORTC
    delay=SYSCTL_RCGCGPIO_R;
    GPIO_PORTC_LOCK_R = GPIO_LOCK_KEY;               // Unlock PortC Commit register
    }

    else if(port_index == 3)
    {
    SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_R3;         //PORTD
    delay=SYSCTL_RCGCGPIO_R;
    GPIO_PORTD_LOCK_R = GPIO_LOCK_KEY;               // Unlock PortD Commit register
    }

    else if(port_index == 4)
    {
    SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_R4;         //PORTE
    delay=SYSCTL_RCGCGPIO_R;
    GPIO_PORTE_LOCK_R = GPIO_LOCK_KEY;               // Unlock PortE Commit register
    }

    else if(port_index == 5)
    {
    SYSCTL_RCGCGPIO_R |=  SYSCTL_RCGCGPIO_R5;        //PORTF
    delay=SYSCTL_RCGCGPIO_R;
    GPIO_PORTF_LOCK_R = GPIO_LOCK_KEY;               // Unlock PortF Commit register
    }
}

/*************************************************************************************
 *************************************************************************************/
