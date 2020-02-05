const int ledVermelho = 3;
const int ledAmarelo = 5;
const int ledVerde = 6;

const int botao = 8;

const int ledVermelhoP = 10;
const int ledVerdeP = 11;

unsigned long tempoTranscorrido;
void setup() {

  pinMode(ledVermelho,OUTPUT);
  pinMode(ledAmarelo,OUTPUT);
  pinMode(ledVerde,OUTPUT);

  pinMode(botao,INPUT);

  pinMode(ledVermelhoP,OUTPUT);
  pinMode(ledVerdeP,OUTPUT);

  
}

void loop() {
  digitalWrite(ledVerde,HIGH);
  digitalWrite(ledVermelhoP,HIGH);

  int botaoPressionado = digitalRead(botao);

  if (botaoPressionado == HIGH && (millis()-tempoTranscorrido)>6000){
    digitalWrite(ledVerde,LOW);
    digitalWrite(ledAmarelo,HIGH);
    delay(2000);
    digitalWrite(ledAmarelo,LOW);
    digitalWrite(ledVermelho,HIGH);
    delay(1000);
    digitalWrite(ledVermelho,LOW);
    digitalWrite(ledVermelhoP,LOW);
    digitalWrite(ledVerdeP,HIGH);
    delay(5000);
      for(int i=0; i<=10;i++){
        digitalWrite(ledVermelhoP,HIGH);
        delay(250);
        digitalWrite(ledVermelhoP,LOW);
        delay(250);
      }
    
    digitalWrite(ledVerdeP,LOW);
  tempoTranscorrido = millis(); // essa funcao retorna o tempo que a placa arduino esta rodando em millis segundo
  }
  


  

}
