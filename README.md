# Arduino Expansion de señales PWM

<img src="https://github.com/IDiegoUlises/Arduino-Expansion-De-PWM/blob/master/Images/modulo-pwm.png"  >

* Este modulo PCA9865 que permite crear 16 señales PWM
* La corriente maxima por pin es de 25 mA

## Codigo
```c++
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

//usa por defecto la direccion 0x40, esto es por si conectamos mas de estos modulos al mismo tiempo
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

void setup()
{
  pwm.begin();
  pwm.setPWMFreq(60);  //~60 Hz updates
}


void loop()
{
  int pin = 0;
  pwm.setPWM(pin, 4096, 0); //HIGH 5v
}
```
## Conexion

<img src="https://github.com/IDiegoUlises/Arduino-Expansion-De-PWM/blob/master/Images/Conexion.png"  >

<img src="https://github.com/IDiegoUlises/Arduino-Expansion-De-PWM/blob/master/Images/Conexion-Del-Modulo-PCA9685.png"  >

