class Greeting
{ 
  public:
    Greeting();
    void sayHi();

  private:
  // Nothing here
};

Greeting::Greeting()
{
}

void Greeting::sayHi()
{
  Serial.println("Hi");
}

Greeting welcome;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  welcome.sayHi();
  delay(1000);
}
