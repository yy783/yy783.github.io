#include "msp430g2553.h"
#include "oledshow.h"
#define uchar unsigned char
#define uint unsigned int
//#define lcd_dir P1DIR
//#define lcd_out P1OUT
//#define RS_1 P2OUT|=BIT0//RS=1,接P2.0口
//#define RS_0 P2OUT&=~BIT0//RS=0
//#define RW_1 P2OUT|=BIT1//RW=1,接P2.1口 只用显示功能可以一直接地
//#define RW_0 P2OUT&=~BIT1//RW=0
//#define E_1 P2OUT|=BIT2//E=1,接P2.2口
//#define E_0 P2OUT&=~BIT2//E=0
//#define OUT P2DIR|=BIT0+BIT1+BIT2//P2.0,P2.1,P2.2输出

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
                     写指令
*****************************************************/
//void WriteInstrustion(uchar dictate)
//{
//  delay_nus(16);
//  OUT;//P2.0和P2.1和P2.2   定义为输出
//  lcd_dir=0xff;//P1.7至P1.0  定义为输出
//  __delay_cycles(50);
//
//  P1SEL=0x00;
//
//  E_0;//E=0,接P2.2口
//  RS_0;//RS=0,接P2.0口
//  RW_0;//RW=0,接P2.1口
//
//  E_1;//E=1,接P2.2口
//  lcd_out&=0x0f;//
//  lcd_out|=dictate&0xf0;//P1.7至P1.0,输出dictate(指令)
//
//  delay_nus(16);
//  E_0;//E=0,接P2.2口
//  dictate=dictate<<4;
//  E_1;//E=1,接P2.2口
//  lcd_out&=0x0f;//
//  lcd_out|=dictate&0xf0;//P1.7至P1.0,输出dictate(指令)
//  E_0;//E=0,接P2.2口
//
//}


/*****************************************************
                     写地址
*****************************************************/
//void WriteAddress(uchar x)
//{
//  WriteInstrustion(x|0x80);//x的最高位置1，低7位传递x原值；
//                           //1000 0000;所得的值为写指令，
//                   //将从P1.7至P1.0,输出  dictate（x|0x80）
//}

/*****************************************************
                     写数据
*****************************************************/
//void WriteData(uchar y)
//{
//  delay_nus(16);
//  P1SEL=0x00;
//
//  OUT;//P2.0和P2.1和P2.2   定义为输出
//  lcd_dir=0xff;//P1.7至P1.0  定义为输出
//  __delay_cycles(50);
//
//  RS_1;//RS=1,接P2.0口
//  E_0;//E=0,接P2.2口
//  RW_0;////RW=0,接P2.1口
//
//  E_1;//E=1,接P2.2口
//  lcd_out&=0x0f;//P1.7至P1.0,输出y(数据)
//  lcd_out|=y&0xf0;//
//
//  delay_nus(16);
//  E_0;//E=0,接P2.2口
//
//  y=y<<4;
//  E_1;//E=1,接P2.2口
//  lcd_out&=0x0f;//P1.7至P1.0,输出y(数据)
//  lcd_out|=y&0xf0;//
//  E_0;//E=0,接P2.2口
//
//
//}

/*****************************************************
                     整数部分显示
*****************************************************/

void zheng(long int x)
{
  int qian=x/1000;/*分解出bai位*/
  int bai=x%1000/100;/*分解出bai位*/
  int shi=x%100/10;/*分解出shi位*/
  int ge=x%10;/*分解出shi位*/

  OLED_ShowChar(0,1,(qian)+0x30,8);
  OLED_ShowChar(6,1,(bai)+0x30,8);
  OLED_ShowChar(12,1,(shi)+0x30,8);
  OLED_ShowChar(18,1,(ge)+0x30,8);

}

/*************************************************
                 小数部分显示
*************************************************/
void xiao(int x)
{

int shi=0,ge=0;
shi=x/10;
ge=x%10;
OLED_ShowChar(24,1,'.',8);
OLED_ShowChar(30,1,(shi)+0x30,8);
OLED_ShowChar(36,1,(ge)+0x30,8);

}

/*****************************************************
                     显示函数
*****************************************************/
void result(double temp)
{

  long int i=0,j=0;
  i=(long int)temp;//取出13.5678的前两位--1
  j=(int)((temp-i)*100);//取出两位小数0.56，将其变成56
  OLED_ShowString(0,0,"Distance:",8);
  zheng(i);//将13转换成char型，并赋给字符数组Table_1
  xiao(j);
  OLED_ShowString(42,1,"cm",8);
}



/*****************************************************
                     主函数
*****************************************************/
int main( void )
{ 

  WDTCTL = WDTPW + WDTHOLD;
  OLED_Init();
  OLED_Clear();
  
while(1)
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

     result(distance);//显示距离
     if(distance >=20)
     {
         /*变速写这里*/
         P1DIR |= BIT6;
         P1OUT |= BIT6;

     }

    
    delay_nus(10);
    
  }
  
}

#pragma vector=PORT1_VECTOR
__interrupt void Port_1(void)
{
 
//  
  TACTL&=~MC_2;//停止
  times=TAR;  
  succeed_flag=1;//置成功测量的标志
  OLED_ShowString(0,7,"I",8);
  P1IE&=~BIT3;//关闭外部中断
  P1IFG&=~BIT3;//P1.0中断标志清除
}

