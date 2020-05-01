# Arduino Expansion de señales PWM

* Es el modulo PCA9865 que permite crear 16 señales PWM
* La corriente maxima por pin es de 25 mA

## Primera prueba
```c++
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

// called this way, it uses the default address 0x40
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

uint8_t servonum = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("16 channel pwm!");

  pwm.begin();

  pwm.setPWMFreq(60);  // ~60 Hz updates
}


void loop() {
  int numero = 0;
  pwm.setPWM(numero,0,4096); //Numero del pin del modulo, valor del flanco de subida y bajada??, cantidad de energia??
}


```
