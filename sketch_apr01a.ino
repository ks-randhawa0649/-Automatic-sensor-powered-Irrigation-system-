int in1=10;
int in2=11;
int in3=12;
int in4=13;
int val;
void setup() {
  // put your setup code here, to run once:
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
pinMode(9,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val=digitalRead(9);
if(val==LOW)
{
digitalWrite(10,LOW);
digitalWrite(3,LOW);
digitalWrite(2,LOW);
digitalWrite(2,LOW);
}
else
{
digitalWrite(10,HIGH);
digitalWrite(3,HIGH);
digitalWrite(2,HIGH);
digitalWrite(2,HIGH);
}
delay(100);
}
