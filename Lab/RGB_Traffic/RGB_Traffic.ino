int RED = D0;
 int BLUE = D4;
  int GREEN = D2;
void setup() {
  // put your setup code here, to run once:
  pinMode(RED,OUTPUT);
   pinMode(GREEN,OUTPUT);
  pinMode(BLUE,OUTPUT);
}

void loop() { 
digitalWrite(RED,LOW);
digitalWrite(GREEN,HIGH);
digitalWrite(BLUE,HIGH);
delay (1000);
digitalWrite(RED,HIGH);
digitalWrite(GREEN,LOW);
digitalWrite(BLUE,HIGH);
delay (1000); 
digitalWrite(RED,HIGH);
digitalWrite(GREEN,HIGH);
digitalWrite(BLUE,LOW);
delay (1000); 
}
