#include <Ultrasonic.h>



#include <Ultrasonic.h>


#define echoPin 13
#define trigPin 6
const int ledPin =8;
Ultrasonic ultrasonic(6,13);

void setup() {
  Serial.begin(9600);
  pinMode(echoPin,INPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(ledPin,OUTPUT);

}

void loop() {
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);

  long distanciaCentimetro = (ultrasonic.Ranging(CM));
  Serial.print("Distancia em centimetros.: ");
  Serial.println(distanciaCentimetro);
  

   if (distanciaCentimetro < 5){ //acende led
    digitalWrite(ledPin,HIGH);
    
   }else{
    digitalWrite(ledPin,LOW);
   }
  delay(1000);

}
