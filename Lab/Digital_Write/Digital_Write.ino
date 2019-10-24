#include <DHTesp.h>
DHTesp dht;
#define dht_apin A0

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:
float t=analogRead(A0);
float temp=(((t/1024)*3000)/10);
Serial.print("Temperature: ");
Serial.print(temp);
Serial.println("C");
delay(1000);
}
