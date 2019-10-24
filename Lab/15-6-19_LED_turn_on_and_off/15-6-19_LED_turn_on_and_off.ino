// A simple program to sequentially turn on and turn off 3 LEDs

int LED1=D3;


void setup() {
  // put your setup code here, to run once:
  
  pinMode(LED1, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(LED1, HIGH); // turn on LED1
  delay(300); //wait for 200ms
  digitalWrite(LED1, LOW); // turn off LED1
  delay(300); //wait for 300ms
}
