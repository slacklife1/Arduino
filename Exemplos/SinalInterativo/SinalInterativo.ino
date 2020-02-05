  const int carroVermelho = 9;
  const int carroAmarelo = 10;
  const int carroVerde = 11;

  const int pedestreVermelho = 3;
  const int pedestreVerde = 5;

  const int botao = 7;

void setup() {
  

  pinMode(botao,INPUT);
  
  pinMode(carroVermelho,OUTPUT);
  pinMode(carroVerde,OUTPUT);
  pinMode(carroAmarelo,OUTPUT);
  pinMode(pedestreVermelho,OUTPUT);
  pinMode(pedestreVerde,OUTPUT);
  

}

void loop() {
  
//digitalWrite(carroVerde,HIGH);
//digitalWrite(pedestreVermelho,HIGH);

int botaoPressionado = digitalRead(botao);

  if (botaoPressionado == HIGH){
   digitalWrite(pedestreVermelho,HIGH);
   delay(5000);
  }



}
