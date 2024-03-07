#ifndef ServoMotor_h
#define ServoMotor_h

#include "Motor.h"
#include <Arduino.h>

class ServoMotor : public Motor {
public:
    ServoMotor(int pwmPin);
    void initialize() override;
    void setAngle(int angle); // Servo motorun açısını ayarlar
    void stop() override; // Bu metod bu kontekste anlam ifade etmeyebilir
    // Implement these methods to comply with the abstract base class, even if they do nothing
    void forward() override { /* Servo motor için bu metodun bir anlamı yok */ }
    void reverse() override { /* Servo motor için bu metodun bir anlamı yok */ }
private:
    int _pwmPin;
    int _angle; // Son ayarlanan açı
    static const int ledChannel = 0; // PWM kanalı için sabit bir değer atayın
    static const int freq = 50; // Servo motor için tipik PWM frekansı (Hz)
    static const int resolution = 16; // PWM çözünürlüğü (bit)
    static const int minPulseWidth = 544; // Mikrosaniye cinsinden minimum pulse genişliği
    static const int maxPulseWidth = 2400; // Mikrosaniye cinsinden maksimum pulse genişliği
    void writeMicroseconds(int value); // PWM sinyali ile servo motorunu kontrol eder
};

#endif
