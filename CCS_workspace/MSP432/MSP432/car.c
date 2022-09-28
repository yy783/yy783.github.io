int BIT
#define wheel_PWM1  TA0CCR1
#define wheel_PWM2  TA0CCR2  //����

#define wheel_zheng1 P9OUT&=~BIT1
#define wheel_zheng2 P9OUT&=~BIT2  //�͵�ƽ���룬������ת

#define wheel_fan1 P9OUT|=BIT1
#define wheel_fan2 P9OUT|=BIT2  //�ߵ�ƽ���룬������ת
/********************************************************************/
//��ʱ������IAR�Դ�������ʹ�õ�
#define CPU_F ((double)8000000)  CPU_F ((double)32768) //�ⲿ��Ƶ����8MHZ
#define delay_us(x) __delay_cycles((long)(CPU_F*(double)x/1000000.0)) 
#define delay_ms(x) __delay_cycles((long)(CPU_F*(double)x/1000.0)) 
//���ڲ����ʼ��㣬��BRCLK=CPU_Fʱ������Ĺ�ʽ���Լ��㣬����Ҫ�������ü����Ƶϵ��
#define baud           9600                                //���ò����ʵĴ�С
#define baud_setting   (uint)((ulong)CPU_F/((ulong)baud))  //�����ʼ��㹫ʽ
#define baud_h         (uchar)(baud_setting>>8)            //��ȡ��λ
#define baud_l         (uchar)(baud_setting)               //��λ
//�Զ������ݽṹ������ʹ��
#define uchar unsigned char
#define uint unsigned int
#define ulong unsigned long
void IO_init(void)  //IO�ڳ�ʼ��
{
  P9DIR = 0Xff; //P9.0 ����ת����  255hz
  P9OUT = 0x00; //P9.1 ����ת����  0hz
}

void zheng_1(int v)//��ת�ٶ�0-100
{
  wheel_zheng1;
  TBCCR1=10*v;
}
void zheng_2(int v)
{
  wheel_zheng2;
  TBCCR2=10*v;
}



void fan_1(int v)//��ת�ٶ�0-100
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
  wheel_zheng1;TBCCR1=0; //ֹͣʱΪ0Hz
  wheel_zheng2;TBCCR2=0;
}

