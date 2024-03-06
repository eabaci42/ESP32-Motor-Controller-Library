#ifndef RelayControlledMotor_h
#define RelayControlledMotor_h

#include "Motor.h"

class RelayControlledMotor : public Motor {
public:
    RelayControlledMotor(int relayPin1, int relayPin2);
    void initialize() override;
    void forward() override;
    void reverse() override;
    void stop() override;

private:
    int _relayPin1, _relayPin2;
    void setRelayState(bool state1, bool state2);
};

#endif
