#include <ServoMotor.h>

ServoMotor servoMotor(9); // Servo motorun PWM pinine bağlı olduğunu varsayalım

void setup() {
  servoMotor.initialize();
  servoMotor.setAngle(90); // Servo motorunu 90 derece açıya ayarlayın
}

void loop() {
  // Burada servo motorun açısını değiştirerek test edebilirsiniz
  servoMotor.setAngle(0); // 0 derece
  delay(1000);
  servoMotor.setAngle(180); // 180 derece
  delay(1000);
}
