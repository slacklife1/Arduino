#include <Servo.h>
Servo servomotor;
int pinPotenciometro = A0;
int valorPot = 0;
int angulo=0;
void setup() {
  Serial.begin(9600);
  servomotor.attach(5);
}

void loop() {
  valorPot=analogRead(pinPotenciometro);
  angulo=map(valorPot,0,1023,0,180);
  servomotor.write(angulo);
  Serial.println(angulo);
  delay(20);
}
