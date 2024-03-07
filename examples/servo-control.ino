#include <Arduino.h>
#include "ServoMotor.h"

ServoMotor servoMotor(12); // 12 numaralı pin için ServoMotor nesnesi oluştur

void setup() {
  Serial.begin(115200); // Seri haberleşme başlat
  servoMotor.initialize(); // Servo motoru başlat
  delay(1000); // Donanımın başlamasını bekleyin
}

void loop() {
  // Servo motoru farklı açılara ayarlayın ve sonuçları gözlemleyin
  for(int angle = 0; angle <= 180; angle += 30) { // 0'dan 180 dereceye kadar 30 derece adımlarla
    Serial.print("Motoru ");
    Serial.print(angle);
    Serial.println(" dereceye ayarla.");
    servoMotor.setAngle(angle); // Motoru belirli bir açıya ayarla
    delay(1000); // Hareketi gözlemleme süresi
  }

  Serial.println("Motoru durdur.");
  servoMotor.stop(); // Motoru durdur
  delay(2000); // Test sonunda 2 saniye bekle

  // Testi durdurmak için sonsuz döngüye gir
  while(true) {
    Serial.println("Motor durduruldu. Tekrar başlatmak için reset atınız.");
    delay(1000);
  }
}

