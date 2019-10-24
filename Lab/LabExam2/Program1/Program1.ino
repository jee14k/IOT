int spin = A0;
float digitalval;
float sval;
void setup() {
 Serial.begin(9600); 
}
void loop() {
 sval = analogRead(spin);
 digitalval =(((sval/1024)*3000)/10);Ś
 Serial.println("Temperature");
 Serial.println(digitalval);
 delay(800);

}
