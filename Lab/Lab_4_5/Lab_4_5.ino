  int sensorPin = 0;
  int led1 = D0;
  int led2 = D2;
  int led3 = D4;
  float sensorValue = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(A0);
  float value = sensorValue/(1024.0);
  Serial.println(value);
  delay(500);
  if(value>0.05) {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
  }
  else {
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
  }
}
