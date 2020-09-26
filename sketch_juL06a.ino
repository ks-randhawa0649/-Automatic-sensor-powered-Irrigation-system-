void setup() {

pinMode(8, OUTPUT);
pinMode(7, OUTPUT);
pinMode(13, OUTPUT);
}

void loop() {
digitalWrite(13, HIGH);
digitalWrite(8, HIGH);
digitalWrite(7, HIGH);
delay(2500);
digitalWrite(8, LOW); 
digitalWrite(7, LOW);
delay(2500);
digitalWrite(8, HIGH);
digitalWrite(7, HIGH);
delay(2500);
digitalWrite(13, LOW);
delay(2500);
}
