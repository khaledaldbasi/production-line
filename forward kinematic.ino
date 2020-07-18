#include <Servo.h>
Servo servo1;
Servo servo2;

float X ,Y;
float L1=40 , L2=50;
float ang4=45 , ang5=90;
float sum=ang4+ang5;
float eqXside2 , eqYside2;

void setup() {
  servo1.attach(4);
  servo2.attach(5);
}
void loop(){
 X = L1*sin(ang4);
  eqXside2=L2*sin(sum);
  X=X+eqXside2;
 servo1.write(X);
  
Y=L1*cos(ang4);
eqYside2=L2*cos(sum);
Y=Y+eqYside2; 
  servo1.write(Y);
}
