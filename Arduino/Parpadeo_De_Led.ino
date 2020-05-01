#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

//Pin del modulo
int pin = 0;

void setup()
{
  pwm.begin();
  pwm.setPWMFreq(60);  //~60 Hz updates
}

void loop()
{

  pwm.setPWM(pin,4096, 0); //encender el led
  delay(1000); //espera 1 segundo 
  pwm.setPWM(pin,0, 0); //apaga el led 
  delay(1000);
}
