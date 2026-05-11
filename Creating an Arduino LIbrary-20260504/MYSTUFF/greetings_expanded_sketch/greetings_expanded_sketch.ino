#include <Greeting_ex.h>




Greeting_ex Rachel;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Rachel.sayHi();
  delay(1000);
  Rachel.sayHello();
  delay(1000);
  Rachel.sayGday();
  delay(1000);
  Rachel.sayGG();
  delay(1000);
}
