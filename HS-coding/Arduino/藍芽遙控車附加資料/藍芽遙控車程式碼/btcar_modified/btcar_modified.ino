#include <SoftwareSerial.h>
SoftwareSerial mySerial(13,12); // RX, TX
const int negR=5; //5,6,9,10為UNO PWM腳位
const int posR=6;
const int negL=9;
const int posL=10;

//設定速度
const int Rspeed=200;
const int Lspeed=200;


char val;
void setup()
{
  pinMode(posR,OUTPUT);
  pinMode(negR,OUTPUT);
  pinMode(posL,OUTPUT);
  pinMode(negL,OUTPUT);   
  mySerial.begin(9600);  //hc-05淘寶版本預設為9600bps
  Serial.begin(9600);
}
void loop() 
{
  if(mySerial.available())
  {
    val=mySerial.read();
  //  val=val-'0';    //char轉換為int  
    Serial.println(val);
    if(val=='0')  
       pause(0,0); 
    else if(val=='1')
       forward(Rspeed,Lspeed); 
    else if(val=='2')
       back(Rspeed,Lspeed);
    else if(val=='3')
       right(Rspeed,Lspeed);
    else if(val=='4')
       left(Rspeed,Lspeed); 
  } 
}       

void forward(byte RmotorSpeed, byte LmotorSpeed)
{

    analogWrite(posR,0);
    analogWrite(negR,RmotorSpeed);         
    analogWrite(posL,0);
    analogWrite(negL,LmotorSpeed);   

}  
void back(byte RmotorSpeed, byte LmotorSpeed)
{
    
    analogWrite(posR,RmotorSpeed);
    analogWrite(negR,0);         
    analogWrite(posL,LmotorSpeed);
    analogWrite(negL,0);   
} 
void pause(byte RmotorSpeed, byte LmotorSpeed)
{
    analogWrite(posR,0);
    analogWrite(negR,0);         
    analogWrite(posL,0);
    analogWrite(negL,0);   
} 
void right(byte RmotorSpeed, byte LmotorSpeed)
{
    analogWrite(posR,0);
    analogWrite(negR,0);         
    analogWrite(posL,0);
    analogWrite(negL,LmotorSpeed);   
} 
void left(byte RmotorSpeed, byte LmotorSpeed)
{
    analogWrite(posR,0);
    analogWrite(negR,RmotorSpeed);         
    analogWrite(posL,0);
    analogWrite(negL,0);  
} 

 

