  int sensorPin = 0;
  float sensorValue = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
 }
void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(A0);
  float value = sensorValue/1024;
  Serial.print("The current light intensity is: ");
  Serial.println(value);
  delay(500);
}
