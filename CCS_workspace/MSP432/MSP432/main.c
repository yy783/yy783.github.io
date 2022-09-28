/*------------------
P4.1-P4.2    PWM��� //  ����
P9.1-P9.2 //����ת���
--------------------*/
#include "msp432.h"
#include "car.c"
#include "gpio.h"
char flag=0;
uchar data=0;
int X_1,X_2;
int V_1,V_2;
int x1,x2,s1,s2;
int n=0;
int va=15,vr=0; //ת��
int time=10;
int go = 0;
#include "PID.h"
void PIDOUT_qian();
void PIDOUT_hou();
void PIDOUT_zuo();
void PIDOUT_you();
void display();
void UART_Init();
void Send_Byte(unsigned char);
void Print_Str(unsigned char*);
void Set_temp(float ,float ,float, float);
void PIDOUT_left();
void PIDOUT_right();

/*�жϳ�ʼ��*/
/*void Interrupt_init(void) //�ж�
{
 /*�ⲿ�ж�*/
  /*P1IE |= BIT0 + BIT1; /*+ BIT2 +BIT3; */ //��P1_1�ж�
 /* P1IES |= BIT0 + BIT1; /*+ BIT2 +BIT3;*/  //�½��ش���
 /* P1IFG &=~ BIT0 + BIT1; /*+ BIT2 +BIT3;*/ //�����־λ
  
  
/*  P2IE |= 0xff;  //��P2�ж�
  //P2DIR = 0x00;
  P2IES |= 0xff;   //�½��ش���
  P2IFG &=~ 0xff;  //�����־λ
}


/*�����ʼ��*/
/*void Sysclk_init()
{
  WDTCTL = WDTPW + WDTHOLD ; //
}

/*void Sysclk_init()
{
  WDTCTL = WDTPW + WDTHOLD ; //
  IE1 |= WDTIE;
  unsigned char i;
  BCSCTL1&=~XT2OFF;                 //��XT2����
  BCSCTL2|=SELM1+SELS;              //MCLKΪ8MHZ��SMCLKΪ8MHZ
  do{
    IFG1&=~OFIFG;                   //������������־
    for(i=0;i<100;i++)
       _NOP();
  }
  while((IFG1&OFIFG)!=0);           //�����־λ1�������ѭ���ȴ�
  IFG1&=~OFIFG;
  _EINT();
}*/



/*��ʱ����ʼ��*/
void Time_A()
{
  TA0CTL   |= TASSEL_2+MC_2+TAIE+TACLR+ ID_3;//SMCLK,�����������ж���������������
  TA0CCTL1 |= CAP+CM_1+CCIS_0+SCS+CCIE;//����ģʽ�������ز���CCI1A���룬ͬ�������ж�����
  TA0CCTL2 |= CAP+CM_1+CCIS_0+SCS+CCIE;//����ģʽ�������ز���CCI1A���룬ͬ�������ж�����

  TA1CCTL0 |= TA1CCTL0+ID_3+MC_1;     //4069HZ����
  TA1CCTL1 |= OUTMOD_7;
  TA1CCTL2 |= OUTMOD_7;
  /*TA1CCTL3 |= OUTMOD_7;
  TA1CCTL4 |= OUTMOD_7;
  TA1CCTL3 |= CAP+CM_1+CCIS_0+SCS+CCIE;//����ģʽ�������ز���CCI1B���룬ͬ�������ж�����
  TA1CCTL4 |= CAP+CM_1+CCIS_0+SCS+CCIE;*/ //����ģʽ�������ز���CCI1B���룬ͬ�������ж�����
  
  //P5DIR &= ~BIT0;
  
  TA0CCR0 = 1000;       //PWM��������
  TA0CCR1 = 0;
  TA0CCR2 = 0;
  /*TBCCR3 = 0;
  TBCCR4 = 0;*/
  P2DIR |= BIT1+BIT2/*+BIT3+BIT4*/;       //P2.1���
  P2SELC |= BIT1+BIT2/*+BIT3+BIT4*/;   //p2.2���
  P1DIR &=~ BIT2+BIT1;               //��ʼ������IO��
  P1SELC |= BIT2+BIT1;
  P2DIR &=~ BIT5+BIT6;
  P2SELC |= BIT5+BIT6;
}


void main(void)
{
  // Stop watchdog timer to prevent time out reset//�رտ��Ź�
  Sysclk_init();
  Tim_init(); //��ʱ��
  
  P2DIR |=0X1f;//31
  P2OUT=0xff;//255 P2���
  
  P4DIR |= BIT1 + BIT2 ;
  P4OUT |= BIT1 + BIT2;//����p4���
  Interrupt();//�ⲿ�ж� ��ʼ��
  /*LED_Init();//��ʼ��OLED  */
  
  IO_init();//�����ʼ��
  
  /*OLED_Clear();//��������
  //OLED_ShowCHinese(0,0,0);//��ʾ���� x y �ڼ�������
  OLED_ShowString(4,4,"speed:      ");//�ٶ�
  OLED_ShowString(4,6,"dista:      ");// */
 
  //�ȴ�go��������
  while(!go)
  {
    display();
    P9OUT |= BIT1;  //����P9.1��� ����ת��ǰ����
   }
  va = 150/time; //����ת��ת��
  
  while(1)
  {   
    display(); //��ʾ
    PID_calc();//PID���� 
    
    if((vr == 0) || (vr == 50/time) || ((vr == -50/time) || (vr == 150/time)))
    {
      PIDOUT_qian();
      Set_temp(va-vr,va-vr,va+vr,va+vr);
    }
    else if(vr == -150/time)
    {
      PIDOUT_zuo();
      Set_temp(va-vr,va-vr,3,6);
    }
    if(go == 0)
    {
      break;
    } //�Զ�����
  }
}


#define pragma vector=PORT1_VECTOR   //�ж�����1
__interrupt void Port1()
{
  if(P1IFG & BIT0) //����1
  {
    delayms(10);
    if(time<20)time++;
    va = 150/time;
  }
  if(P1IFG & BIT1)//����2
  {
    go = 1;
  }
  P1IFG = 0; //�����־λ
}
#define pragma vector=PORT2_VECTOR   //�ж�����2
__interrupt void Port2()
{
  if(P2IFG&BIT0 || P2IFG&BIT4)
  {
    vr = 150/time;
  }
  if(P2IFG&BIT1 || P2IFG&BIT5)
  {
    vr = 50/time;
  }
  if(P2IFG&BIT2 || P2IFG&BIT6)
  {
    vr = -50/time;
  }
  if(P2IFG&BIT3 || P2IFG&BIT7)
  {
    vr = -150/time;
  }
  
   if (((P2IN&BIT1==BIT1) && (P2IN&BIT2==BIT2)))
   {
      go = 0;
      Set_temp(0,0,0,0);
      
    //  delay_ms(600);
   }
//   if((P2IN&BIT0==BIT0) && (P2IN&BIT1==BIT1))
//   {
//      go = 0;
//      Set_temp(0,0,0,0);
//   }
  
  P2IFG = 0; //�����־λ7
}
#define pragma vector=TIMERA1_VECTOR  //Timer_A�����ж�����
interrupt void Timer_A(void)
{
  switch(TA1IV)
  { 
    case 2 : X_1+=0.4619989; break; 
    case 4 : X_2+=0.4619989; break;     
  }      
}

/*#define pragma vector=TIMERB1_VECTOR  //Timer_B�����ж�����
__interrupt void Timer_B(void)
{
  switch(TBIV)   
  {
   case 10 : X_3+=0.4619989; break;
   case 12 : X_4+=0.4619989; break;
  }
}*/
#define pragma vector=WDT_VECTOR  //���Ź���ʱ���ж�
__interrupt void WDT_1(void)
{
  P6OUT ^= BIT7; //����P6.7���
  x1=s1;
  s1=X_1;
  V_1=(X_1-x1)/2.50;//��λcm/s
  x2=s2;
  s2=X_2;
  V_2=(X_2-x2)/2.50;
  /*x3=s3;
  s3=X_3;
  V_3=(X_3-x3)/2.50;*/
}

void PIDOUT_qian()
{
    zheng_1((int)PID_OUT);//����ٶ�
    zheng_2((int)PID_OUT1);//����ٶ�
    /*zheng_3((int)PID_OUT2);//����ٶ�*/
}

void PIDOUT_zuo()
{
    zheng_1((int)PID_OUT);//����ٶ�
    zheng_2((int)PID_OUT1);//����ٶ�
    /*fan_3((int)PID_OUT2);//����ٶ� */
}

void Set_temp(float a,float b,float c, float d)
  {
    Set_Temp1= b;//Ԥ���ٶ�30cm/s  V_3
    Set_Temp2= c;//Ԥ���ٶ�30cm/s  V_2
    Set_Temp3= d;//Ԥ���ٶ�30cm/s  V_1
  }
/*
void display()
{
    OLED_ShowChar(0,0,(int) (P*1000)/1000+0x30);//1234/1000=1
    OLED_ShowChar(8,0,(int)(P*1000)%1000/100+0x30);//1234%1000/100=2
    OLED_ShowChar(16,0,(int)(P*1000)%1000%100/10+0x30);//1234%1000%100/10=3
    OLED_ShowChar(24,0,(int)(P*1000)%1000%100%10+0x30);//1234%1000%100/10=4
    
    OLED_ShowChar(34,0,(int)(I*1000)/1000+0x30);//1234/1000=1
    OLED_ShowChar(42,0,(int)(I*1000)%1000/100+0x30);//1234%1000/100=2
    OLED_ShowChar(50,0,(int)(I*1000)%1000%100/10+0x30);//1234%1000%100/10=3
    OLED_ShowChar(58,0,(int)(I*1000)%1000%100%10+0x30);//1234%1000%100/10=4
    
    OLED_ShowChar(68,0,(int)D/1000+0x30);//1234/1000=1
    OLED_ShowChar(74,0,(int)D%1000/100+0x30);//1234%1000/100=2
    OLED_ShowChar(82,0,(int)D%1000%100/10+0x30);//1234%1000%100/10=3
    OLED_ShowChar(90,0,(int)D%1000%100%10+0x30);//1234%1000%100/10=4
    
    OLED_ShowChar(106,0,(int)time/10+0x30);//1234%1000%100/10=3
    OLED_ShowChar(114,0,(int)time%10+0x30);//1234%1000%100/10=4
    
    OLED_ShowChar(95,6,(int) X_2/1000+0x30);//1234/1000=1
    OLED_ShowChar(103,6,(int)X_2%1000/100+0x30);//1234%1000/100=2
    OLED_ShowChar(111,6,(int)X_2%1000%100/10+0x30);//1234%1000%100/10=3
    OLED_ShowChar(119,6,(int)X_2%1000%100%10+0x30);//1234%1000%100/10=4
    OLED_ShowChar(61,6,(int) X_1/1000+0x30);//1234/1000=1
    OLED_ShowChar(69,6,(int)X_1%1000/100+0x30);//1234%1000/100=2
    OLED_ShowChar(77,6,(int)X_1%1000%100/10+0x30);//1234%1000%100/10=3
    OLED_ShowChar(85,6,(int)X_1%1000%100%10+0x30);//1234%1000%100/10=4
   /* OLED_ShowChar(43,2,(int)X_3/1000+0x30);//1234/1000=1
    OLED_ShowChar(51,2,(int)X_3%1000/100+0x30);//1234%1000/100=2
    OLED_ShowChar(59,2,(int)X_3%1000%100/10+0x30);//1234%1000%100/10=3
    OLED_ShowChar(67,2,(int)X_3%1000%100%10+0x30);//1234%1000%100/10=4
    OLED_ShowChar(95,2,(int)X_4/1000+0x30);//1234/1000=1
    OLED_ShowChar(103,2,(int)X_4%1000/100+0x30);//1234%1000/100=2
    OLED_ShowChar(111,2,(int)X_4%1000%100/10+0x30);//1234%1000%100/10=3
    OLED_ShowChar(119,2,(int)X_4%1000%100%10+0x30);//1234%1000%100/10=4*/
    /*OLED_ShowChar(57,4, (int)V_1/10+0x30);//1234/1000=1
    OLED_ShowChar(65,4,(int)V_1%10+0x30);//1234%1000/100=2
    OLED_ShowChar(75,4,(int)V_2/10+0x30);//1234%1000%100/10=3
    OLED_ShowChar(83,4,(int)V_2%10+0x30);//1234%1000%100/10=4
    OLED_ShowChar(93,4, (int)V_3/10+0x30);//1234/1000=1
    OLED_ShowChar(101,4,(int)V_3%10+0x30);//1234%1000/100=2
    OLED_ShowChar(111,4,(int)V_4/10+0x30);//1234%1000%100/10=3
    OLED_ShowChar(119,4,(int)V_4%10+0x30);//1234%1000%100/10=4
    OLED_ShowChar(103,2,(int)PID_OUT/100+0x30);//1234%1000/100=2
    OLED_ShowChar(111,2,(int)PID_OUT%100/10+0x30);//1234%1000%100/10=3
    OLED_ShowChar(119,2,(int)PID_OUT1%10+0x30);//1234%1000%100/10=4
    OLED_ShowChar(77,2,(int)PID_OUT1/100+0x30);//1234%1000/100=2
    OLED_ShowChar(85,2,(int)PID_OUT1%100/10+0x30);//1234%1000%100/10=3
    OLED_ShowChar(93,2,(int)PID_OUT1%10+0x30);//1234%1000%100/10=4
    
}
*/
