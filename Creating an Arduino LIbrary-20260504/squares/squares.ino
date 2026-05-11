class BasicMaths
{
  public:
    BasicMaths();
    int returnSquare(int value);
  };

BasicMaths::BasicMaths()
{
  }

int BasicMaths::returnSquare(int value)
{
  //Square is a built in function, so our class is acting as a "wrapper"
  int answer = square(value);  
  return answer;
  }


BasicMaths doMaths;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  int myAnswer = doMaths.returnSquare(6);
  Serial.println(myAnswer);
}
