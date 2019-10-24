#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>
#include <DHTesp.h>
DHTesp dht;
 
#define dht_apin D4
 
// Set these to run example.
#define FIREBASE_HOST "iot-lab-876f7.firebaseio.com"
#define FIREBASE_AUTH "FJ9ohLpq41R4Raoxsb5QzAALf8fvKrK4uF4TNs2J"
#define WIFI_SSID "mine"
#define WIFI_PASSWORD "GM240799"
 
 
 
void setup() {
  Serial.begin(9600);
 
  // connect to wifi.
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("connecting");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.print("connected: ");
  Serial.println(WiFi.localIP());
  dht.setup(dht_apin, DHTesp::DHT11);
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH); //connecting to the Firebase
 
}
   
 
 
 
void loop() {
  float h= dht.getHumidity();
float t= dht.getTemperature();
//Firebase.setFloat("number", 42.0);
Firebase.setFloat("temp",t);
//Firebase.Set("humidity",h);
 
  delay(5000);
}
