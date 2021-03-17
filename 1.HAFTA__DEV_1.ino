#define yesil 2
#define sari1 3
#define kirmizi 4
#define beyaz 5
#define sari2 6



void setup() {
  pinMode(yesil, OUTPUT);
  pinMode(sari1, OUTPUT);
  pinMode(kirmizi, OUTPUT);
  pinMode(beyaz, OUTPUT);
  pinMode(sari2, OUTPUT);

}

void loop() {
  digitalWrite(yesil, HIGH);
  delay(500);
  digitalWrite(sari1, HIGH);
  delay(500);
  digitalWrite(kirmizi, HIGH);
  delay(500);
  digitalWrite(beyaz, HIGH);
  delay(500);
  digitalWrite(sari2, HIGH);
  delay(500);
  digitalWrite(sari2, LOW);
  delay(500);
  digitalWrite(beyaz, LOW);
  delay(500);
  digitalWrite(kirmizi, LOW);
  delay(500);
  digitalWrite(sari1, LOW);
  delay(500);
  digitalWrite(yesil, LOW);
  delay(500);

}
