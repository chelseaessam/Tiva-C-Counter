#include <C:/Keil/Datasheets/tm4c123gh6pm.h>
#include <C:\Keil\EE319Kware\SimpleProject_4C123asm/Ourh.h>
#include "stdint.h"

void delay_milli(int n)
{
int i,j;
for(i=0;i<n;i++)
for(j=0;j<3180;j++)
{}
}

void SystemInit(void){
        Port_Init(5);                   //Initialize port F
        Port_SetPinDirection(5,1,PORT_PIN_OUT);    //Led direction output
        Port_SetPinDirection(5,16,PORT_PIN_IN);   //Switch input
        Port_SetPinPullUp(5,16,1);      //Pull up the switch
        delay_milli(500);
   }

/*************************************************************************************
 *************************************************************************************/

int main(void){
    int curr;
    int input_switch_1=0;
    int input_switch_2=0;
    int input_switch_3=0;

    int num=0;
    int num_2=0;
    int num_3=0;
    Port_Init(4);                   //Initialize port E
    Port_Init(5);                   //Initialize port F
    Port_Init(0);                   //Initialize port A
    Port_Init(3);                   //Initialize port D
    Port_SetPinDirection(4,15,PORT_PIN_OUT);   //7 segment (decoder)
    Port_SetPinDirection(0,120,PORT_PIN_OUT);   //7 segment (decoder)
    Port_SetPinDirection(3,15,PORT_PIN_OUT);   //7 segment (decoder)
    Port_SetPinDirection(5,4,PORT_PIN_IN);   //Switch input F4
    Port_SetPinDirection(0,4,PORT_PIN_IN);   //Switch input A2
    Port_SetPinDirection(3,64,STD_LOW);    //Switch input D6
    Port_SetPinPullUp(5,16,STD_HIGH);      //Pull up the switch F4
    Port_SetPinPullUp(0,4,STD_HIGH);      //Pull up the switch A2
    Port_SetPinPullUp(3,64,STD_HIGH);       //Pull up the switch D6
    Write_Port(4,15,STD_LOW);
    Write_Port(0,120,STD_LOW);
    Write_Port(3,15,STD_LOW);
    for(;;)
    {
    input_switch_1 =    Read_Port(5,16);
    input_switch_2 =    Read_Port(0,4);
    input_switch_3 =    Read_Port(3,64);

    if(input_switch_3 == 0x00000000)
        {
        current=1;
        }
        if(current ==1 &&  input_switch_3 == 0x00000040)
        {
         num=0;
         Write_Port(4,15,0);
         num_2=0;
         Write_Port(0,120,0);
         num_3=0;
         Write_Port(3,15,0);
         current=0;
        }
    if(input_switch_1 == 0x00000000)
    {
    Write_Port(4,15,STD_LOW);
    Write_Port(4,num,STD_HIGH);
    delay_milli(50);
    num++;
    if (num==10)
    {
        num =0;
        Write_Port(4,15,STD_LOW);
        Write_Port(4,num,STD_HIGH);
        num_2++;
        Write_Port(0,120,STD_LOW);
        Write_Port(0,(num_2<<3),STD_HIGH);
        if(num_2 == 10)
        {
           num_2=0;
           Write_Port(0,120,STD_LOW);
           num_3++;
           Write_Port(3,15,STD_LOW);
           Write_Port(3,num_3,STD_HIGH);
           if(num_3 == 10)
           {
             num_3=0;
             Write_Port(3,15,STD_LOW);
           }
        }
    }
    }
    else if(input_switch_2 == 0x00000000)
    {
        if(num_2 == 1 && num == 0)
        {
        num=10;
        num_2=0;
        }

        if(num_3 == 0 && num_2 == 0 && num ==0)
        {
        num_3 = 10;
        }

        if(num_2 == 0 && num ==0 )
                                     {
                                     num_2=10;
                                     num_3--;
                                     }

        if (num==0)
                    {
                        num =10;
                        num_2--;
                        if(num_2 == 0)
                        {
                        num_2=10;
                        }
                    }


            num--;
            Write_Port(4,15,STD_LOW);
            Write_Port(4,num,STD_HIGH);

            Write_Port(0,120,STD_LOW);
            Write_Port(0,(num_2<<3),STD_HIGH);


            Write_Port(3,15,STD_LOW);
            Write_Port(3,num_3,STD_HIGH);

            delay_milli(100);

            while(input_switch_2 == 0x00000000){

             input_switch_2 =    Read_Port(0,4);
             if(input_switch_2 != 0x00000000)
             break;


    }
    }
}
}


