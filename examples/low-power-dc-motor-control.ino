#include <LowPowerDCMotor.h>

LowPowerDCMotor lpDcMotor(5, 6, 7); // PWM ve iki yön pinleri ile düşük güçlü DC Motor

void setup() {
  lpDcMotor.initialize();
  lpDcMotor.setSpeed(128); // Hızı yarıya ayarla (0-255 arası)
}

void loop() {
  lpDcMotor.forward(); // Motoru ileri yönde çalıştır
  delay(2000);
  lpDcMotor.stop(); // Motoru durdur
  delay(1000);
  lpDcMotor.reverse(); // Motoru ters yönde çalıştır
  delay(2000);
  lpDcMotor.stop(); // Motoru durdur
  delay(1000);
}
