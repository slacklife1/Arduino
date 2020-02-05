
#include <IRremote.h>

int RECV_PIN = 11; // cria variavel para salvar o pino

IRrecv irrecv(RECV_PIN); // cria o objeto irrecv e informa qual vai ser o pino utilisado

decode_results results; //cria objeto para pegar o resultado

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // inicia o receptor
}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value,DEC); // mostra o valor do botao em exadecimal HEXou em decimal DEC
    irrecv.resume(); // Receive the next value
  }

  if(results.value==16738455){
    Serial.println("zero");
    delay(1000);
  }
}
