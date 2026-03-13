//base code from here: https://osoyoo.com/2017/07/24/obstacle-avoidance-sensor/

int LED = 13; // Use the onboard Uno LED
int testLED = 8;
int testLED2 = 7;
const byte isObstaclePin = 2;  // This is our input pin
int isObstacle = HIGH;  // HIGH MEANS NO OBSTACLE
volatile bool start = false;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(isObstaclePin, INPUT);
  Serial.begin(9600);  
  attachInterrupt(digitalPinToInterrupt (isObstaclePin), sensorTrip, FALLING);
}

void loop() {
  // isObstacle = digitalRead(isObstaclePin);
  // if (isObstacle == LOW)
  // {
  //   Serial.println("OBSTACLE!!, OBSTACLE!!");
  //   digitalWrite(LED, HIGH);
  // }
  // else
  // {
  //   Serial.println("clear");
  //   digitalWrite(LED, LOW);
  // }

  if(start == true){
    digitalWrite(testLED, HIGH);
    delay (500);
    digitalWrite(testLED2, HIGH);
    delay(600);
    digitalWrite(testLED,LOW);
    delay(500);
    digitalWrite(testLED2, LOW);
    start = false;
  }

  delay(100);
}

void sensorTrip(){
  start = true;
}
