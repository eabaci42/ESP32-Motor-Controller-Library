#include "LowPowerDCMotor.h"
#include <Arduino.h>

LowPowerDCMotor::LowPowerDCMotor(int pwmPin, int directionPin1, int directionPin2)
: _pwmPin(pwmPin), _directionPin1(directionPin1), _directionPin2(directionPin2), _speed(0) {
    // Pin modlarını ayarla
    pinMode(_pwmPin, OUTPUT);
    pinMode(_directionPin1, OUTPUT);
    pinMode(_directionPin2, OUTPUT);
    
    // Motoru başlangıçta durdur
    stop();
}

void LowPowerDCMotor::initialize() {
    // Bu örnekte initialize fonksiyonu, constructor içinde zaten yapılandırıldığı için boş
}

void LowPowerDCMotor::forward() {
    digitalWrite(_directionPin1, HIGH);
    digitalWrite(_directionPin2, LOW);
    ledcAttachPin(_pwmPin, 0); // 0. kanalı PWM pinine bağla
    ledcSetup(0, 5000, 8); // 0. kanal için 5 kHz frekans ve 8-bit çözünürlük
    ledcWrite(0, _speed); // PWM sinyali ile hızı ayarla
}

void LowPowerDCMotor::reverse() {
    digitalWrite(_directionPin1, LOW);
    digitalWrite(_directionPin2, HIGH);
    ledcAttachPin(_pwmPin, 0); // 0. kanalı PWM pinine bağla
    ledcSetup(0, 5000, 8); // 0. kanal için 5 kHz frekans ve 8-bit çözünürlük
    ledcWrite(0, _speed); // PWM sinyali ile hızı ayarla
}

void LowPowerDCMotor::stop() {
    digitalWrite(_directionPin1, LOW);
    digitalWrite(_directionPin2, LOW);
    ledcWrite(0, 0); // PWM sinyalini keserek motoru durdur
}

void LowPowerDCMotor::setSpeed(int speed) {
    if (speed < 0) speed = 0;
    if (speed > 255) speed = 255;
    _speed = speed;
    // Hız değişikliği sonrası güncel hızı uygula
    ledcWrite(0, _speed);
}
