#include <msp430.h>
#include <msp430g2553.h>
#include "followType.h"
#include "config.h"
uchar count = 0;
/**
 * P1.0-P1.3
 * P1.4-P1.7    四路红外
 * P2.0         IN1（右轮）
 * P2.2         IN2
 * P2.3         IN3（左轮）
 * P2.5         IN4
 * P2.1         ENATA1.1
 * P2.4         ENBTA1.2
 *
 */

void Init_PWM(void)
{
    P2DIR = 0Xff;
    P2SEL |= BIT1;  //TA1从P2.4输出
    P2DIR |= BIT1;  //TA1从P2.4输出
    P2SEL |= BIT4;  //TA2从P2.5输出
    P2DIR |= BIT4; //TA2从P2.5输出

    P1SEL = 0x00;     //   I/O口
    P1DIR = 0x0f;    //设置P1.0-P1.3为输出模式，P1.4-P1.7为输入，读取来自红外避障模块的信息  (I:0,O:1)
    TA1CTL |= MC_1 + TASSEL_1;  //时钟源选择ACLK，增计数模式 TA设置
    TA1CCR0 = 33-1;  //PWM总周期=32个ACLK周期 约等于1000Hz 设置PWM的周期

    TA1CCTL1 = OUTMOD_7; //模式7 高电平PWM输出 PWM设置
    TA1CCR1 = 16;    //TA1 占空比= 16/32=50% 设置占空比

    TA1CCTL2 = OUTMOD_7; //模式7 高电平PWM输出
    TA1CCR2 = 16;    //TA2 占空比= 16/32=50%
}
void Set_PWM1_Duty(uchar duty)    //设置PWM占空比
{
     TA1CCR1 = duty;
}
void Set_PWM2_Duty(uchar duty)
{
     TA1CCR2 = duty;
}

/**
 * 开车
 * p2.0-p2.5
 * */
void stop()
{
    P2OUT=0X00;
}
void zhizou(char D)
{
    if(D==1)//前进
    {
     P2OUT = 0X0C;//0000 1100
     Set_PWM1_Duty(32);
     Set_PWM2_Duty(32);//左
    }
    if(D==2)
    {
        P2OUT = 0X0C;
        Set_PWM1_Duty(20);
        Set_PWM2_Duty(20);
    }
}
void left(char L)
{
    P2OUT = 0X0C;
    if(L==1)
    {
        Set_PWM1_Duty(32);    //
        Set_PWM2_Duty(2);
    }
    if(L==2)
    {
        Set_PWM1_Duty(32);
        Set_PWM2_Duty(0);
    }
}
void right(char R)
{
    P2OUT = 0X0C;
    if(R==1)
    {
        Set_PWM1_Duty(2);
        Set_PWM2_Duty(32);
    }
    if(R==2)
    {
        Set_PWM1_Duty(0);
        Set_PWM2_Duty(32);
    }
}
/**
 * 主函数
 */
void main()
{
  WDTCTL = WDTPW | WDTHOLD ;   //关闭开门狗
  //Clock_Init();
  //UART_Init();
  Init_PWM();
  P1SEL = 0x00;
  P1DIR = 0x0f;    //设置为输出模式用来控制电机
  //Set_PWM1_Duty(16);
  //Set_PWM2_Duty(16);
  while(1)
  {
//      P2OUT=0X14;//右正左反
//      P2OUT=0X00;//停
//      P2OUT=0X12;//倒车
//      P2OUT=0X0

//      P2SEL |= BIT0;

      ChaoShengBo();
//      switch(P1IN&0xf0)
//        {
//            case 0xb0:zhizou(1);break;
//            //case 0x1c:left(2);break;
//             case 0x30:right(1);break;
//              //case 0x07:right(2);break;
//              case 0x50:left(1);break;
//              default:zhizou(1); break;
//         }
  }
}
