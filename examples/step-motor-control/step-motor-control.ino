#include <StepMotor.h>

StepMotor stepMotor(8, 9); // Adım motoru için step ve direction pinlerini varsayalım

void setup() {
  stepMotor.initialize();
  stepMotor.setSpeed(500); // RPM cinsinden hızı ayarlayın
}

void loop() {
  stepMotor.step(200); // 200 adım ileri
  delay(1000);
  stepMotor.step(-200); // 200 adım geri
  delay(1000);
}
    