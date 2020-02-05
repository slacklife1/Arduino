const int led = 13;
const int botao = 8;

void setup() {
  pinMode(led,OUTPUT);
  pinMode(botao,INPUT);
  

}

void loop() {
  int pressionado = digitalRead(botao);

    if (pressionado == HIGH){
      digitalWrite(led,HIGH);
    }else{
      digitalWrite(led,LOW);
    }
  
  
}
