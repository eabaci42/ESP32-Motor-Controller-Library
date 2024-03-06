#include "ServoMotor.h"
#include <Arduino.h>
#include <Servo.h>

Servo myServo; // Servo sınıfından bir nesne oluşturur

ServoMotor::ServoMotor(int pwmPin) : _pwmPin(pwmPin) {
}

void ServoMotor::initialize() {
    myServo.attach(_pwmPin); // PWM pinini servo motorla ilişkilendirir
}

void ServoMotor::setAngle(int angle) {
    _angle = angle;
    myServo.write(_angle); // Servo motorun açısını ayarlar
}

void ServoMotor::stop() {
    // Servo motorları durdurmak için genellikle bir komut yoktur.
    // Bu yüzden motoru son ayarlanan açıda bırakabilir veya isteğe bağlı olarak belirli bir "dinlenme" açısına ayarlayabilirsiniz.
}
