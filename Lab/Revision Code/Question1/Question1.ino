#include <DHTesp.h>

DHTesp dht;

#define dht_apin D3

int sensorPin = 0;
int led1 = D0;
int led2 = D2;
int led3 = D4;
int led4 = D6;
int led5 = D8;
float sensorValue = 0;
void setup() {
  Serial.begin(9600);
  Serial.println("DHT11 Humidity and Temperature Sensor");
  delay(1000);
  dht.setup(dht_apin, DHTesp::DHT11);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
}
void loop() {
  float temp=dht.getTemperature();
  Serial.print("Current Temperature = ");
  Serial.print(temp);
  Serial.println(" C");
  sensorValue = analogRead(A0);
  float value = sensorValue/(1024.0);
  Serial.println(value);
  delay(1000);
  if(value==1 && temp>26) {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
  }
  else {
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
  }
}
