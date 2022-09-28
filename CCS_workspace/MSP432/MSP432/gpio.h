#ifndef __gpio
#define __gpio
/*************************************************/
/*     独立io口 P10.0~P10.5  定义   功能：输出     */
/*************************************************/
void GPIO10_Pin_0(unsigned int Pi)//定义P10.0口
{
  #define Gpio10_Pin_0 P10OUT=(P10OUT&0Xfe)|Pi//1111 1110
  GPIO10_Pin_0;
}

void GPIO10_Pin_1(unsigned int Pi)//定义P10.1口
{
  #define Gpio10_Pin_1 P10OUT=(P10OUT&0Xfd)|(Pi<<=1)//1111 1101
  GPIO10_Pin_1;
}

void GPIO10_Pin_2(unsigned int Pi)//定义P10.2口
{
  #define Gpio10_Pin_2 P10OUT=(P10OUT&0Xfb)|(Pi<<=2)//1111 1011
  GPIO10_Pin_2;
}

void GPIO10_Pin_3(unsigned int Pi)//定义P10.3口
{
  #define Gpio10_Pin_3 P6OUT=(P10OUT&0Xf7)|(Pi<<=3)//1111 0111
  GPIO10_Pin_3;
}

void GPIO10_Pin_4(unsigned int Pi)//定义P10.4口
{
  #define Gpio10_Pin_4 P6OUT=(P10OUT&0Xef)|(Pi<<=4)//1110 1111
  GPIO10_Pin_4;
}

void GPIO10_Pin_5(unsigned int Pi)//定义P10.5口
{
  #define Gpio10_Pin_5 P10OUT=(P6OUT&0Xdf)|(Pi<<=5)//1101 1111
  GPIO10_Pin_5;
}
/*************************************************/
/*     独立io口 P9.0~P9.7  定义   功能：输出     */
/*************************************************/
void GPIO9_Pin_0(unsigned int Pi)//定义P9.0口
{
  #define Gpio9_Pin_0 P9OUT=(P9OUT&0Xfe)|Pi//1111 1110
  GPIO9_Pin_0;
}

void GPIO9_Pin_1(unsigned int Pi)//定义P9.1口
{
  #define Gpio9_Pin_1 P9OUT=(P9OUT&0Xfd)|(Pi<<=1)//1111 1101
  GPIO9_Pin_1;
}

void GPIO9_Pin_2(unsigned int Pi)//定义P9.2口
{
  #define Gpio9_Pin_2 P9OUT=(P9OUT&0Xfb)|(Pi<<=2)//1111 1011
  GPIO9_Pin_2;
}

void GPIO9_Pin_3(unsigned int Pi)//定义P9.3口
{
  #define Gpio9_Pin_3 P6OUT=(P9OUT&0Xf7)|(Pi<<=3)//1111 0111
  GPIO9_Pin_3;
}

void GPIO9_Pin_4(unsigned int Pi)//定义P9.4口
{
  #define Gpio9_Pin_4 P6OUT=(P9OUT&0Xef)|(Pi<<=4)//1110 1111
  GPIO9_Pin_4;
}

void GPIO9_Pin_5(unsigned int Pi)//定义P9.5口
{
  #define Gpio9_Pin_5 P9OUT=(P9OUT&0Xdf)|(Pi<<=5)//1101 1111
  GPIO9_Pin_5;
}

void GPIO9_Pin_6(unsigned int Pi)//定义P9.6口
{
  #define Gpio9_Pin_6 P9OUT=(P9OUT&0Xbf)|(Pi<<=6)//1011 1111
  GPIO9_Pin_6;
}

void GPIO9_Pin_7(unsigned int Pi)//定义P6.7口
{
  #define Gpio9_Pin_7 P6OUT=(P9OUT&0X7f)|(Pi<<=7)//0111 1111
  GPIO9_Pin_7;
}
/*************************************************/
/*     独立io口 P8.0~P8.7  定义   功能：输出     */
/*************************************************/
void GPIO8_Pin_0(unsigned int Pi)//定义P8.0口
{
  #define Gpio8_Pin_0 P6OUT=(P6OUT&0Xfe)|Pi//1111 1110
  GPIO8_Pin_0;
}

void GPIO8_Pin_1(unsigned int Pi)//定义P8.1口
{
  #define Gpio8_Pin_1 P6OUT=(P8OUT&0Xfd)|(Pi<<=1)//1111 1101
  GPIO8_Pin_1;
}

void GPIO8_Pin_2(unsigned int Pi)//定义P8.2口
{
  #define Gpio8_Pin_2 P8OUT=(P8OUT&0Xfb)|(Pi<<=2)//1111 1011
  GPIO8_Pin_2;
}

void GPIO8_Pin_3(unsigned int Pi)//定义P8.3口
{
  #define Gpio8_Pin_3 P6OUT=(P8OUT&0Xf7)|(Pi<<=3)//1111 0111
  GPIO8_Pin_3;
}

void GPIO8_Pin_4(unsigned int Pi)//定义P8.4口
{
  #define Gpio8_Pin_4 P8OUT=(P8OUT&0Xef)|(Pi<<=4)//1110 1111
  GPIO8_Pin_4;
}

void GPIO8_Pin_5(unsigned int Pi)//定义P8.5口
{
  #define Gpio6_Pin_5 P6OUT=(P6OUT&0Xdf)|(Pi<<=5)//1101 1111
  GPIO8_Pin_5;
}

void GPIO8_Pin_6(unsigned int Pi)//定义P8.6口
{
  #define Gpio8_Pin_6 P8OUT=(P8OUT&0Xbf)|(Pi<<=6)//1011 1111
  GPIO8_Pin_6;
}

void GPIO8_Pin_7(unsigned int Pi)//定义P8.7口
{
  #define Gpio8_Pin_7 P8OUT=(P8OUT&0X7f)|(Pi<<=7)//0111 1111
  GPIO8_Pin_7;
}
/*************************************************/
/*     独立io口 P7.0~P7.7  定义   功能：输出     */
/*************************************************/
void GPIO7_Pin_0(unsigned int Pi)//定义P7.0口
{
  #define Gpio7_Pin_0 P7OUT=(P7OUT&0Xfe)|Pi//1111 1110
  GPIO7_Pin_0;
}

void GPIO7_Pin_1(unsigned int Pi)//定义P7.1口
{
  #define Gpio7_Pin_1 P7OUT=(P7OUT&0Xfd)|(Pi<<=1)//1111 1101
  GPIO7_Pin_1;
}

void GPIO7_Pin_2(unsigned int Pi)//定义P7.2口
{
  #define Gpio7_Pin_2 P7OUT=(P7OUT&0Xfb)|(Pi<<=2)//1111 1011
  GPIO7_Pin_2;
}

void GPIO7_Pin_3(unsigned int Pi)//定义P7.3口
{
  #define Gpio7_Pin_3 P7OUT=(P7OUT&0Xf7)|(Pi<<=3)//1111 0111
    GPIO7_Pin_3;
}

void GPIO7_Pin_4(unsigned int Pi)//定义P7.4口
{
  #define Gpio7_Pin_4 P7OUT=(P7OUT&0Xef)|(Pi<<=4)//1110 1111
    GPIO7_Pin_4;
}

void GPIO7_Pin_5(unsigned int Pi)//定义P7.5口
{
  #define Gpio7_Pin_5 P7OUT=(P7OUT&0Xdf)|(Pi<<=5)//1101 1111
    GPIO7_Pin_5;
}

void GPIO7_Pin_6(unsigned int Pi)//定义P7.6口
{
  #define Gpio7_Pin_6 P7OUT=(P7OUT&0Xbf)|(Pi<<=6)//1011 1111
    GPIO7_Pin_6;
}

void GPIO7_Pin_7(unsigned int Pi)//定义P7.7口
{
  #define Gpio7_Pin_7 P7OUT=(P7OUT&0X7f)|(Pi<<=7)//0111 1111
    GPIO7_Pin_7;
}
/*************************************************/
/*     独立io口 P6.0~P6.7  定义   功能：输出     */
/*************************************************/
void GPIO6_Pin_0(unsigned int Pi)//定义P6.0口
{
  #define Gpio6_Pin_0 P6OUT=(P6OUT&0Xfe)|Pi//1111 1110
    GPIO9_Pin_0;
}

void GPIO6_Pin_1(unsigned int Pi)//定义P6.1口
{
  #define Gpio6_Pin_1 P6OUT=(P6OUT&0Xfd)|(Pi<<=1)//1111 1101
    GPIO6_Pin_1;
}

void GPIO6_Pin_2(unsigned int Pi)//定义P6.2口
{
  #define Gpio6_Pin_2 P6OUT=(P6OUT&0Xfb)|(Pi<<=2)//1111 1011
    GPIO6_Pin_2;
}

void GPIO6_Pin_3(unsigned int Pi)//定义P6.3口
{
  #define Gpio6_Pin_3 P6OUT=(P6OUT&0Xf7)|(Pi<<=3)//1111 0111
    GPIO6_Pin_3;
}

void GPIO6_Pin_4(unsigned int Pi)//定义P6.4口
{
  #define Gpio6_Pin_4 P6OUT=(P6OUT&0Xef)|(Pi<<=4)//1110 1111
    GPIO6_Pin_4;
}

void GPIO6_Pin_5(unsigned int Pi)//定义P6.5口
{
  #define Gpio6_Pin_5 P6OUT=(P6OUT&0Xdf)|(Pi<<=5)//1101 1111
    GPIO6_Pin_5;
}

void GPIO6_Pin_6(unsigned int Pi)//定义P6.6口
{
  #define Gpio6_Pin_6 P6OUT=(P6OUT&0Xbf)|(Pi<<=6)//1011 1111
    GPIO6_Pin_6;
}

void GPIO6_Pin_7(unsigned int Pi)//定义P6.7口
{
  #define Gpio6_Pin_7 P6OUT=(P6OUT&0X7f)|(Pi<<=7)//0111 1111
    GPIO6_Pin_7;
}

/*************************************************/
/*     独立io口 P5.0~P5.7  定义   功能：输出     */
/*************************************************/
void GPIO5_Pin_0(unsigned int Pi)//定义P5.0口
{
  #define Gpio5_Pin_0 P5OUT=(P5OUT&0Xfe)|Pi//1111 1110
    GPIO5_Pin_0;
}

void GPIO5_Pin_1(unsigned int Pi)//定义P5.1口
{
  #define Gpio5_Pin_1 P5OUT=(P5OUT&0Xfd)|(Pi<<=1)//1111 1101
    GPIO5_Pin_1;
}

void GPIO5_Pin_2(unsigned int Pi)//定义P5.2口
{
  #define Gpio5_Pin_2 P5OUT=(P5OUT&0Xfb)|(Pi<<=2)//1111 1011
    GPIO5_Pin_2;
}

void GPIO5_Pin_3(unsigned int Pi)//定义P5.3口
{
  #define Gpio5_Pin_3 P5OUT=(P5OUT&0Xf7)|(Pi<<=3)//1111 0111
    GPIO5_Pin_3;
}

void GPIO5_Pin_4(unsigned int Pi)//定义P5.4口
{
  #define Gpio5_Pin_4 P5OUT=(P5OUT&0Xef)|(Pi<<=4)//1110 1111
    GPIO5_Pin_4;
}

void GPIO5_Pin_5(unsigned int Pi)//定义P5.5口
{
  #define Gpio5_Pin_5 P5OUT=(P5OUT&0Xdf)|(Pi<<=5)//1101 1111
    GPIO5_Pin_5;
}

void GPIO5_Pin_6(unsigned int Pi)//定义P5.6口
{
  #define Gpio5_Pin_6 P5OUT=(P5OUT&0Xbf)|(Pi<<=6)//1011 1111
    GPIO5_Pin_6;
}

void GPIO5_Pin_7(unsigned int Pi)//定义P5.7口
{
  #define Gpio5_Pin_7 P5OUT=(P5OUT&0X7f)|(Pi<<=7)//0111 1111
    GPIO5_Pin_7;
}

/*************************************************/
/*     独立io口 P4.0~P4.7  定义   功能：输出     */
/*************************************************/
void GPIO4_Pin_0(unsigned int Pi)//定义P4.0口
{
  #define Gpio4_Pin_0 P4OUT=(P4OUT&0Xfe)|Pi//1111 1110
    GPIO4_Pin_0;
}

void GPIO4_Pin_1(unsigned int Pi)//定义P4.1口
{
  #define Gpio4_Pin_1 P4OUT=(P4OUT&0Xfd)|(Pi<<=1)//1111 1101
    GPIO4_Pin_1;
}

void GPIO4_Pin_2(unsigned int Pi)//定义P4.2口
{
  #define Gpio4_Pin_2 P4OUT=(P4OUT&0Xfb)|(Pi<<=2)//1111 1011
    GPIO4_Pin_2;
}

void GPIO4_Pin_3(unsigned int Pi)//定义P4.3口
{
  #define Gpio4_Pin_3 P4OUT=(P4OUT&0Xf7)|(Pi<<=3)//1111 0111
    GPIO4_Pin_3;
}

void GPIO4_Pin_4(unsigned int Pi)//定义P4.4口
{
  #define Gpio4_Pin_4 P4OUT=(P4OUT&0Xef)|(Pi<<=4)//1110 1111
    GPIO4_Pin_4;
}

void GPIO4_Pin_5(unsigned int Pi)//定义P4.5口
{
  #define Gpio4_Pin_5 P4OUT=(P4OUT&0Xdf)|(Pi<<=5)//1101 1111
    GPIO4_Pin_5;
}

void GPIO4_Pin_6(unsigned int Pi)//定义P4.6口
{
  #define Gpio4_Pin_6 P4OUT=(P4OUT&0Xbf)|(Pi<<=6)//1011 1111
    GPIO4_Pin_6;
}

void GPIO4_Pin_7(unsigned int Pi)//定义P4.7口
{
  #define Gpio4_Pin_7 P4OUT=(P4OUT&0X7f)|(Pi<<=7)//0111 1111
    GPIO4_Pin_7;
}

/*************************************************/
/*     独立io口 P3.0~P3.7  定义   功能：输出     */
/*************************************************/
void GPIO3_Pin_0(unsigned int Pi)//定义P3.0口
{
  #define Gpio3_Pin_0 P3OUT=(P3OUT&0Xfe)|Pi//1111 1110
    GPIO3_Pin_0;
}

void GPIO3_Pin_1(unsigned int Pi)//定义P3.1口
{
  #define Gpio3_Pin_1 P3OUT=(P3OUT&0Xfd)|(Pi<<=1)//1111 1101
    GPIO3_Pin_1;
}

void GPIO3_Pin_2(unsigned int Pi)//定义P3.2口
{
  #define Gpio3_Pin_2 P3OUT=(P3OUT&0Xfb)|(Pi<<=2)//1111 1011
    GPIO3_Pin_2;
}

void GPIO3_Pin_3(unsigned int Pi)//定义P3.3口
{
  #define Gpio3_Pin_3 P3OUT=(P3OUT&0Xf7)|(Pi<<=3)//1111 0111
    GPIO3_Pin_3;
}

void GPIO3_Pin_4(unsigned int Pi)//定义P3.4口
{
  #define Gpio3_Pin_4 P3OUT=(P3OUT&0Xef)|(Pi<<=4)//1110 1111
    GPIO3_Pin_4;
}

void GPIO3_Pin_5(unsigned int Pi)//定义P3.5口
{
  #define Gpio3_Pin_5 P3OUT=(P3OUT&0Xdf)|(Pi<<=5)//1101 1111
    GPIO3_Pin_5;
}

void GPIO3_Pin_6(unsigned int Pi)//定义P3.6口
{
  #define Gpio3_Pin_6 P3OUT=(P3OUT&0Xbf)|(Pi<<=6)//1011 1111
    GPIO3_Pin_6;
}

void GPIO3_Pin_7(unsigned int Pi)//定义P3.7口
{
  #define Gpio3_Pin_7 P3OUT=(P3OUT&0X7f)|(Pi<<=7)//0111 1111
    GPIO3_Pin_7;
}

/*************************************************/
/*     独立io口 P2.0~P2.7  定义   功能：输出     */
/*************************************************/
void GPIO2_Pin_0(unsigned int Pi)//定义P2.0口
{
  #define Gpio2_Pin_0 P2OUT=(P2OUT&0Xfe)|Pi//1111 1110
    GPIO2_Pin_0;
}

void GPIO2_Pin_1(unsigned int Pi)//定义P2.1口
{
  #define Gpio2_Pin_1 P2OUT=(P2OUT&0Xfd)|(Pi<<=1)//1111 1101
    GPIO2_Pin_1;
}

void GPIO2_Pin_2(unsigned int Pi)//定义P2.2口
{
  #define Gpio2_Pin_2 P2OUT=(P2OUT&0Xfb)|(Pi<<=2)//1111 1011
    GPIO2_Pin_2;
}

void GPIO2_Pin_3(unsigned int Pi)//定义P2.3口
{
  #define Gpio2_Pin_3 P2OUT=(P2OUT&0Xf7)|(Pi<<=3)//1111 0111
    GPIO2_Pin_3;
}

void GPIO2_Pin_4(unsigned int Pi)//定义P2.4口
{
  #define Gpio2_Pin_4 P2OUT=(P2OUT&0Xef)|(Pi<<=4)//1110 1111
    GPIO2_Pin_4;
}

void GPIO2_Pin_5(unsigned int Pi)//定义P2.5口
{
  #define Gpio2_Pin_5 P2OUT=(P2OUT&0Xdf)|(Pi<<=5)//1101 1111
    GPIO2_Pin_5;
}

void GPIO2_Pin_6(unsigned int Pi)//定义P2.6口
{
  #define Gpio2_Pin_6 P2OUT=(P2OUT&0Xbf)|(Pi<<=6)//1011 1111
    GPIO2_Pin_6;
}

void GPIO2_Pin_7(unsigned int Pi)//定义P2.7口
{
  #define Gpio2_Pin_7 P2OUT=(P2OUT&0X7f)|(Pi<<=7)//0111 1111
    GPIO2_Pin_7;
}

/*************************************************/
/*     独立io口 P1.0~P1.7  定义   功能：输出     */
/*************************************************/
void GPIO1_Pin_0(unsigned int Pi)//定义P1.0口
{
  #define Gpio1_Pin_0 P6OUT=(P1OUT&0Xfe)|Pi//1111 1110
    GPIO1_Pin_0;
}

void GPIO1_Pin_1(unsigned int Pi)//定义P1.1口
{
  #define Gpio1_Pin_1 P1OUT=(P1OUT&0Xfd)|(Pi<<=1)//1111 1101
    GPIO1_Pin_1;
}

void GPIO1_Pin_2(unsigned int Pi)//定义P1.2口
{
  #define Gpio1_Pin_2 P1OUT=(P1OUT&0Xfb)|(Pi<<=2)//1111 1011
    GPIO1_Pin_2;
}

void GPIO1_Pin_3(unsigned int Pi)//定义P1.3口
{
  #define Gpio1_Pin_3 P1OUT=(P1OUT&0Xf7)|(Pi<<=3)//1111 0111
    GPIO1_Pin_3;
}

void GPIO1_Pin_4(unsigned int Pi)//定义P1.4口
{
  #define Gpio1_Pin_4 P1OUT=(P1OUT&0Xef)|(Pi<<=4)//1110 1111
    GPIO1_Pin_4;
}

void GPIO1_Pin_5(unsigned int Pi)//定义P1.5口
{
  #define Gpio1_Pin_5 P1OUT=(P1OUT&0Xdf)|(Pi<<=5)//1101 1111
    GPIO1_Pin_5;
}

void GPIO1_Pin_6(unsigned int Pi)//定义P1.6口
{
  #define Gpio1_Pin_6 P1OUT=(P1OUT&0Xbf)|(Pi<<=6)//1011 1111
    GPIO1_Pin_6;
}

void GPIO1_Pin_7(unsigned int Pi)//定义P1.7口
{
  #define Gpio1_Pin_7 P1OUT=(P1OUT&0X7f)|(Pi<<=7)//0111 1111
  GPIO1_Pin_7;
}

/////////////////////////////////////////////////////////////////////////////
//                                                                         //
/////////////////////////////////////////////////////////////////////////////


/****************************************************************************/
/*    独立io口读操作   读0 读1   默认:读1    P1.0~P1.7                      */
/****************************************************************************/
#define Read_GPIO1_Pin_0 (P1IN&0X01)//0000 0001   读P1.0的值 宏定义  默认高电平
#define Read_GPIO1_Pin_1 (P1IN&0X02)//0000 0010   读P1.1的值 宏定义  默认高电平
#define Read_GPIO1_Pin_2 (P1IN&0X04)//0000 0100   读P1.2的值 宏定义  默认高电平
#define Read_GPIO1_Pin_3 (P1IN&0X08)//0000 1000   读P1.3的值 宏定义  默认高电平
#define Read_GPIO1_Pin_4 (P1IN&0X10)//0001 0000   读P1.4的值 宏定义  默认高电平
#define Read_GPIO1_Pin_5 (P1IN&0X20)//0010 0000   读P1.5的值 宏定义  默认高电平
#define Read_GPIO1_Pin_6 (P1IN&0X40)//0100 0000   读P1.6的值 宏定义  默认高电平
#define Read_GPIO1_Pin_7 (P1IN&0X80)//1000 0000   读P1.7的值 宏定义  默认高电平


/****************************************************************************/
/*    独立io口读操作   读0 读1   默认:读1    P2.0~P2.7                      */
/****************************************************************************/
#define Read_GPIO2_Pin_0 (P2IN&0X01)//0000 0001   读P2.0的值 宏定义  默认高电平
#define Read_GPIO2_Pin_1 (P2IN&0X02)//0000 0010   读P2.1的值 宏定义  默认高电平
#define Read_GPIO2_Pin_2 (P2IN&0X04)//0000 0100   读P2.2的值 宏定义  默认高电平
#define Read_GPIO2_Pin_3 (P2IN&0X08)//0000 1000   读P2.3的值 宏定义  默认高电平
#define Read_GPIO2_Pin_4 (P2IN&0X10)//0001 0000   读P2.4的值 宏定义  默认高电平
#define Read_GPIO2_Pin_5 (P2IN&0X20)//0010 0000   读P2.5的值 宏定义  默认高电平
#define Read_GPIO2_Pin_6 (P2IN&0X40)//0100 0000   读P2.6的值 宏定义  默认高电平
#define Read_GPIO2_Pin_7 (P2IN&0X80)//1000 0000   读P2.7的值 宏定义  默认高电平


/****************************************************************************/
/*    独立io口读操作   读0 读1   默认:读1    P3.0~P3.7                      */
/****************************************************************************/
#define Read_GPIO3_Pin_0 (P3IN&0X01)//0000 0001   读P3.0的值 宏定义  默认高电平
#define Read_GPIO3_Pin_1 (P3IN&0X02)//0000 0010   读P3.1的值 宏定义  默认高电平
#define Read_GPIO3_Pin_2 (P3IN&0X04)//0000 0100   读P3.2的值 宏定义  默认高电平
#define Read_GPIO3_Pin_3 (P3IN&0X08)//0000 1000   读P3.3的值 宏定义  默认高电平
#define Read_GPIO3_Pin_4 (P3IN&0X10)//0001 0000   读P3.4的值 宏定义  默认高电平
#define Read_GPIO3_Pin_5 (P3IN&0X20)//0010 0000   读P3.5的值 宏定义  默认高电平
#define Read_GPIO3_Pin_6 (P3IN&0X40)//0100 0000   读P3.6的值 宏定义  默认高电平
#define Read_GPIO3_Pin_7 (P3IN&0X80)//1000 0000   读P3.7的值 宏定义  默认高电平


/****************************************************************************/
/*    独立io口读操作   读0 读1   默认:读1    P4.0~P4.7                      */
/****************************************************************************/
#define Read_GPIO4_Pin_0 (P4IN&0X01)//0000 0001   读P4.0的值 宏定义  默认高电平
#define Read_GPIO4_Pin_1 (P4IN&0X02)//0000 0010   读P4.1的值 宏定义  默认高电平
#define Read_GPIO4_Pin_2 (P4IN&0X04)//0000 0100   读P4.2的值 宏定义  默认高电平
#define Read_GPIO4_Pin_3 (P4IN&0X08)//0000 1000   读P4.3的值 宏定义  默认高电平
#define Read_GPIO4_Pin_4 (P4IN&0X10)//0001 0000   读P4.4的值 宏定义  默认高电平
#define Read_GPIO4_Pin_5 (P4IN&0X20)//0010 0000   读P4.5的值 宏定义  默认高电平
#define Read_GPIO4_Pin_6 (P4IN&0X40)//0100 0000   读P4.6的值 宏定义  默认高电平
#define Read_GPIO4_Pin_7 (P4IN&0X80)//1000 0000   读P4.7的值 宏定义  默认高电平


/****************************************************************************/
/*    独立io口读操作   读0 读1   默认:读1    P5.0~P5.7                      */
/****************************************************************************/
#define Read_GPIO5_Pin_0 (P5IN&0X01)//0000 0001   读P5.0的值 宏定义  默认高电平
#define Read_GPIO5_Pin_1 (P5IN&0X02)//0000 0010   读P5.1的值 宏定义  默认高电平
#define Read_GPIO5_Pin_2 (P5IN&0X04)//0000 0100   读P5.2的值 宏定义  默认高电平
#define Read_GPIO5_Pin_3 (P5IN&0X08)//0000 1000   读P5.3的值 宏定义  默认高电平
#define Read_GPIO5_Pin_4 (P5IN&0X10)//0001 0000   读P5.4的值 宏定义  默认高电平
#define Read_GPIO5_Pin_5 (P5IN&0X20)//0010 0000   读P5.5的值 宏定义  默认高电平
#define Read_GPIO5_Pin_6 (P5IN&0X40)//0100 0000   读P5.6的值 宏定义  默认高电平
#define Read_GPIO5_Pin_7 (P5IN&0X80)//1000 0000   读P5.7的值 宏定义  默认高电平


/****************************************************************************/
/*    独立io口读操作   读0 读1   默认:读1    P6.0~P6.7                      */
/****************************************************************************/
#define Read_GPIO6_Pin_0 (P6IN&0X01)//0000 0001   读P6.0的值 宏定义  默认高电平
#define Read_GPIO6_Pin_1 (P6IN&0X02)//0000 0010   读P6.1的值 宏定义  默认高电平
#define Read_GPIO6_Pin_2 (P6IN&0X04)//0000 0100   读P6.2的值 宏定义  默认高电平
#define Read_GPIO6_Pin_3 (P6IN&0X08)//0000 1000   读P6.3的值 宏定义  默认高电平
#define Read_GPIO6_Pin_4 (P6IN&0X10)//0001 0000   读P6.4的值 宏定义  默认高电平
#define Read_GPIO6_Pin_5 (P6IN&0X20)//0010 0000   读P6.5的值 宏定义  默认高电平
#define Read_GPIO6_Pin_6 (P6IN&0X40)//0100 0000   读P6.6的值 宏定义  默认高电平
#define Read_GPIO6_Pin_7 (P6IN&0X80)//1000 0000   读P6.7的值 宏定义  默认高电平

/****************************************************************************/
/*    独立io口读操作   读0 读1   默认:读1    P7.0~P7.7                      */
/****************************************************************************/
#define Read_GPIO7_Pin_0 (P6IN&0X01)//0000 0001   读P7.0的值 宏定义  默认高电平
#define Read_GPIO7_Pin_1 (P6IN&0X02)//0000 0010   读P7.1的值 宏定义  默认高电平
#define Read_GPIO7_Pin_2 (P6IN&0X04)//0000 0100   读P7.2的值 宏定义  默认高电平
#define Read_GPIO7_Pin_3 (P6IN&0X08)//0000 1000   读P7.3的值 宏定义  默认高电平
#define Read_GPIO7_Pin_4 (P6IN&0X10)//0001 0000   读P7.4的值 宏定义  默认高电平
#define Read_GPIO7_Pin_5 (P6IN&0X20)//0010 0000   读P7.5的值 宏定义  默认高电平
#define Read_GPIO7_Pin_6 (P6IN&0X40)//0100 0000   读P7.6的值 宏定义  默认高电平
#define Read_GPIO7_Pin_7 (P6IN&0X80)//1000 0000   读P7.7的值 宏定义  默认高电平


/****************************************************************************/
/*    独立io口读操作   读0 读1   默认:读1    P8.0~P8.7                      */
/****************************************************************************/
#define Read_GPIO8_Pin_0 (P6IN&0X01)//0000 0001   读P8.0的值 宏定义  默认高电平
#define Read_GPIO8_Pin_1 (P6IN&0X02)//0000 0010   读P8.1的值 宏定义  默认高电平
#define Read_GPIO8_Pin_2 (P6IN&0X04)//0000 0100   读P8.2的值 宏定义  默认高电平
#define Read_GPIO8_Pin_3 (P6IN&0X08)//0000 1000   读P8.3的值 宏定义  默认高电平
#define Read_GPIO8_Pin_4 (P6IN&0X10)//0001 0000   读P8.4的值 宏定义  默认高电平
#define Read_GPIO8_Pin_5 (P6IN&0X20)//0010 0000   读P8.5的值 宏定义  默认高电平
#define Read_GPIO8_Pin_6 (P6IN&0X40)//0100 0000   读P8.6的值 宏定义  默认高电平
#define Read_GPIO8_Pin_7 (P6IN&0X80)//1000 0000   读P8.7的值 宏定义  默认高电平


/****************************************************************************/
/*    独立io口读操作   读0 读1   默认:读1    P9.0~P9.7                      */
/****************************************************************************/
#define Read_GPIO9_Pin_0 (P6IN&0X01)//0000 0001   读P9.0的值 宏定义  默认高电平
#define Read_GPIO9_Pin_1 (P6IN&0X02)//0000 0010   读P9.1的值 宏定义  默认高电平
#define Read_GPIO9_Pin_2 (P6IN&0X04)//0000 0100   读P9.2的值 宏定义  默认高电平
#define Read_GPIO9_Pin_3 (P6IN&0X08)//0000 1000   读P9.3的值 宏定义  默认高电平
#define Read_GPIO9_Pin_4 (P6IN&0X10)//0001 0000   读P9.4的值 宏定义  默认高电平
#define Read_GPIO9_Pin_5 (P6IN&0X20)//0010 0000   读P9.5的值 宏定义  默认高电平
#define Read_GPIO9_Pin_6 (P6IN&0X40)//0100 0000   读P9.6的值 宏定义  默认高电平
#define Read_GPIO9_Pin_7 (P6IN&0X80)//1000 0000   读P9.7的值 宏定义  默认高电平


/****************************************************************************/
/*    独立io口读操作   读0 读1   默认:读1    P10.0~P10.7                      */
/****************************************************************************/
#define Read_GPIO10_Pin_0 (P6IN&0X01)//0000 0001   读P10.0的值 宏定义  默认高电平
#define Read_GPIO10_Pin_1 (P6IN&0X02)//0000 0010   读P10.1的值 宏定义  默认高电平
#define Read_GPIO10_Pin_2 (P6IN&0X04)//0000 0100   读P10.2的值 宏定义  默认高电平
#define Read_GPIO10_Pin_3 (P6IN&0X08)//0000 1000   读P10.3的值 宏定义  默认高电平
#define Read_GPIO10_Pin_4 (P6IN&0X10)//0001 0000   读P10.4的值 宏定义  默认高电平
#define Read_GPIO10_Pin_5 (P6IN&0X20)//0010 0000   读P10.5的值 宏定义  默认高电平
#endif
