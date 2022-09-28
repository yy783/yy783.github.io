#ifndef __gpio
#define __gpio
/*************************************************/
/*     ����io�� P10.0~P10.5  ����   ���ܣ����     */
/*************************************************/
void GPIO10_Pin_0(unsigned int Pi)//����P10.0��
{
  #define Gpio10_Pin_0 P10OUT=(P10OUT&0Xfe)|Pi//1111 1110
  GPIO10_Pin_0;
}

void GPIO10_Pin_1(unsigned int Pi)//����P10.1��
{
  #define Gpio10_Pin_1 P10OUT=(P10OUT&0Xfd)|(Pi<<=1)//1111 1101
  GPIO10_Pin_1;
}

void GPIO10_Pin_2(unsigned int Pi)//����P10.2��
{
  #define Gpio10_Pin_2 P10OUT=(P10OUT&0Xfb)|(Pi<<=2)//1111 1011
  GPIO10_Pin_2;
}

void GPIO10_Pin_3(unsigned int Pi)//����P10.3��
{
  #define Gpio10_Pin_3 P6OUT=(P10OUT&0Xf7)|(Pi<<=3)//1111 0111
  GPIO10_Pin_3;
}

void GPIO10_Pin_4(unsigned int Pi)//����P10.4��
{
  #define Gpio10_Pin_4 P6OUT=(P10OUT&0Xef)|(Pi<<=4)//1110 1111
  GPIO10_Pin_4;
}

void GPIO10_Pin_5(unsigned int Pi)//����P10.5��
{
  #define Gpio10_Pin_5 P10OUT=(P6OUT&0Xdf)|(Pi<<=5)//1101 1111
  GPIO10_Pin_5;
}
/*************************************************/
/*     ����io�� P9.0~P9.7  ����   ���ܣ����     */
/*************************************************/
void GPIO9_Pin_0(unsigned int Pi)//����P9.0��
{
  #define Gpio9_Pin_0 P9OUT=(P9OUT&0Xfe)|Pi//1111 1110
  GPIO9_Pin_0;
}

void GPIO9_Pin_1(unsigned int Pi)//����P9.1��
{
  #define Gpio9_Pin_1 P9OUT=(P9OUT&0Xfd)|(Pi<<=1)//1111 1101
  GPIO9_Pin_1;
}

void GPIO9_Pin_2(unsigned int Pi)//����P9.2��
{
  #define Gpio9_Pin_2 P9OUT=(P9OUT&0Xfb)|(Pi<<=2)//1111 1011
  GPIO9_Pin_2;
}

void GPIO9_Pin_3(unsigned int Pi)//����P9.3��
{
  #define Gpio9_Pin_3 P6OUT=(P9OUT&0Xf7)|(Pi<<=3)//1111 0111
  GPIO9_Pin_3;
}

void GPIO9_Pin_4(unsigned int Pi)//����P9.4��
{
  #define Gpio9_Pin_4 P6OUT=(P9OUT&0Xef)|(Pi<<=4)//1110 1111
  GPIO9_Pin_4;
}

void GPIO9_Pin_5(unsigned int Pi)//����P9.5��
{
  #define Gpio9_Pin_5 P9OUT=(P9OUT&0Xdf)|(Pi<<=5)//1101 1111
  GPIO9_Pin_5;
}

void GPIO9_Pin_6(unsigned int Pi)//����P9.6��
{
  #define Gpio9_Pin_6 P9OUT=(P9OUT&0Xbf)|(Pi<<=6)//1011 1111
  GPIO9_Pin_6;
}

void GPIO9_Pin_7(unsigned int Pi)//����P6.7��
{
  #define Gpio9_Pin_7 P6OUT=(P9OUT&0X7f)|(Pi<<=7)//0111 1111
  GPIO9_Pin_7;
}
/*************************************************/
/*     ����io�� P8.0~P8.7  ����   ���ܣ����     */
/*************************************************/
void GPIO8_Pin_0(unsigned int Pi)//����P8.0��
{
  #define Gpio8_Pin_0 P6OUT=(P6OUT&0Xfe)|Pi//1111 1110
  GPIO8_Pin_0;
}

void GPIO8_Pin_1(unsigned int Pi)//����P8.1��
{
  #define Gpio8_Pin_1 P6OUT=(P8OUT&0Xfd)|(Pi<<=1)//1111 1101
  GPIO8_Pin_1;
}

void GPIO8_Pin_2(unsigned int Pi)//����P8.2��
{
  #define Gpio8_Pin_2 P8OUT=(P8OUT&0Xfb)|(Pi<<=2)//1111 1011
  GPIO8_Pin_2;
}

void GPIO8_Pin_3(unsigned int Pi)//����P8.3��
{
  #define Gpio8_Pin_3 P6OUT=(P8OUT&0Xf7)|(Pi<<=3)//1111 0111
  GPIO8_Pin_3;
}

void GPIO8_Pin_4(unsigned int Pi)//����P8.4��
{
  #define Gpio8_Pin_4 P8OUT=(P8OUT&0Xef)|(Pi<<=4)//1110 1111
  GPIO8_Pin_4;
}

void GPIO8_Pin_5(unsigned int Pi)//����P8.5��
{
  #define Gpio6_Pin_5 P6OUT=(P6OUT&0Xdf)|(Pi<<=5)//1101 1111
  GPIO8_Pin_5;
}

void GPIO8_Pin_6(unsigned int Pi)//����P8.6��
{
  #define Gpio8_Pin_6 P8OUT=(P8OUT&0Xbf)|(Pi<<=6)//1011 1111
  GPIO8_Pin_6;
}

void GPIO8_Pin_7(unsigned int Pi)//����P8.7��
{
  #define Gpio8_Pin_7 P8OUT=(P8OUT&0X7f)|(Pi<<=7)//0111 1111
  GPIO8_Pin_7;
}
/*************************************************/
/*     ����io�� P7.0~P7.7  ����   ���ܣ����     */
/*************************************************/
void GPIO7_Pin_0(unsigned int Pi)//����P7.0��
{
  #define Gpio7_Pin_0 P7OUT=(P7OUT&0Xfe)|Pi//1111 1110
  GPIO7_Pin_0;
}

void GPIO7_Pin_1(unsigned int Pi)//����P7.1��
{
  #define Gpio7_Pin_1 P7OUT=(P7OUT&0Xfd)|(Pi<<=1)//1111 1101
  GPIO7_Pin_1;
}

void GPIO7_Pin_2(unsigned int Pi)//����P7.2��
{
  #define Gpio7_Pin_2 P7OUT=(P7OUT&0Xfb)|(Pi<<=2)//1111 1011
  GPIO7_Pin_2;
}

void GPIO7_Pin_3(unsigned int Pi)//����P7.3��
{
  #define Gpio7_Pin_3 P7OUT=(P7OUT&0Xf7)|(Pi<<=3)//1111 0111
    GPIO7_Pin_3;
}

void GPIO7_Pin_4(unsigned int Pi)//����P7.4��
{
  #define Gpio7_Pin_4 P7OUT=(P7OUT&0Xef)|(Pi<<=4)//1110 1111
    GPIO7_Pin_4;
}

void GPIO7_Pin_5(unsigned int Pi)//����P7.5��
{
  #define Gpio7_Pin_5 P7OUT=(P7OUT&0Xdf)|(Pi<<=5)//1101 1111
    GPIO7_Pin_5;
}

void GPIO7_Pin_6(unsigned int Pi)//����P7.6��
{
  #define Gpio7_Pin_6 P7OUT=(P7OUT&0Xbf)|(Pi<<=6)//1011 1111
    GPIO7_Pin_6;
}

void GPIO7_Pin_7(unsigned int Pi)//����P7.7��
{
  #define Gpio7_Pin_7 P7OUT=(P7OUT&0X7f)|(Pi<<=7)//0111 1111
    GPIO7_Pin_7;
}
/*************************************************/
/*     ����io�� P6.0~P6.7  ����   ���ܣ����     */
/*************************************************/
void GPIO6_Pin_0(unsigned int Pi)//����P6.0��
{
  #define Gpio6_Pin_0 P6OUT=(P6OUT&0Xfe)|Pi//1111 1110
    GPIO9_Pin_0;
}

void GPIO6_Pin_1(unsigned int Pi)//����P6.1��
{
  #define Gpio6_Pin_1 P6OUT=(P6OUT&0Xfd)|(Pi<<=1)//1111 1101
    GPIO6_Pin_1;
}

void GPIO6_Pin_2(unsigned int Pi)//����P6.2��
{
  #define Gpio6_Pin_2 P6OUT=(P6OUT&0Xfb)|(Pi<<=2)//1111 1011
    GPIO6_Pin_2;
}

void GPIO6_Pin_3(unsigned int Pi)//����P6.3��
{
  #define Gpio6_Pin_3 P6OUT=(P6OUT&0Xf7)|(Pi<<=3)//1111 0111
    GPIO6_Pin_3;
}

void GPIO6_Pin_4(unsigned int Pi)//����P6.4��
{
  #define Gpio6_Pin_4 P6OUT=(P6OUT&0Xef)|(Pi<<=4)//1110 1111
    GPIO6_Pin_4;
}

void GPIO6_Pin_5(unsigned int Pi)//����P6.5��
{
  #define Gpio6_Pin_5 P6OUT=(P6OUT&0Xdf)|(Pi<<=5)//1101 1111
    GPIO6_Pin_5;
}

void GPIO6_Pin_6(unsigned int Pi)//����P6.6��
{
  #define Gpio6_Pin_6 P6OUT=(P6OUT&0Xbf)|(Pi<<=6)//1011 1111
    GPIO6_Pin_6;
}

void GPIO6_Pin_7(unsigned int Pi)//����P6.7��
{
  #define Gpio6_Pin_7 P6OUT=(P6OUT&0X7f)|(Pi<<=7)//0111 1111
    GPIO6_Pin_7;
}

/*************************************************/
/*     ����io�� P5.0~P5.7  ����   ���ܣ����     */
/*************************************************/
void GPIO5_Pin_0(unsigned int Pi)//����P5.0��
{
  #define Gpio5_Pin_0 P5OUT=(P5OUT&0Xfe)|Pi//1111 1110
    GPIO5_Pin_0;
}

void GPIO5_Pin_1(unsigned int Pi)//����P5.1��
{
  #define Gpio5_Pin_1 P5OUT=(P5OUT&0Xfd)|(Pi<<=1)//1111 1101
    GPIO5_Pin_1;
}

void GPIO5_Pin_2(unsigned int Pi)//����P5.2��
{
  #define Gpio5_Pin_2 P5OUT=(P5OUT&0Xfb)|(Pi<<=2)//1111 1011
    GPIO5_Pin_2;
}

void GPIO5_Pin_3(unsigned int Pi)//����P5.3��
{
  #define Gpio5_Pin_3 P5OUT=(P5OUT&0Xf7)|(Pi<<=3)//1111 0111
    GPIO5_Pin_3;
}

void GPIO5_Pin_4(unsigned int Pi)//����P5.4��
{
  #define Gpio5_Pin_4 P5OUT=(P5OUT&0Xef)|(Pi<<=4)//1110 1111
    GPIO5_Pin_4;
}

void GPIO5_Pin_5(unsigned int Pi)//����P5.5��
{
  #define Gpio5_Pin_5 P5OUT=(P5OUT&0Xdf)|(Pi<<=5)//1101 1111
    GPIO5_Pin_5;
}

void GPIO5_Pin_6(unsigned int Pi)//����P5.6��
{
  #define Gpio5_Pin_6 P5OUT=(P5OUT&0Xbf)|(Pi<<=6)//1011 1111
    GPIO5_Pin_6;
}

void GPIO5_Pin_7(unsigned int Pi)//����P5.7��
{
  #define Gpio5_Pin_7 P5OUT=(P5OUT&0X7f)|(Pi<<=7)//0111 1111
    GPIO5_Pin_7;
}

/*************************************************/
/*     ����io�� P4.0~P4.7  ����   ���ܣ����     */
/*************************************************/
void GPIO4_Pin_0(unsigned int Pi)//����P4.0��
{
  #define Gpio4_Pin_0 P4OUT=(P4OUT&0Xfe)|Pi//1111 1110
    GPIO4_Pin_0;
}

void GPIO4_Pin_1(unsigned int Pi)//����P4.1��
{
  #define Gpio4_Pin_1 P4OUT=(P4OUT&0Xfd)|(Pi<<=1)//1111 1101
    GPIO4_Pin_1;
}

void GPIO4_Pin_2(unsigned int Pi)//����P4.2��
{
  #define Gpio4_Pin_2 P4OUT=(P4OUT&0Xfb)|(Pi<<=2)//1111 1011
    GPIO4_Pin_2;
}

void GPIO4_Pin_3(unsigned int Pi)//����P4.3��
{
  #define Gpio4_Pin_3 P4OUT=(P4OUT&0Xf7)|(Pi<<=3)//1111 0111
    GPIO4_Pin_3;
}

void GPIO4_Pin_4(unsigned int Pi)//����P4.4��
{
  #define Gpio4_Pin_4 P4OUT=(P4OUT&0Xef)|(Pi<<=4)//1110 1111
    GPIO4_Pin_4;
}

void GPIO4_Pin_5(unsigned int Pi)//����P4.5��
{
  #define Gpio4_Pin_5 P4OUT=(P4OUT&0Xdf)|(Pi<<=5)//1101 1111
    GPIO4_Pin_5;
}

void GPIO4_Pin_6(unsigned int Pi)//����P4.6��
{
  #define Gpio4_Pin_6 P4OUT=(P4OUT&0Xbf)|(Pi<<=6)//1011 1111
    GPIO4_Pin_6;
}

void GPIO4_Pin_7(unsigned int Pi)//����P4.7��
{
  #define Gpio4_Pin_7 P4OUT=(P4OUT&0X7f)|(Pi<<=7)//0111 1111
    GPIO4_Pin_7;
}

/*************************************************/
/*     ����io�� P3.0~P3.7  ����   ���ܣ����     */
/*************************************************/
void GPIO3_Pin_0(unsigned int Pi)//����P3.0��
{
  #define Gpio3_Pin_0 P3OUT=(P3OUT&0Xfe)|Pi//1111 1110
    GPIO3_Pin_0;
}

void GPIO3_Pin_1(unsigned int Pi)//����P3.1��
{
  #define Gpio3_Pin_1 P3OUT=(P3OUT&0Xfd)|(Pi<<=1)//1111 1101
    GPIO3_Pin_1;
}

void GPIO3_Pin_2(unsigned int Pi)//����P3.2��
{
  #define Gpio3_Pin_2 P3OUT=(P3OUT&0Xfb)|(Pi<<=2)//1111 1011
    GPIO3_Pin_2;
}

void GPIO3_Pin_3(unsigned int Pi)//����P3.3��
{
  #define Gpio3_Pin_3 P3OUT=(P3OUT&0Xf7)|(Pi<<=3)//1111 0111
    GPIO3_Pin_3;
}

void GPIO3_Pin_4(unsigned int Pi)//����P3.4��
{
  #define Gpio3_Pin_4 P3OUT=(P3OUT&0Xef)|(Pi<<=4)//1110 1111
    GPIO3_Pin_4;
}

void GPIO3_Pin_5(unsigned int Pi)//����P3.5��
{
  #define Gpio3_Pin_5 P3OUT=(P3OUT&0Xdf)|(Pi<<=5)//1101 1111
    GPIO3_Pin_5;
}

void GPIO3_Pin_6(unsigned int Pi)//����P3.6��
{
  #define Gpio3_Pin_6 P3OUT=(P3OUT&0Xbf)|(Pi<<=6)//1011 1111
    GPIO3_Pin_6;
}

void GPIO3_Pin_7(unsigned int Pi)//����P3.7��
{
  #define Gpio3_Pin_7 P3OUT=(P3OUT&0X7f)|(Pi<<=7)//0111 1111
    GPIO3_Pin_7;
}

/*************************************************/
/*     ����io�� P2.0~P2.7  ����   ���ܣ����     */
/*************************************************/
void GPIO2_Pin_0(unsigned int Pi)//����P2.0��
{
  #define Gpio2_Pin_0 P2OUT=(P2OUT&0Xfe)|Pi//1111 1110
    GPIO2_Pin_0;
}

void GPIO2_Pin_1(unsigned int Pi)//����P2.1��
{
  #define Gpio2_Pin_1 P2OUT=(P2OUT&0Xfd)|(Pi<<=1)//1111 1101
    GPIO2_Pin_1;
}

void GPIO2_Pin_2(unsigned int Pi)//����P2.2��
{
  #define Gpio2_Pin_2 P2OUT=(P2OUT&0Xfb)|(Pi<<=2)//1111 1011
    GPIO2_Pin_2;
}

void GPIO2_Pin_3(unsigned int Pi)//����P2.3��
{
  #define Gpio2_Pin_3 P2OUT=(P2OUT&0Xf7)|(Pi<<=3)//1111 0111
    GPIO2_Pin_3;
}

void GPIO2_Pin_4(unsigned int Pi)//����P2.4��
{
  #define Gpio2_Pin_4 P2OUT=(P2OUT&0Xef)|(Pi<<=4)//1110 1111
    GPIO2_Pin_4;
}

void GPIO2_Pin_5(unsigned int Pi)//����P2.5��
{
  #define Gpio2_Pin_5 P2OUT=(P2OUT&0Xdf)|(Pi<<=5)//1101 1111
    GPIO2_Pin_5;
}

void GPIO2_Pin_6(unsigned int Pi)//����P2.6��
{
  #define Gpio2_Pin_6 P2OUT=(P2OUT&0Xbf)|(Pi<<=6)//1011 1111
    GPIO2_Pin_6;
}

void GPIO2_Pin_7(unsigned int Pi)//����P2.7��
{
  #define Gpio2_Pin_7 P2OUT=(P2OUT&0X7f)|(Pi<<=7)//0111 1111
    GPIO2_Pin_7;
}

/*************************************************/
/*     ����io�� P1.0~P1.7  ����   ���ܣ����     */
/*************************************************/
void GPIO1_Pin_0(unsigned int Pi)//����P1.0��
{
  #define Gpio1_Pin_0 P6OUT=(P1OUT&0Xfe)|Pi//1111 1110
    GPIO1_Pin_0;
}

void GPIO1_Pin_1(unsigned int Pi)//����P1.1��
{
  #define Gpio1_Pin_1 P1OUT=(P1OUT&0Xfd)|(Pi<<=1)//1111 1101
    GPIO1_Pin_1;
}

void GPIO1_Pin_2(unsigned int Pi)//����P1.2��
{
  #define Gpio1_Pin_2 P1OUT=(P1OUT&0Xfb)|(Pi<<=2)//1111 1011
    GPIO1_Pin_2;
}

void GPIO1_Pin_3(unsigned int Pi)//����P1.3��
{
  #define Gpio1_Pin_3 P1OUT=(P1OUT&0Xf7)|(Pi<<=3)//1111 0111
    GPIO1_Pin_3;
}

void GPIO1_Pin_4(unsigned int Pi)//����P1.4��
{
  #define Gpio1_Pin_4 P1OUT=(P1OUT&0Xef)|(Pi<<=4)//1110 1111
    GPIO1_Pin_4;
}

void GPIO1_Pin_5(unsigned int Pi)//����P1.5��
{
  #define Gpio1_Pin_5 P1OUT=(P1OUT&0Xdf)|(Pi<<=5)//1101 1111
    GPIO1_Pin_5;
}

void GPIO1_Pin_6(unsigned int Pi)//����P1.6��
{
  #define Gpio1_Pin_6 P1OUT=(P1OUT&0Xbf)|(Pi<<=6)//1011 1111
    GPIO1_Pin_6;
}

void GPIO1_Pin_7(unsigned int Pi)//����P1.7��
{
  #define Gpio1_Pin_7 P1OUT=(P1OUT&0X7f)|(Pi<<=7)//0111 1111
  GPIO1_Pin_7;
}

/////////////////////////////////////////////////////////////////////////////
//                                                                         //
/////////////////////////////////////////////////////////////////////////////


/****************************************************************************/
/*    ����io�ڶ�����   ��0 ��1   Ĭ��:��1    P1.0~P1.7                      */
/****************************************************************************/
#define Read_GPIO1_Pin_0 (P1IN&0X01)//0000 0001   ��P1.0��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO1_Pin_1 (P1IN&0X02)//0000 0010   ��P1.1��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO1_Pin_2 (P1IN&0X04)//0000 0100   ��P1.2��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO1_Pin_3 (P1IN&0X08)//0000 1000   ��P1.3��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO1_Pin_4 (P1IN&0X10)//0001 0000   ��P1.4��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO1_Pin_5 (P1IN&0X20)//0010 0000   ��P1.5��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO1_Pin_6 (P1IN&0X40)//0100 0000   ��P1.6��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO1_Pin_7 (P1IN&0X80)//1000 0000   ��P1.7��ֵ �궨��  Ĭ�ϸߵ�ƽ


/****************************************************************************/
/*    ����io�ڶ�����   ��0 ��1   Ĭ��:��1    P2.0~P2.7                      */
/****************************************************************************/
#define Read_GPIO2_Pin_0 (P2IN&0X01)//0000 0001   ��P2.0��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO2_Pin_1 (P2IN&0X02)//0000 0010   ��P2.1��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO2_Pin_2 (P2IN&0X04)//0000 0100   ��P2.2��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO2_Pin_3 (P2IN&0X08)//0000 1000   ��P2.3��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO2_Pin_4 (P2IN&0X10)//0001 0000   ��P2.4��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO2_Pin_5 (P2IN&0X20)//0010 0000   ��P2.5��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO2_Pin_6 (P2IN&0X40)//0100 0000   ��P2.6��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO2_Pin_7 (P2IN&0X80)//1000 0000   ��P2.7��ֵ �궨��  Ĭ�ϸߵ�ƽ


/****************************************************************************/
/*    ����io�ڶ�����   ��0 ��1   Ĭ��:��1    P3.0~P3.7                      */
/****************************************************************************/
#define Read_GPIO3_Pin_0 (P3IN&0X01)//0000 0001   ��P3.0��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO3_Pin_1 (P3IN&0X02)//0000 0010   ��P3.1��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO3_Pin_2 (P3IN&0X04)//0000 0100   ��P3.2��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO3_Pin_3 (P3IN&0X08)//0000 1000   ��P3.3��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO3_Pin_4 (P3IN&0X10)//0001 0000   ��P3.4��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO3_Pin_5 (P3IN&0X20)//0010 0000   ��P3.5��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO3_Pin_6 (P3IN&0X40)//0100 0000   ��P3.6��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO3_Pin_7 (P3IN&0X80)//1000 0000   ��P3.7��ֵ �궨��  Ĭ�ϸߵ�ƽ


/****************************************************************************/
/*    ����io�ڶ�����   ��0 ��1   Ĭ��:��1    P4.0~P4.7                      */
/****************************************************************************/
#define Read_GPIO4_Pin_0 (P4IN&0X01)//0000 0001   ��P4.0��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO4_Pin_1 (P4IN&0X02)//0000 0010   ��P4.1��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO4_Pin_2 (P4IN&0X04)//0000 0100   ��P4.2��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO4_Pin_3 (P4IN&0X08)//0000 1000   ��P4.3��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO4_Pin_4 (P4IN&0X10)//0001 0000   ��P4.4��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO4_Pin_5 (P4IN&0X20)//0010 0000   ��P4.5��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO4_Pin_6 (P4IN&0X40)//0100 0000   ��P4.6��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO4_Pin_7 (P4IN&0X80)//1000 0000   ��P4.7��ֵ �궨��  Ĭ�ϸߵ�ƽ


/****************************************************************************/
/*    ����io�ڶ�����   ��0 ��1   Ĭ��:��1    P5.0~P5.7                      */
/****************************************************************************/
#define Read_GPIO5_Pin_0 (P5IN&0X01)//0000 0001   ��P5.0��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO5_Pin_1 (P5IN&0X02)//0000 0010   ��P5.1��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO5_Pin_2 (P5IN&0X04)//0000 0100   ��P5.2��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO5_Pin_3 (P5IN&0X08)//0000 1000   ��P5.3��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO5_Pin_4 (P5IN&0X10)//0001 0000   ��P5.4��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO5_Pin_5 (P5IN&0X20)//0010 0000   ��P5.5��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO5_Pin_6 (P5IN&0X40)//0100 0000   ��P5.6��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO5_Pin_7 (P5IN&0X80)//1000 0000   ��P5.7��ֵ �궨��  Ĭ�ϸߵ�ƽ


/****************************************************************************/
/*    ����io�ڶ�����   ��0 ��1   Ĭ��:��1    P6.0~P6.7                      */
/****************************************************************************/
#define Read_GPIO6_Pin_0 (P6IN&0X01)//0000 0001   ��P6.0��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO6_Pin_1 (P6IN&0X02)//0000 0010   ��P6.1��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO6_Pin_2 (P6IN&0X04)//0000 0100   ��P6.2��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO6_Pin_3 (P6IN&0X08)//0000 1000   ��P6.3��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO6_Pin_4 (P6IN&0X10)//0001 0000   ��P6.4��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO6_Pin_5 (P6IN&0X20)//0010 0000   ��P6.5��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO6_Pin_6 (P6IN&0X40)//0100 0000   ��P6.6��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO6_Pin_7 (P6IN&0X80)//1000 0000   ��P6.7��ֵ �궨��  Ĭ�ϸߵ�ƽ

/****************************************************************************/
/*    ����io�ڶ�����   ��0 ��1   Ĭ��:��1    P7.0~P7.7                      */
/****************************************************************************/
#define Read_GPIO7_Pin_0 (P6IN&0X01)//0000 0001   ��P7.0��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO7_Pin_1 (P6IN&0X02)//0000 0010   ��P7.1��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO7_Pin_2 (P6IN&0X04)//0000 0100   ��P7.2��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO7_Pin_3 (P6IN&0X08)//0000 1000   ��P7.3��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO7_Pin_4 (P6IN&0X10)//0001 0000   ��P7.4��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO7_Pin_5 (P6IN&0X20)//0010 0000   ��P7.5��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO7_Pin_6 (P6IN&0X40)//0100 0000   ��P7.6��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO7_Pin_7 (P6IN&0X80)//1000 0000   ��P7.7��ֵ �궨��  Ĭ�ϸߵ�ƽ


/****************************************************************************/
/*    ����io�ڶ�����   ��0 ��1   Ĭ��:��1    P8.0~P8.7                      */
/****************************************************************************/
#define Read_GPIO8_Pin_0 (P6IN&0X01)//0000 0001   ��P8.0��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO8_Pin_1 (P6IN&0X02)//0000 0010   ��P8.1��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO8_Pin_2 (P6IN&0X04)//0000 0100   ��P8.2��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO8_Pin_3 (P6IN&0X08)//0000 1000   ��P8.3��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO8_Pin_4 (P6IN&0X10)//0001 0000   ��P8.4��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO8_Pin_5 (P6IN&0X20)//0010 0000   ��P8.5��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO8_Pin_6 (P6IN&0X40)//0100 0000   ��P8.6��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO8_Pin_7 (P6IN&0X80)//1000 0000   ��P8.7��ֵ �궨��  Ĭ�ϸߵ�ƽ


/****************************************************************************/
/*    ����io�ڶ�����   ��0 ��1   Ĭ��:��1    P9.0~P9.7                      */
/****************************************************************************/
#define Read_GPIO9_Pin_0 (P6IN&0X01)//0000 0001   ��P9.0��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO9_Pin_1 (P6IN&0X02)//0000 0010   ��P9.1��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO9_Pin_2 (P6IN&0X04)//0000 0100   ��P9.2��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO9_Pin_3 (P6IN&0X08)//0000 1000   ��P9.3��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO9_Pin_4 (P6IN&0X10)//0001 0000   ��P9.4��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO9_Pin_5 (P6IN&0X20)//0010 0000   ��P9.5��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO9_Pin_6 (P6IN&0X40)//0100 0000   ��P9.6��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO9_Pin_7 (P6IN&0X80)//1000 0000   ��P9.7��ֵ �궨��  Ĭ�ϸߵ�ƽ


/****************************************************************************/
/*    ����io�ڶ�����   ��0 ��1   Ĭ��:��1    P10.0~P10.7                      */
/****************************************************************************/
#define Read_GPIO10_Pin_0 (P6IN&0X01)//0000 0001   ��P10.0��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO10_Pin_1 (P6IN&0X02)//0000 0010   ��P10.1��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO10_Pin_2 (P6IN&0X04)//0000 0100   ��P10.2��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO10_Pin_3 (P6IN&0X08)//0000 1000   ��P10.3��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO10_Pin_4 (P6IN&0X10)//0001 0000   ��P10.4��ֵ �궨��  Ĭ�ϸߵ�ƽ
#define Read_GPIO10_Pin_5 (P6IN&0X20)//0010 0000   ��P10.5��ֵ �궨��  Ĭ�ϸߵ�ƽ
#endif
