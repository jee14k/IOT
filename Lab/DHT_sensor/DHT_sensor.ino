#include <DHTesp.h>

#define dht_apin D3
int red= D0;
int blue= D3;

DHTesp dht;
void setup() {
  Serial.begin(9600);
  delay(500);
  Serial.println("DHT11 Humidity and Temperature Sensor");
  delay(1000);
  dht.setup(dht_apin, DHTesp::DHT11);
  pinMode(red,OUTPUT);
  pinMode(blue,OUTPUT);
}

void loop() {
  float hum=dht.getHumidity();
  float temp=dht.getTemperature();
  Serial.print("Current Humidity = ");
  Serial.print(hum);
  Serial.println("%");
  Serial.print("Current Temperature = ");
  Serial.print(temp);
  Serial.println(" C");
  if(hum<60)
  {
    digitalWrite(blue,HIGH);
    delay(1);
  }
  else
  {
    digitalWrite(blue,LOW);
    delay(1);
  }

  
  if(temp>26)
  {
    digitalWrite(red,HIGH);
  }
  else
  {
    digitalWrite(red,LOW);
  }
  
  
  Serial.println();
  delay(3500);
}
