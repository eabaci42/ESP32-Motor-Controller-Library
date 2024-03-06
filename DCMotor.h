#ifndef DCMotor_h
#define DCMotor_h

#include "Motor.h"

class DCMotor : public Motor {
public:
    DCMotor(int relayPin1, int relayPin2); // Motor kontrolü için iki röle pinini alır
    void initialize() override;
    void forward() override; // Motoru ileri yönde döndürür
    void reverse() override; // Motoru geri yönde döndürür
    void stop() override;    // Motoru durdurur

private:
    int _relayPin1, _relayPin2; // Rölelerin pin numaraları
};

#endif
