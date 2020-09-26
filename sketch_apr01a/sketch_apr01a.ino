int in1=4;
int in2=7;
int in3=12;
int in4=13;
int val;
void setup() {
  // put your setup code here, to run once:
pinMode(12,OUTPUT);
pinMode(4,OUTPUT);
pinMode(7,OUTPUT);
pinMode(13,OUTPUT);
pinMode(2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val=digitalRead(2);
if(val==LOW)
{
digitalWrite(4,HIGH);
digitalWrite(7,LOW);
digitalWrite(12,HIGH);
digitalWrite(13,LOW);
}
else
{
digitalWrite(4,HIGH);
digitalWrite(7,HIGH);
digitalWrite(12,HIGH);
digitalWrite(13,HIGH);
}
delay(400);
}
