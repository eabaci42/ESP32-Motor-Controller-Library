#include "ServoMotor.h"
#include <Arduino.h>

ServoMotor::ServoMotor(int pwmPin) : _pwmPin(pwmPin), _angle(0) {
  // PWM kanalını, frekansı ve çözünürlüğü başlatma kodu burada olacak
}

void ServoMotor::initialize() {
  ledcSetup(ledChannel, freq, resolution); // PWM kanalını yapılandır
  ledcAttachPin(_pwmPin, ledChannel); // PWM kanalını servo pinine bağla
}

void ServoMotor::setAngle(int angle) {
  _angle = angle;
  // Açıyı mikrosaniyeye dönüştür ve PWM sinyalini yaz
  int duty = map(_angle, 0, 180, minPulseWidth, maxPulseWidth);
  writeMicroseconds(duty);
}

void ServoMotor::stop() {
  // Servo motorları için genellikle bir "stop" komutu yoktur
}

void ServoMotor::writeMicroseconds(int value) {
  // value'yu PWM sinyali olarak yazmak için ledcWrite kullan
  int duty = map(value, minPulseWidth, maxPulseWidth, 0, pow(2, resolution) - 1);
  ledcWrite(ledChannel, duty);
}
/*
void ServoMotor::forward() {
    // Bu metod ServoMotor için uygulanmaz
}

void ServoMotor::reverse() {
    // Bu metod ServoMotor için uygulanmaz
}*/