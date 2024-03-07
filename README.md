# ESP32 Motor Kontrol Kütüphanesi

Bu kütüphane, ESP32 mikrodenetleyici üzerinde çeşitli motor türlerini kontrol etmek için geliştirilmiştir. AC motorlar, DC motorlar, servo motorlar ve adım motorlar gibi farklı motor türleri için destek sunar. Kütüphane, ESP32'nin güçlü özelliklerinden yararlanarak geliştiricilere esnek ve kolay bir kullanım sağlar.

## Özellikler

- Çeşitli motor türleri için kapsamlı kontrol mekanizmaları.
- ESP32'nin PWM özelliklerini kullanarak motor hız ve yön kontrolü.
- Kolay kullanım için basit ve anlaşılır API.

## Kurulum

Kütüphaneyi kullanmaya başlamak için aşağıdaki adımları takip edin:

1. Bu kütüphaneyi projenize dahil edin.
2. Kullanmak istediğiniz motor türüne göre ilgili sınıfı başlatın.
3. Motorunuzu başlatmak, yönlendirmek ve durdurmak için sınıf metodlarını kullanın.

## Kullanım Örneği

```cpp
#include "DCMotor.h"

DCMotor motor(5, 18); // 5 ve 18 pinlerini kullanarak bir DC motor nesnesi oluşturur

void setup() {
  motor.initialize(); // Motoru başlatır
}

void loop() {
  motor.forward(); // Motoru ileri yönde çalıştırır
  delay(1000); // 1 saniye bekler
  motor.stop(); // Motoru durdurur
  delay(1000); // 1 saniye daha bekler
}
```
## Gelecekteki Geliştirmeler

Projeyi ESP32'nin sunduğu özelliklerden daha verimli yararlanacak şekilde geliştirebiliriz:

1. Çok Çekirdekli İşlemci Desteği: Motor kontrol işlemlerini bir çekirdekte yürütürken, WiFi/Bluetooth gibi diğer işlemleri paralel olarak diğer çekirdekte çalıştırabiliriz.
2. Düşük Güç Modları: ESP32'nin uyku modları, enerji tasarrufu sağlamak için kütüphaneye entegre edilebilir.
3. Kablosuz İletişim Entegrasyonu: ESP32'nin WiFi ve Bluetooth yetenekleri, uzaktan motor kontrolü gibi IoT uygulamaları için kullanılabilir.
4. Gelişmiş Motor Kontrol Özellikleri: Daha sofistike motor kontrol algoritmaları ekleyerek, motorların daha hassas ve verimli bir şekilde kontrol edilmesini sağlayabiliriz.
