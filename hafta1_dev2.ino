#define yesil 2
#define sari1 3
#define kirmizi 4

void setup() {
  pinMode(yesil, OUTPUT);
  pinMode(sari1, OUTPUT);
  pinMode(kirmizi, OUTPUT);

}

void loop() {
  digitalWrite(kirmizi, HIGH);
  delay(10000);
  digitalWrite(sari1, HIGH);
  delay(2000);
  digitalWrite(kirmizi, LOW); 
  digitalWrite(sari1, LOW);
  digitalWrite(yesil, HIGH);
  delay(5000);
  digitalWrite(yesil, LOW);
  

}
