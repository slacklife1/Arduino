#include <Ultrasonic.h>




 Ultrasonic ultrassom(12,13); // define o nome do sensor(ultrassom)
//e onde esta ligado o trig(6) e o echo(13) respectivamente
 long distancia;
 void setup() {
 Serial.begin(9600); //Habilita Comunicação Serial a uma taxa de 9600 bauds.
 
 }
 void loop()
 {
   distancia = ultrassom.Ranging(CM);// ultrassom.Ranging(CM) retorna a distancia em centímetros(CM) ou polegadas(INC)
   Serial.print(distancia); //imprime o valor da variável distancia
   Serial.println("cm");
   delay(1000);
 }
