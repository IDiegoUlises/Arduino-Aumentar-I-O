#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

//por defecto usa la direccion 0x40, esto para conectar mas modulos al mismo tiempo
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

void setup()
{
  pwm.begin();
  pwm.setPWMFreq(60);  //~60 Hz
}


void loop()
{
  int pin = 0;
  pwm.setPWM(pin, 4096, 0); //4049 es para entregar 5v 
}
