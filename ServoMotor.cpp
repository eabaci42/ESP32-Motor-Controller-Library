#include "ServoMotor.h"

ServoMotor::ServoMotor(int pin) : _pin(pin) {}

void ServoMotor::initialize() {
    _servo.attach(_pin, 500, 2400); // Servo motoru belirtilen pinde başlatır
}

void ServoMotor::stop() {
    // Servo motorun durması genelde PWM sinyalini kesmekle sağlanır, bu nedenle detach kullanılabilir.
    _servo.detach(); // Servo motorun pin bağlantısını keser	
}

void ServoMotor::setAngle(int angle) {
    if(angle >= 0 && angle <= 180) { // Servo motorların çoğu 0-180 derece aralığında çalışır
        _servo.write(angle); // Servo motorun açısını ayarlar
    }
    else{
    	setAngle(angle % 181);
    }
}

ServoMotor::~ServoMotor() {
    stop(); // Servo motoru pin'den ayırır
}
