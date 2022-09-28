#include <msp430.h>
#include "oled.h"
#include "type.h"

void main(void)
{
    WDTCTL = WDTPW + WDTHOLD;
    int inputModel = 0;
    u16 VolInput = 89;
    u16 VolOutput = 1246;
    OLED_Init();
    OLED_Clear();
    OLED_ShowString(0,0,"input model:",8);
    OLED_ShowString(7,3,"V  in",8);
    OLED_ShowString(7,4,"V out",8);
    OLED_ShowString(7,5,"I  in",8);
    OLED_ShowString(7,6,"I out",8);
    while(1)
    {
        if(inputModel==0)
        {
            OLED_ShowString(13*8-3,0,"0",8);
            inputModel=1;
        }
        else
            {
                OLED_ShowString(13*8-3,0,"1",8);
                inputModel=0;
            }
        Delay_1ms(800);
        OLED_ShowVI(50-1,3,VolInput,8);
        OLED_ShowVI(50-1,5,VolOutput,8);
        VolInput++;
    }
}

