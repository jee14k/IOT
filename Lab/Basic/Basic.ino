void setup() {
  int a,b,c;
  Serial.begin(9600);
  while(Serial.available()<=0);
 a = Serial.readString().toInt();
 while(Serial.available()<=0);
 b = Serial.readString().toInt();
 c = a + b;
 Serial.print(c);
}

void loop() {
   
}
