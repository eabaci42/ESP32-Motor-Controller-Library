#include <Arduino.h>
#include "ACMotor.h"

// İlk motorun röle pinleri
int acMotor1RelayPin1 = 17; // ACMotor1 için röle pin 1
int acMotor1RelayPin2 = 5;  // ACMotor1 için röle pin 2

// İkinci motorun röle pinleri
int acMotor2RelayPin1 = 18; // ACMotor2 için röle pin 1
int acMotor2RelayPin2 = 19; // ACMotor2 için röle pin 2

// ACMotor nesneleri
ACMotor acMotor1(acMotor1RelayPin1, acMotor1RelayPin2);
ACMotor acMotor2(acMotor2RelayPin1, acMotor2RelayPin2);

void setup() {
  Serial.begin(115200);
  
  // Motorları başlat
  acMotor1.initialize();
  acMotor2.initialize();

  Serial.println("Motorlar başlatıldı.");
  delay(2000); // 2 saniye bekleyin
}

void loop() {
  // AC Motor 1 testi
  Serial.println("AC Motor 1 ileri.");
  acMotor1.forward();
  delay(2000); // 2 saniye bekleyin

  Serial.println("AC Motor 1 durduruluyor.");
  acMotor1.stop();
  delay(500); // 0.5 saniye bekleyin

  // AC Motor 2 testi
  Serial.println("AC Motor 2 ileri.");
  acMotor2.forward();
  delay(2000); // 2 saniye bekleyin

  Serial.println("AC Motor 2 durduruluyor.");
  acMotor2.stop();
  delay(500); // 0.5 saniye bekleyin

  Serial.println("AC Motor 1 geri.");
  acMotor1.reverse();
  delay(2000); // 2 saniye bekleyin

  Serial.println("AC Motor 1 durduruluyor.");
  acMotor1.stop();
  delay(500); // 2 saniye bekleyin

  Serial.println("AC Motor 2 geri.");
  acMotor2.reverse();
  delay(2000); // 2 saniye bekleyin

  Serial.println("AC Motor 2 durduruluyor.");
  acMotor2.stop();
  delay(500); // 2 saniye bekleyin
}

