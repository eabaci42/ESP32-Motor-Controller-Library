// LowPowerDCMotor.h
#ifndef LowPowerDCMotor_h
#define LowPowerDCMotor_h

#include "Motor.h"

class LowPowerDCMotor : public Motor {
public:
    LowPowerDCMotor(int pwmPin, int directionPin1, int directionPin2);
    void initialize() override;
    void forward() override;
    void reverse() override;
    void stop() override;
    void setSpeed(int speed); // Hızı ayarlamak için ek metot

private:
    int _pwmPin, _directionPin1, _directionPin2;
    int _speed;
};

#endif
