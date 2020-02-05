#include <IRremote.h>

int RECV_PIN = 2;
IRrecv irrecv(RECV_PIN);
decode_results results;
#define CH1 0xFFA25D 
#define CH 0xFF629D
#define CH2 0xFFE21D
#define BUTON8 0xFF4AB5
#define BUTON9 0xFF52AD

void setup()

{

 Serial.begin(9600);

 irrecv.enableIRIn(); 

}

void loop() {


 if (irrecv.decode(&results)) 
  {

 if (results.value == CH1) 

 {

 Serial.println("CH-"); 
 }

 if (results.value == CH) 

 {

 Serial.println("CH"); 

 }

 if (results.value == CH2) 

 {

 Serial.println("CH+"); 

 }


 if (results.value == BUTON8) 

 {

 Serial.println("BUTON8"); 

 }
if (results.value == BUTON9) 

 {

 Serial.println("BUTON9"); 

 }
 irrecv.resume();

 }



}
