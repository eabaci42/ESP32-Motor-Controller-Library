#include <Arduino.h>
#include "DCMotor.h"

// DCMotor için pin tanımlamaları
const int pwmPin = 5;
const int forwardPin = 6;
const int reversePin = 7;

// DCMotor nesnesi oluştur
DCMotor myMotor(pwmPin, forwardPin, reversePin);

void setup() {
  Serial.begin(9600);
  
  // Motoru başlat
  myMotor.initialize();
}

void loop() {
  // İleri yönde döndür
  Serial.println("Motor ileri döndürülüyor...");
  myMotor.forward();
  delay(2000); // 2 saniye beklet

  // Motoru durdur
  Serial.println("Motor durduruluyor...");
  myMotor.stop();
  delay(1000); // 1 saniye beklet

  // Ters yönde döndür
  Serial.println("Motor ters yönde döndürülüyor...");
  myMotor.reverse();
  delay(2000); // 2 saniye beklet

  // Motoru durdur
  Serial.println("Motor durduruluyor...");
  myMotor.stop();
  delay(3000); // Testler arası 3 saniye beklet
}
