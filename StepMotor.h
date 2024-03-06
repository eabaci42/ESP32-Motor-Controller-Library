#ifndef StepMotor_h
#define StepMotor_h

#include "Motor.h"

class StepMotor : public Motor {
public:
    StepMotor(int stepPin, int dirPin); // Adım ve yön pinlerini alır
    void initialize() override;
    void setSpeed(long whatSpeed); // Adım motorunun hızını ayarlar
    void step(int steps); // Belirli adımda motoru döndürür
    void stop() override; // Motoru durdurur

private:
    int _stepPin, _dirPin;
    long _speed;
    void stepMotor(int thisStep);
};

#endif
