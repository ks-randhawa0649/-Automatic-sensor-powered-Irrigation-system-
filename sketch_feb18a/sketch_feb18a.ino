int pump = 13;
int sensor = 8;
int motor = 9;

int val;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(8, INPUT);
}

void loop()
{
  val = digitalRead(8);
  if(val == LOW)
  {
   digitalWrite(13, HIGH);
   digitalWrite(2, LOW);
  }                                           
  else
  {
  digitalWrite(13, LOW);
  digitalWrite(2, HIGH);
  }
  delay(400);
}
