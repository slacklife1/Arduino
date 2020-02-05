const int potenciometro = 0;
const int ledPin = 11;

int potenciometroLido = 0;

void setup() {
 pinMode(ledPin,OUTPUT);
 
 Serial.begin(9600);

}

void loop() {
  potenciometroLido = analogRead(potenciometro);
  Serial.print("Potenciometro lido.: ");
  Serial.println(potenciometroLido);
    delay(500);

    int tempo = potenciometroLido;
    digitalWrite(ledPin,HIGH);
    delay(tempo);
    digitalWrite(ledPin,LOW);
    delay(tempo);
     
    
      
      
     
    
  

}
