int led=13;
int buzzer=12;
void setup() {

pinMode(led,OUTPUT);
pinMode(buzzer,OUTPUT);

}

void loop() {
  
    digitalWrite(led,HIGH);
    digitalWrite(buzzer,LOW);
    delay(1000);
    digitalWrite(led,LOW);
    digitalWrite(buzzer,HIGH);
  delay(2000);
}
