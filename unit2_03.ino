/*
Turns on the LED for one second, then off for one sec repeatedly
created by: Ahmad El-khawaldeh
created on: oct3
*/

void setup()
{
  pinMode(13,OUTPUT);
}

void loop()
{
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
}
  
