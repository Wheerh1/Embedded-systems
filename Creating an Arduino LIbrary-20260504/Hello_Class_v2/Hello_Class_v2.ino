class Greeting2
{ 
  public:
    Greeting2();
    void sayHi();
    void sayBonjour();
    void sayKiaOra();

  private:
  // Nothing here
};

Greeting2::Greeting2()
{
}

void Greeting2::sayHi()
{
  Serial.println("Hi");
}

void Greeting2::sayBonjour()
{
  Serial.println("Bonjour toute le monde!");
}

void Greeting2::sayKiaOra()
{
  Serial.println("Kia Ora whanau!");
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
