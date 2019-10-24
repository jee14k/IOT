#include <DHTesp.h> // including the libraries
#define dht_apin D3  // choosing the pin
DHTesp dht;  // making the variable
void setup() {  // starting the setup function
   Serial.begin(9600);   // setting the baud rate
   delay(500);  // setting a time interval
   Serial.print("Temperature & Humidity sensor");  //displaying message to the user 
   Serial.println();  // printing a new line 
   delay(1000);  // setting a delay
   dht.setup(dht_apin,DHTesp::DHT11);  //setting up the function with parameters of the pin  
}
void loop() {
  float temp = dht.getTemperature();   // calling the temperature function
  float hum = dht.getHumidity();  // calling the humidity function
  Serial.print("Current Temperature is: ");  //displaying message to the user 
  Serial.print(temp);   // printing the temperature
  Serial.println("C");   //displaying message to the user 
  Serial.print("Current humidity is: ");  //displaying message to the user 
  Serial.print(hum);   // printing the humidity
  Serial.println("%");   //displaying message to the user 
  Serial.println();    // printing a new line
  delay(3500);   // setting a delay to run the loop again
  if(temp>26)
  {
    Serial.print("New Temperature is: ");   //displaying message to the user 
    Serial.print(temp);   // printing the temperature
    Serial.println("C");   //displaying message to the user 
  }
}
