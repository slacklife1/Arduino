#define RED  3
#define BLUE 6
#define GREEN 5
#define BOTAO 8

int pressionado = 0;
int estagio = 0;
void setup() {
  Serial.begin(9600);
  pinMode(BOTAO,INPUT);
  pinMode(RED,OUTPUT);
  pinMode(BLUE,OUTPUT);
  pinMode(GREEN,OUTPUT);
  

}

void loop() {
  bot();
  switch(estagio){
    case 0:
    analogWrite(RED,0);
    analogWrite(BLUE,0);
    analogWrite(GREEN,0);
    break;
    case 1:
    analogWrite(RED,255);
    analogWrite(BLUE,0);
    analogWrite(GREEN,0);
    break;
    case 2:
    analogWrite(RED,0);
    analogWrite(BLUE,255);
    analogWrite(GREEN,0);
    break;
    case 3:
    analogWrite(RED,0);
    analogWrite(BLUE,0);
    analogWrite(GREEN,255);
    break;
  }
 
}

void bot(){
  pressionado = digitalRead(BOTAO);
    if(pressionado==HIGH){
      estagio = estagio+1;
        if (estagio == 4){
          estagio=0;
        }
        delay(200);
    }
}

