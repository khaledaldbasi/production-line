#include <Servo.h>
Servo servo_4;
const int TrigPin = 5;
const int EchoPin = 6;
long duration, height; 
void setup()
{ 
  Serial.begin(9600);
  pinMode(4, OUTPUT);
  pinMode(TrigPin, OUTPUT);
  pinMode(EchoPin, INPUT);
  servo_4.attach(4);  
}

void loop()
{
  digitalWrite(TrigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(TrigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin, LOW);  
  duration = pulseIn(EchoPin, HIGH);
  height= (duration/2)/29.1;
 
  if ( height <= 20 && height >= 0 )
  {
  servo_4.write(30);
  }
  else if( height <= 30 && height > 20 )
  {
  servo_4.write(90);
  }
  else if ( height <= 40 && height > 30 )
  {
  servo_4.write(150);
  }
  else 
  {
  servo_4.write(0);
  }
  
}