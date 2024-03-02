// Kedi ve Köpek Kovucu butonun bağlı olduğu pin
const int kopekButtonPin = 2;
const int kediButtonPin = 3;

void setup() {
  pinMode(kopekButtonPin, INPUT);
  pinMode(kediButtonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int kopekDurum = digitalRead(kopekButtonPin);
  int kediDurum = digitalRead(kediButtonPin);

  if (kopekDurum == HIGH) {
    Serial.println("Köpek kovucu butona basıldı!");
    // Köpekleri uzaklaştırmak için yapılacak işlemleri burada ekleyebilirsiniz.
  }

  if (kediDurum == HIGH) {
    Serial.println("Kedi kovucu butona basıldı!");
    // Kedileri uzaklaştırmak için yapılacak işlemleri burada ekleyebilirsiniz.
  }

  delay(200); // Buton okuma hızını ayarlamak için
}
