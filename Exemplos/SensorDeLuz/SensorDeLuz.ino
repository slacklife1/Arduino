const int sensorDeLuz = 0;
const int ledPin = 11;
const int buzina = 2;
int luzLida = 0;

void setup() {
 pinMode(ledPin,OUTPUT);
 pinMode(buzina,OUTPUT);
 Serial.begin(9600);

}

void loop() {
  luzLida = analogRead(sensorDeLuz);
  Serial.print("Luz lida.: ");
  Serial.println(luzLida);
    delay(500);
    if(luzLida<512){

        analogWrite(ledPin,255);
        digitalWrite(buzina,HIGH);
    }else{
      analogWrite(ledPin,0);
      digitalWrite(buzina,LOW);
    }
    
    /*   funciona do mesmo jeito
     *    
     *    digitalWrite(ledPin,HIGH);
    }else{
      digitalWrite(ledPin,LOW);
    }
      */
      
     
    
  

}
