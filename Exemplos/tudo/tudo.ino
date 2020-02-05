#include <Ultrasonic.h>

#include<LiquidCrystal.h>
#define echoPin 13
#define trigPin 6
LiquidCrystal dcl(12,11,5,4,3,2); //declara os pinos que o display vai trabalhar
Ultrasonic ultrasonic(6,13);
float temperatura = 0;
float c;

int luzLida = 0;
const int sensorTemperatura = A0;
const int sensorLuz = A5;

void setup() {
  pinMode(echoPin,INPUT);
  pinMode(trigPin,OUTPUT);
  
  dcl.begin(16,2); //indica qual é o tipo de display nesse caso 16 colunas por 2 linhas

  dcl.setCursor(0,0); //indica onde o cursor vai estar, nesse caso coluna 0 na primeira linha. nesse caso o 0
  dcl.print("CURSO ARDUINO");
  
  dcl.setCursor(0,1);//vai estar na coluna 0 na segunda linha nesse caso o 1;
  dcl.print("Display");
  delay(2000);
   dcl.clear(); //limpa o texto

}

void loop () {
  getTemp();
  dcl.print(getLuz()+"/");
  dcl.print(getDistancia());
  dcl.setCursor(0,1);
  dcl.print(c);
  
  delay(200);
  dcl.clear();

}
void getTemp(){
  temperatura = analogRead(sensorTemperatura);
 
  //c = ((500*temperatura)/1023);  //mais simples ate agora em graus ceusis
  c = (((float(temperatura)/1023)*5)*100); //
  
}
String getLuz(){
  String resultado;
  luzLida = analogRead(sensorLuz);
    if(luzLida<512){
      resultado = "NOITE";
      return resultado;
    }else{
      resultado = "DIA";
      return resultado;
    }
}
long getDistancia(){
    /*digitalWrite(trigPin,LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin,HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin,LOW);*/
  long distancia = (ultrasonic.Ranging(CM));
  
  return distancia;
}

