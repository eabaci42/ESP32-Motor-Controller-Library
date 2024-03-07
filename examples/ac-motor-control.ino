#include <ACMotor.h>

ACMotor acMotor(2, 3); // AC Motor için röle kontrol pinlerini varsayalım

void setup() {
  acMotor.initialize();
}

void loop() {
  acMotor.forward(); // Motoru ileri yönde çalıştır
  delay(3000);
  acMotor.stop(); // Motoru durdur
  delay(1000);
  acMotor.reverse(); // Motoru ters yönde çalıştır
  delay(3000);
  acMotor.stop(); // Motoru durdur
  delay(1000);
}
