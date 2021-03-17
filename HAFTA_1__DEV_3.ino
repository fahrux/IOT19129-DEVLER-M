
#include <dht.h> 

dht DHT; 

#define DHT11_PIN 7 


void setup() {
  Serial.begin(9600); 
 
  }

void loop() {
  int okunandeger =DHT.read11(DHT11_PIN);
  
  Serial.print("Sıcaklık:");
  Serial.print(DHT.temperature);
  Serial.println("°C");

  Serial.print("Nem:");
  Serial.println(DHT.humidity);
  

  Serial.print("Sıcaklık:");
  int t =  DHT.temperature ;
  Serial.print((t * 1.8 + 32));
  Serial.println("°F");

  Serial.print("Nem:");
  Serial.println(DHT.humidity);
  

  Serial.print("Sıcaklık:");
  Serial.print((t + 273.15));
  Serial.println("K");

  Serial.print("Nem:");
  Serial.println(DHT.humidity);
  delay(3000);

  
}
