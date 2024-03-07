#include <Arduino.h>
#include <ACMotor.h>

// Motor pinleri
int acMotorRelayPin1 = 12; // ACMotor için röle pin 1
int acMotorRelayPin2 = 14; // ACMotor için röle pin 2


ACMotor acMotor(acMotorRelayPin1, acMotorRelayPin2);

void setup() {
  Serial.begin(115200);
  
  // Motorları başlat
  acMotor.initialize();

  Serial.println("Motorlar başlatıldı.");
}

void loop() {
  // AC Motor testi
  Serial.println("AC Motor ileri.");
  acMotor.forward();
  delay(2000); // 2 saniye bekleyin

  Serial.println("AC Motor durduruluyor.");
  acMotor.stop();
  delay(1000); // 1 saniye bekleyin

  Serial.println("AC Motor geri.");
  acMotor.reverse();
  delay(2000); // 2 saniye bekleyin

  Serial.println("AC Motor durduruluyor.");
  acMotor.stop();
  delay(2000); // 2 saniye bekleyin

  // Sonsuz döngüye girerek programın burada durmasını sağlayın
  while(true) {
    delay(1000);
  }
}

