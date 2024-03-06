#include "StepMotor.h"
#include <Arduino.h>

StepMotor::StepMotor(int stepPin, int dirPin) : _stepPin(stepPin), _dirPin(dirPin) {
}

void StepMotor::initialize() {
    pinMode(_stepPin, OUTPUT);
    pinMode(_dirPin, OUTPUT);
    stop(); // Başlangıçta motoru durdur
}

void StepMotor::setSpeed(long whatSpeed) {
    _speed = whatSpeed;
    // Hız ayarı, adım motor sürücüsüne ve kullanılan mikrodenetleyiciye bağlı olarak farklılık gösterebilir
}

void StepMotor::step(int steps) {
    digitalWrite(_dirPin, steps > 0 ? HIGH : LOW); // Yön belirlenir
    for(int i = 0; i < abs(steps); i++) {
        digitalWrite(_stepPin, HIGH);
        delayMicroseconds(_speed);
        digitalWrite(_stepPin, LOW);
        delayMicroseconds(_speed);
    }
}

void StepMotor::stop() {
    // Adım motorlarını "durdurmak" için genellikle adım sinyallerinin gönderilmesi durdurulur.
    // Bu metod, motorun son adımda sabit kalmasını sağlar.
}
