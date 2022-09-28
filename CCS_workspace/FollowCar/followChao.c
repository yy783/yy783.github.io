#include "msp430g2553.h"
#define uchar unsigned char
#define uint unsigned int

int w=0;
/***************新加入*********************/
float current_time;//最近一次测得时间
/*MyPro*/
#define LED_1 BIT0
#define SW_2 BIT3
#define TA1_1 BIT2 //TA0.1 HC-SR04 Echo
#define TRIG BIT1 //HC-SR04 Trig *********************
#define ACCU_GRD 7 //Accuracy Grade "xxx.x"+'\0'
#define MIN_UNIT_TO1M 1000 //1m to 1mm

/*TIMER0*/
#define SOUR_CLK 1045000
#define DIV_CLK_1 1
#define SYS_CLK_SIG_1 SOUR_CLK/DIV_CLK_1 //SYS_CLK_SIG_1=1045000
#define DISTANCE 45 //dm
#define TIMER_RIG_MAX 0xffff
#define MAX_TIME_1 DISTANCE*2/34*SYS_CLK_SIG_1 //MAX_TIME_1=45*2/34*1045000
#ifdef MAX_TIME_1
#define SYS_CLK SYS_CLK_SIG_1 //SYS_CLK=SYS_CLK_SIG_1=1045000
#endif
#define UART_TXD BIT2


float distance_main;
float distance;
uchar style;
uint times;
uint succeed_flag;

/*****************************************************
                     1 us延时函数
*****************************************************/
void delay_1us(void)
{
  asm("nop");
}

/*****************************************************
                     N us延时函数
*****************************************************/
void delay_nus(unsigned int n)
{
  unsigned int i;
  for(i=0;i<n;i++)
    delay_1us();
}

/*****************************************************
                     主函数
*****************************************************/
int ChaoShengBo( void )
{
    P1DIR|=BIT2;//P1.2输出
    P1DIR&=~BIT3;//P1.3输入
    P1REN|=BIT3;//P1.3内部上拉电阻使能

    P1OUT&=~BIT2;//P1.2=0;P1.2接 TRIG=0

    _DINT();//关中断

    P1OUT&=~BIT2;//P1.2=0;P1.2接 TRIG=0
    P1OUT|=BIT2;//P1.2=1;P1.2接TRIG=1,输出
    delay_nus(20);//发送超声波
    P1OUT&=~BIT2;//P1.2=0;P1.2接 TRIG=0

    while(!(P1IN&BIT3));//P1.3（ECHO）输入若为0，则停留在此
    //Echo=1时开始向下执行

    succeed_flag=0;//清测量成功标志
    TACTL|=TASSEL1+MC_2+TACLR;//定时器控制寄存器，连续计数模式，计数器清零

    TACTL|=TASSEL1+MC_2TACLR;
    P1REN|=

    P1REN|=BIT3;     //内部上拉电阻使能
    P1IES|=BIT3;//下降沿触发
    P1IFG&=~BIT3;//中断标志清除
    P1IE|=BIT3;//打开p1.3外部中断
    _EINT();//打开总中断 1.1

    delay_nus(5000);//等待测量的结果
//    TACTL&=~MC_2;//停止
//    P1IE&=~BIT3;//关闭外部中断


   if(succeed_flag==1)
    {
      distance=(times*34000)/(1.04*1000000)/2;
    }

   if(succeed_flag==0)
    {
      distance=0;//没有回波则清零
    }
     if(distance >=20)
     {
         /*变速写这里*/
         P1DIR |= BIT6;
         P1OUT |= BIT6;

     }


    delay_nus(10);

}

#pragma vector=PORT1_VECTOR
__interrupt void Port_1(void)
{

//
  TACTL&=~MC_2;//停止
  times=TAR;
  succeed_flag=1;//置成功测量的标志
  P1IE&=~BIT3;//关闭外部中断
  P1IFG&=~BIT3;//P1.0中断标志清除
}

