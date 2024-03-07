#ifndef ServoMotor_h
#define ServoMotor_h

#include "Motor.h"
#include <Arduino.h>
#include <ESP32Servo.h>

class ServoMotor : public Motor {
public:
    explicit ServoMotor(int pin); // Servo motorun bağlı olduğu pin numarası ile oluşturucu
    void initialize() override; // Motor donanımını başlatır
    void forward() override {} // Bu fonksiyonlar artık kullanılmayacak
    void reverse() override {} // Bu fonksiyonlar artık kullanılmayacak
    void stop() override;    // Motoru durdurur
    ~ServoMotor(); // Yıkıcı
    void setAngle(int angle); // Servo motoru belirli bir açıya ayarlar

private:
    int _pin; // Servo motorun bağlı olduğu pin
    Servo _servo; // Servo nesnesi
};

#endif
