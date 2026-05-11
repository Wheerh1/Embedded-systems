// Class template to use. Change the names!
class Greeting
{
public:
Greeting (); // Constructor
void sayHi();
private:
// Nothing here
}; //Semicolon at the end of the class statement
// Constructor
Greeting:: Greeting()
{
} //NO semicolon
// Method
void Greeting:: sayHi()
{
// code to print Hi using serial.println
  Serial.println("Hiya ε:3");
} //NO semicolon
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Greeting().sayHi();
  delay(100);

}
