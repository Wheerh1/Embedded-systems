class Blinker
{
  public:
    Blinker();
    void blinkLED();
  };
  
Blinker::Blinker()
{
  pinMode(LED_BUILTIN, OUTPUT);
  }

void Blinker::blinkLED()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
  }

Blinker bob;

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  bob.blinkLED();
}
