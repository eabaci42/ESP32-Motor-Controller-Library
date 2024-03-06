#include "DCMotor.h"
#include <Arduino.h>

DCMotor::DCMotor(int relayPin1, int relayPin2)
: _relayPin1(relayPin1), _relayPin2(relayPin2) {
    pinMode(_relayPin1, OUTPUT);
    pinMode(_relayPin2, OUTPUT);
    stop(); // Başlangıçta motoru durdur
}

void DCMotor::initialize() {
    // Bu sınıf için ekstra başlangıç yapılandırması gerekmez
}

void DCMotor::forward() {
    digitalWrite(_relayPin1, HIGH); // 1. röleyi aktif et, motor ileri yönde döner
    digitalWrite(_relayPin2, LOW);  // 2. röleyi pasif tut
}

void DCMotor::reverse() {
    digitalWrite(_relayPin1, LOW);  // 1. röleyi pasif tut
    digitalWrite(_relayPin2, HIGH); // 2. röleyi aktif et, motor ters yönde döner
}

void DCMotor::stop() {
    // Her iki röleyi de pasif duruma getirerek motoru durdur
    digitalWrite(_relayPin1, LOW);
    digitalWrite(_relayPin2, LOW);
}
