#include <DCMotor.h>

DCMotor dcMotor(5, 6); // DC Motor için kontrol pinlerini varsayalım

void setup() {
  dcMotor.initialize();
}

void loop() {
  dcMotor.forward(); // Motoru ileri yönde çalıştır
  delay(2000);
  dcMotor.stop(); // Motoru durdur
  delay(1000);
  dcMotor.reverse(); // Motoru ters yönde çalıştır
  delay(2000);
  dcMotor.stop(); // Motoru durdur
  delay(1000);
}
