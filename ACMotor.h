#ifndef ACMotor_h
#define ACMotor_h

#include "Motor.h"

class ACMotor : public Motor {
public:
    ACMotor(int relayPin1, int relayPin2); // Motor kontrolü için iki röle pinini alır
    void initialize() override;
    void forward() override; // Motoru bir yönde (örn. saat yönünde) döndürür
    void reverse() override; // Motoru diğer yönde (örn. saat yönünün tersinde) döndürür
    void stop() override;    // Motoru durdurur

private:
    int _relayPin1, _relayPin2; // Rölelerin pin numaraları
};

#endif
