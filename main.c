/*
 * File:   LCD Driver
 * Author: Mohamed Hamdi
 * please visit my youtube channel:https://www.youtube.com/channel/UCzt_0MFbJiT93KSR74pW6Jw
 */
#include <xc.h>
#include "LCD.h"
#include "config.h"


void main(void) {
    
    LCD_Init();
    LCD_Clear();
    LCD_Set_Cursor(1,1);
    LCD_Write_String("Hello World\0");
    while(1)
    {
      
    }
    return;
}
