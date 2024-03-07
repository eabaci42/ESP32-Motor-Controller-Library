#include <Arduino.h>
#include "ServoMotor.h"

ServoMotor servoMotor1(12); // 12 numaralı pin için ServoMotor nesnesi oluştur
ServoMotor servoMotor2(14); // 14 numaralı pin için ServoMotor nesnesi oluştur

void setup() {
  Serial.begin(115200); // Seri haberleşme başlat
  servoMotor1.initialize(); // Servo motoru başlat
  servoMotor2.initialize(); // Servo motoru başlat
  delay(1000); // Donanımın başlamasını bekleyin
}

void loop() {
  // Servo motoru farklı açılara ayarlayın ve sonuçları gözlemleyin
  for(int angle = 0; angle <= 180; angle += 30) { // 0'dan 180 dereceye kadar 30 derece adımlarla
    Serial.print("Motor 1'i ");
    Serial.print(angle);
    Serial.println(" dereceye ayarla.");
    servoMotor1.setAngle(angle); // Motoru belirli bir açıya ayarla
    Serial.print("Motor 2'yi ");
    Serial.print(angle);
    Serial.println(" dereceye ayarla.");
    servoMotor2.setAngle(angle); // Motoru belirli bir açıya ayarla
    delay(1000); // Hareketi gözlemleme süresi
  }

  Serial.println("Motor 1'i durdur.");
  servoMotor1.stop(); // Motoru durdur
  Serial.println("Motor 2'yi durdur.");
  servoMotor2.stop(); // Motoru durdur
  delay(2000); // Test sonunda 2 saniye bekle

  // Testi durdurmak için sonsuz döngüye gir
  while(true) {
    Serial.println("Motorlar durduruldu. Tekrar başlatmak için reset atınız.");
    delay(1000);
  }
}

