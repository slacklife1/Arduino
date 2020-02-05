#include<LiquidCrystal.h>

LiquidCrystal dcl(12,11,5,4,3,2); //declara os pinos que o display vai trabalhar

void setup() {

  dcl.begin(16,2); //indica qual é o tipo de display nesse caso 16 colunas por 2 linhas

  dcl.setCursor(0,0); //indica onde o cursor vai estar, nesse caso coluna 0 na primeira linha. nesse caso o 0
  dcl.print("Curso arduino");
  
  dcl.setCursor(0,1);//vai estar na coluna 0 na segunda linha nesse caso o 1;
  dcl.print("Display");
  delay(2000);

}

void loop () {
  dcl.clear(); //limpa o texto
  delay(200);
  dcl.print("Felipe Barbosa");
  delay(200);

}
