// Motor.h
#ifndef Motor_h
#define Motor_h

class Motor {
public:
    virtual void initialize() = 0; // Motor donanımını başlatmak için
    virtual void forward() = 0; // Motoru ileri yönde çalıştırmak için
    virtual void reverse() = 0; // Motoru ters yönde çalıştırmak için
    virtual void stop() = 0;    // Motoru durdurmak için
    virtual ~Motor() {} // Sanal yıkıcı
};

#endif
