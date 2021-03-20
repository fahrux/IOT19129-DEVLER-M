#include <Joystick.h>
#include <Servo.h>
Joystick_ Joystick;
Servo servocan;
Servo servocan2;
#define PotDireksiyon1 A0
#define PotDireksiyon2 A1
int deger1;
int deger2;

void setup() {
 Joystick.begin(); 
 servocan.attach(12);
 servocan2.attach(13);

}

void loop() {
  
Joystick.setXAxis(analogRead(PotDireksiyon1));
Joystick.setYAxis(analogRead(PotDireksiyon2));

Joystick.sendState(); 

deger1 = analogRead(A0);
deger1 =map(deger1,0,1023,0,180);
servocan.write(deger1);

deger2 = analogRead(A1);
deger2 =map(deger2,0,1023,0,90);
servocan2.write(deger2);


}
