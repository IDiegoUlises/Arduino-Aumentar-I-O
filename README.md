# Arduino Expansion de señales PWM

* Es el modulo PCA9865 que permite crear 16 señales PWM
* La corriente maxima por pin es de 25 mA

## Primera prueba
```c++
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

// called this way, it uses the default address 0x40
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

void setup() {
  pwm.begin();
  pwm.setPWMFreq(60);  // ~60 Hz updates


}


void loop() {

  int pin = 0;
  pwm.setPWM(pin, 4096, 0);
}

```
