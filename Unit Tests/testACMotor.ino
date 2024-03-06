#include <Arduino.h>
#include "ACMotor.h"

// ACMotor için pin tanımlamaları
const int phasePin = 5;
const int ncPin1 = 6;
const int ncPin2 = 7;

// ACMotor nesnesi oluştur
ACMotor myMotor(phasePin, ncPin1, ncPin2);

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
