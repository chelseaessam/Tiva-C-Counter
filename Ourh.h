#ifndef Ourh_h
#define Ourh_h
#include "stdint.h"

typedef enum {PORT_PIN_IN = 0, PORT_PIN_OUT = 1} Port_PinDirectionType;
typedef enum {STD_LOW = 0, STD_HIGH = 1} Dio_levelType;



//PORT Driver
void Port_Init( uint8_t port_index);
void Port_SetPinDirection(uint8_t port_index,uint8_t pins_mask,Port_PinDirectionType pins_direction);
void Port_SetPinPullUp(uint8_t port_index,uint8_t pins_mask,uint8_t enable);
void Port_SetPinPullDown(uint8_t port_index,uint8_t pins_mask,uint8_t enable);

/*DIO Driver*/

unsigned int Read_Port(uint8_t port_index,uint8_t pins_mask);
void Write_Port(uint8_t port_index,uint8_t pins_mask,Dio_levelType pins_level);
void FlipPort(uint8_t port_index,uint8_t pins_mask);

#endif
