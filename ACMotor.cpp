#include "ACMotor.h"
#include <Arduino.h>

ACMotor::ACMotor(int relayPin1, int relayPin2)
: _relayPin1(relayPin1), _relayPin2(relayPin2) {
    pinMode(_relayPin1, OUTPUT);
    pinMode(_relayPin2, OUTPUT);
    stop(); // Başlangıçta motoru durdur
}

void ACMotor::initialize() {
    // Bu sınıf için ekstra başlangıç yapılandırması gerekmez
}

void ACMotor::forward() {
    digitalWrite(_relayPin1, HIGH); // 1. röleyi aktif et, motor bir yönde döner (örn. saat yönünde)
    digitalWrite(_relayPin2, LOW);  // 2. röleyi pasif tut
}

void ACMotor::reverse() {
    digitalWrite(_relayPin1, LOW);  // 1. röleyi pasif tut
    digitalWrite(_relayPin2, HIGH); // 2. röleyi aktif et, motor diğer yönde döner (örn. saat yönünün tersinde)
}

void ACMotor::stop() {
    // Her iki röleyi de pasif duruma getirerek motoru durdur
    digitalWrite(_relayPin1, LOW);
    digitalWrite(_relayPin2, LOW);
}
