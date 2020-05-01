# Arduino Expansion de señales PWM

* Es el modulo PCA9865 que permite crear 16 señales PWM
* La corriente maxima por pin es de 25 mA

## Primera prueba
```c++
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

// called this way, it uses the default address 0x40
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

## Codigo encontrado en internet
```c++
#include <I2C.h> // might not be needed with newer version
#include <PCA9685.h> // 2012 version
PCA9685 board_0(0x5F); // I named the first board board_0 | I2C address is in the brackets
// PCA9685 board_1(0x5E); // second board, if used

void setup() {
  board_0.begin(); // starts the first board
  // board_1.begin(); // second board, if used
  board_0.setPWMFrequency(200); // boards default to 200hz PWM
  // board_1.setPWMFrequency(200);
}

void loop() {
  board_0.PWM(0, 15, 0); // turns all LEDs  (0-15) off
  board_0.PWM(0, 15, 255); // turns all LEDs on
  board_0.PWM(0, 3, 64); // sets the first four LEDs to 1/4 brightness
  board_0.PWM(7, 128); // sets LED 8 to 50% brightness
}
```

## Otro codigo encontrado en internet
```c++
#include <Wire.h>
#include "PCA9685.h"

PCA9685 pwmController;                  // Library using default Wire and default linear phase balancing scheme

void setup() {
    Serial.begin(115200);

    Wire.begin();                       // Wire must be started first
    Wire.setClock(400000);              // Supported baud rates are 100kHz, 400kHz, and 1000kHz

    pwmController.resetDevices();       // Software resets all PCA9685 devices on Wire line

    pwmController.init(B000000);        // Address pins A5-A0 set to B000000
    pwmController.setPWMFrequency(100); // Default is 200Hz, supports 24Hz to 1526Hz

    pwmController.setChannelPWM(0, 128 << 4); // Set PWM to 128/255, but in 4096 land

    Serial.println(pwmController.getChannelPWM(0)); // Should output 2048, which is 128 << 4
}
```
