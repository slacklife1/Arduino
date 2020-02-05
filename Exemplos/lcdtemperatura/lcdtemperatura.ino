#include<LiquidCrystal.h>

LiquidCrystal dcl(12,11,5,4,3,2); //declara os pinos que o display vai trabalhar
float temperatura = 0;
float c;
const int sensorTemperatura = A0;

void setup() {

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
  dcl.print(temperatura);
  dcl.print(" T");
  dcl.setCursor(1,1);
  dcl.print(c);
  dcl.print(" C");
  delay(200);
  dcl.clear();

}
void getTemp(){
  temperatura = analogRead(sensorTemperatura);
 
  c = ((500*temperatura)/1023);  //mais simples ate agora em graus ceusis
  //c = (((float(temperatura)/1023)*5)*100); //
  

  
  
}

