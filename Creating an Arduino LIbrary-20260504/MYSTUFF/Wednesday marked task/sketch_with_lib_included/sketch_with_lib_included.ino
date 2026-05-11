#include <Converter.h>

Converter converter;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  delay(1000);
  
  Converter().convertXtoY("metre","mile", 2000);
  Converter().convertXtoY("foot", "mile", 2500);
  Converter().squareArea(10, 10, "acre");
  Converter().squareArea(10, 10, "hectare");

}
