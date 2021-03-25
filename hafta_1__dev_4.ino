
#define uyariledi 13
#define pot  A0
#define motor 3



void setup()
{
  Serial.begin(9600);
  pinMode(uyariledi, OUTPUT);
  pinMode(motor, OUTPUT);
  
}

void loop()
{
  int okunandeger= analogRead(pot);
  okunandeger= map(okunandeger,0,1023,0,255);
  
  if (okunandeger>180){
    digitalWrite(13, HIGH);
    Serial.print("HIZINIZ: ");
    Serial.println(okunandeger);
    Serial.println("Lutfen yavaslayiniz!");
    delay(2000);}
   
  else 
  { digitalWrite(13, LOW);
    Serial.print("HIZINIZ: ");
    Serial.println(okunandeger);
    Serial.println("Hiziniz guvenli seviyede, iyi yolculuklar dileriz.");
    delay(2000);
  
  }
  
  
}
