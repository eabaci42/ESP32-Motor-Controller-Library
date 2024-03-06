#include "RelayControlledMotor.h"
#include <Arduino.h>

RelayControlledMotor::RelayControlledMotor(int relayPin1, int relayPin2)
: _relayPin1(relayPin1), _relayPin2(relayPin2) {
    pinMode(_relayPin1, OUTPUT);
    pinMode(_relayPin2, OUTPUT);
    stop(); // Başlangıç durumunda motoru durdur
}

void RelayControlledMotor::initialize() {
    // Bu örnekte ekstra başlangıç yapılandırması gerekmez
}

void RelayControlledMotor::forward() {
    setRelayState(HIGH, LOW); // 1. röle açık, 2. röle kapalı -> Saat yönünde
}

void RelayControlledMotor::reverse() {
    setRelayState(LOW, HIGH); // 1. röle kapalı, 2. röle açık -> Saat yönünün tersi
}

void RelayControlledMotor::stop() {
    setRelayState(LOW, LOW); // Her iki röle de kapalı -> Motor durur
}

void RelayControlledMotor::setRelayState(bool state1, bool state2) {
    digitalWrite(_relayPin1, state1);
    digitalWrite(_relayPin2, state2);
}
