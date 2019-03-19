typedef unsigned long uint32_t;

void Port_Init(unsigned int port_index);

//Initialize port based on selected port_index (0 to 5) by enabling the clock, unlocking the port, and making the selected mode digital



void Port_SetPinDirection(unsigned int port_index,unsigned int pins_mask,int pins_direction);

//Change the direction of the selected pins by pins_mask in the port selected by port_index



void Port_SetPinPullUp(unsigned int port_index,unsigned int pins_mask,unsigned int enable);

//If enable is 1, the selected pins by pins_mask in the port selected by port_index will be connected to internal pull-up resistor.
//If enable is 0, the selected pins by pins_mask in the port selected by port_index will be not be connected to internal pull-up resistor.



void Port_SetPinPullDown(unsigned int port_index,unsigned int pins_mask,unsigned int enable);

//If enable is 1, the selected pins by pins_mask in the port selected by port_index will be connected to internal pull-down resistor.
//If enable is 0, the selected pins by pins_mask in the port selected by port_index will be not be connected to internal pull-down resistor.



unsigned int Read_Port(unsigned int port_index,unsigned int pins_mask);

//Return the value of the pins selected by pins_masks in the port selected by port_index


void Write_Port(unsigned int port_index,unsigned int pins_mask,unsigned int pins_level);

//Change the value of the pins selected by pins_masks in the port selected by port_index to input pins_level


void FlipPort(unsigned int port_index,unsigned int pins_mask);

//Toggle the values of the pins selected by pins_masks in the port selected by port_index