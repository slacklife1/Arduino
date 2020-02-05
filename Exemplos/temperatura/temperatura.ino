const int sensorTemperatura = A0;
float temperatura = 0;
float celsius, farenheit, kelvin;

void setup() {
 Serial.begin(9600);

}

void loop() {

  getTemp();
  
  Serial.print("Celsius.: ");
  Serial.println(celsius);
  Serial.print("Farenheit.: ");
  Serial.println(farenheit);
  Serial.print("Kelvin.: ");
  Serial.println(kelvin);
  Serial.print("O que le.: ");
  Serial.println(temperatura);
  delay(8000);
  
}

void getTemp(){ //criando uma funcao
  temperatura = analogRead(sensorTemperatura);//le o 

  kelvin = (((float(temperatura)/1023)*5)*100); // converte em kelvin
    celsius = kelvin - 273.15; // converte em celcius
  farenheit = (celsius*1.8)+32; // converte em fahrenheint
}

