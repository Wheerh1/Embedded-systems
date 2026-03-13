int startpin = 2;
int endpin = 10;
void setup() {
  // put your setup code here, to run once:
  for(int i = startpin; i < endpin; i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i =startpin; i< endpin; i++)
  {
    digitalWrite(i,HIGH);
    delay(500);
  }
  
  delay(500);

  for(int i = startpin; i < endpin; i++)
  {
    digitalWrite(i,LOW);
    delay(500);
  }
}
