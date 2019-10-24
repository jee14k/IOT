#include <DHTesp.h>
DHTesp dht;
#define dht_apin D3

int sensorPin = 0;
int led1 = D0;
int led2 = D2;
float sensorValue = 0;
void setup() {
  Serial.begin(9600);
  delay(1000);
  dht.setup(dht_apin, DHTesp::DHT11);
  Serial.println("--------------------------------------------------");
  Serial.println("DHT11 Humidity and Temperature Sensor with RGB led");
  Serial.println("--------------------------------------------------");
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
 }
void loop() {
  float temp=dht.getTemperature();
  Serial.print("\nCurrent Temperature = ");
  Serial.print(temp);
  Serial.println(" C");
  sensorValue = analogRead(A0);
  float value = sensorValue/(1024.0);
  Serial.print("The light intensity is: ");
  Serial.print(value);
  if(temp > 26 && value == 0.03)
  {
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
    delay(100);
  }
  else
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    delay(100);
  }
  Serial.println("");
  delay(1500);
}
