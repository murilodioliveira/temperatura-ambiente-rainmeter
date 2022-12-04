#include "dht.h" //Incluindo biblioteca do sensot DHT11
 
const int pinoDHT11 = A0; //Definição do pino utilizado pelo sensor DHT11
 
dht DHT; //Definição do nome do sensor DHT
 
void setup(){
  Serial.begin(9600); //Inicializa o monitor serial com taxa de atualização de 9600 bits por segundo
  delay(2000); //Tempo de espera antes do laço iniciar
}
 
void loop(){
  DHT.read11(pinoDHT11); //Realiza a leitura do sensor
  Serial.print("Umidade: ");
  Serial.print(DHT.humidity); //Imprime no monitor serial o valor da umidade em porcentagem
  Serial.print("%");
  Serial.print(" / Temperatura: ");
  Serial.print(DHT.temperature, 2); //Imprime no monitor serial o valor da temperatura com 2 casas decimais
  Serial.println("*C");
  delay(2000); //Tempo de espera antes do laço se repetir
}