class Blinkie
{
  public:
    Blinkie();
    void blink();

};
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

Blinkie thing;

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  thing.blink();
}
