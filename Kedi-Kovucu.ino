                                                       // Proje Tarafından Yazılmıştır : MuratAlpTR // 

// Ultrasonik sensör kullanarak hayvanları uzaklaştırma

const int trigPin = 9; // Ultrasonik sensörün trig pini
const int echoPin = 10; // Ultrasonik sensörün echo pini
const int buzzerPin = 11; // Buzzer pini
const int catButtonPin = 3; // Kedi butonu pini

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(catButtonPin, INPUT_PULLUP); // Kedi butonunu içeri çekme direnci ile bağla
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);
  float distance = duration * 0.034 / 2;

  if (distance < 50) { // Eğer hayvan 50 cm'den daha yakınsa
    digitalWrite(buzzerPin, HIGH); // Buzzer'ı çal
    delay(1000); // 1 saniye beklet
    digitalWrite(buzzerPin, LOW); // Buzzer'ı kapat
  }

    // Kedi butonunu kontrol et
  if (digitalRead(catButtonPin) == LOW) {
    Serial.println("Kedi butonuna basıldı!");
    // Kedi kovucu işlemleri burada yapılabilir
  }

  Serial.print("Mesafe: ");
  Serial.print(distance);
  Serial.println(" cm");
  delay(500); // 0.5 saniye beklet
}

                                                       // Proje Tarafından Yazılmıştır : MuratAlpTR // 
