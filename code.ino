int buzzer=11;
int sensor=8;
int state = 0;

void setup() {
pinMode(11,OUTPUT);
pinMode(8,INPUT);// put your setup code here, to run once:

}

void loop() {
  state=digitalRead(8);
  if (state == HIGH)
  {
    digitalWrite(11,HIGH);// put your main code here, to run repeatedly:
  }
else
{
  digitalWrite(11, LOW);
}
}
