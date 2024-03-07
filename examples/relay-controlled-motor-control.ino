#include <RelayControlledMotor.h>

RelayControlledMotor relayMotor(8, 9); // Röle kontrollü motor için röle pinleri

void setup() {
  relayMotor.initialize();
}

void loop() {
  relayMotor.forward(); // Motoru ileri yönde çalıştır
  delay(3000);
  relayMotor.stop(); // Motoru durdur
  delay(1000);
  relayMotor.reverse(); // Motoru ters yönde çalıştır
  delay(3000);
  relayMotor.stop(); // Motoru durdur
  delay(1000);
}
