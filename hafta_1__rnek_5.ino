#include<Servo.h>
Servo canimservom;

void setup()
{
  canimservom.attach(6);
}

void loop()
{
  for (int basl=0; basl <= 180; basl = basl + 15)
  {  
    canimservom.write(basl);
    delay(500);
  
  } 
  for (int basl=180; basl >= 0; basl = basl - 30)
  {  
    canimservom.write(basl);
    delay(500);
  
  }  
}
