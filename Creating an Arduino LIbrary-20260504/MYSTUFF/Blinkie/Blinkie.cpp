#include "Blinkie.h"

//constructor
Blinkie::Blinkie() 
{
  pinMode(LED_BUILTIN, OUTPUT);
  }

//method
void Blinkie::blink() 
{
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("Hiya ε:3");
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("oof εXP");
  delay(1000);
  }