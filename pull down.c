void Port_SetPinPullDown(unsigned int port_index,unsigned int pins_mask,unsigned int enable)
{


if(enable==1)
{

  if(port_index == 0)
  GPIO_PORTA_PDR_R|=pins_mask;


  else if(port_index == 1)
  GPIO_PORTB_PDR_R|=pins_mask;


  else if(port_index == 2)
  GPIO_PORTC_PDR_R|=pins_mask;


  else if(port_index == 3)
  GPIO_PORTD_PDR_R|=pins_mask;


  else if(port_index == 4)
  GPIO_PORTE_PDR_R|=pins_mask;


  else if(port_index == 1)
  GPIO_PORTF_PDR_R|=pins_mask;

}
else if (enable == 0)
{


   if(port_index == 0)
   GPIO_PORTA_PDR_R &= ~pins_mask;

   else if(port_index == 1)
   GPIO_PORTB_PDR_R &= ~pins_mask;

   else if(port_index == 2)
   GPIO_PORTC_PDR_R &= ~pins_mask;

   else if(port_index == 3)
   GPIO_PORTD_PDR_R &= ~pins_mask;

   else if(port_index == 4)
   GPIO_PORTE_PDR_R &= ~pins_mask;

   else if(port_index == 5)
   GPIO_PORTF_PDR_R &= ~pins_mask;

}
}

/*************************************************************************************
 *************************************************************************************/

