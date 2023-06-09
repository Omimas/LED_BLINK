// LED pinini tanımla
const int ledPin = 13;

void setup() {
  // LED pinini çıkış olarak ayarla
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // LED'i yak
  digitalWrite(ledPin, HIGH);
  // 1 saniye bekle
  delay(1000);
  // LED'i söndür
  digitalWrite(ledPin, LOW);
  // 1 saniye bekle
  delay(1000);
}
