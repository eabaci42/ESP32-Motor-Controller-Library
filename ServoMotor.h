#ifndef ServoMotor_h
#define ServoMotor_h

#include "Motor.h"

class ServoMotor : public Motor {
public:
    ServoMotor(int pwmPin); // Servo motorun PWM kontrol pinini alır
    void initialize() override;
    void setAngle(int angle); // Servo motorun açısını ayarlar
    void stop() override; // Servo motoru durdurur (genellikle servo motorları durdurmak için özel bir komut yoktur, ancak motoru sabit bir açıya ayarlayarak "durmuş" olarak kabul edebiliriz)

private:
    int _pwmPin;
    int _angle; // Son ayarlanan açı
};

#endif
