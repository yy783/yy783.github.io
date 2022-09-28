int BIT
#define wheel_PWM1  TA0CCR1
#define wheel_PWM2  TA0CCR2  //驱动

#define wheel_zheng1 P9OUT&=~BIT1
#define wheel_zheng2 P9OUT&=~BIT2  //低电平输入，正向旋转

#define wheel_fan1 P9OUT|=BIT1
#define wheel_fan2 P9OUT|=BIT2  //高电平输入，反向旋转
/********************************************************************/
//延时函数，IAR自带，经常使用到
#define CPU_F ((double)8000000)  CPU_F ((double)32768) //外部高频晶振8MHZ
#define delay_us(x) __delay_cycles((long)(CPU_F*(double)x/1000000.0)) 
#define delay_ms(x) __delay_cycles((long)(CPU_F*(double)x/1000.0)) 
//串口波特率计算，当BRCLK=CPU_F时用下面的公式可以计算，否则要根据设置加入分频系数
#define baud           9600                                //设置波特率的大小
#define baud_setting   (uint)((ulong)CPU_F/((ulong)baud))  //波特率计算公式
#define baud_h         (uchar)(baud_setting>>8)            //提取高位
#define baud_l         (uchar)(baud_setting)               //低位
//自定义数据结构，方便使用
#define uchar unsigned char
#define uint unsigned int
#define ulong unsigned long
void IO_init(void)  //IO口初始化
{
  P9DIR = 0Xff; //P9.0 做反转控制  255hz
  P9OUT = 0x00; //P9.1 做正转控制  0hz
}

void zheng_1(int v)//正转速度0-100
{
  wheel_zheng1;
  TBCCR1=10*v;
}
void zheng_2(int v)
{
  wheel_zheng2;
  TBCCR2=10*v;
}



void fan_1(int v)//反转速度0-100
{
  wheel_fan1;
  TBCCR1=1000-10*v;
}
void fan_2(int v)
{
  wheel_fan2;
  TBCCR2=1000-10*v;
}


void qian()
{
  zheng_1(90);
  zheng_2(95);
}
void hou()
{
  fan_1(100);
  fan_2(100);
}
void you()
{
  zheng_1(100);
  zheng_2(100);
}
void zuo()
{
  zheng_1(100);
  zheng_2(100);
}
void stop()
{
  wheel_zheng1;TBCCR1=0; //停止时为0Hz
  wheel_zheng2;TBCCR2=0;
}

