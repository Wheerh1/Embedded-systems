/*
  SparkFun Inventor’s Kit
  Circuit 2B-ButtonTrumpet

  Use 3 buttons plugged to play musical notes on a buzzer.

  This sketch was written by SparkFun Electronics, with lots of help from the Arduino community.
  This code is completely free for any use.

  View circuit diagram and instructions at: https://learn.sparkfun.com/tutorials/sparkfun-inventors-kit-experiment-guide---v41
  Download drawings and code at: https://github.com/sparkfun/SIK-Guide-Code
*/

//set the pins for the button and buzzer
int firstKeyPin = 2;
int secondKeyPin = 3;
int thirdKeyPin = 4;

int buzzerPin = 10;

int freq = 0;

void setup() {
  //set the button pins as inputs
  pinMode(firstKeyPin, INPUT_PULLUP);
  pinMode(secondKeyPin, INPUT_PULLUP);
  pinMode(thirdKeyPin, INPUT_PULLUP);

  //set the buzzer pin as an output
  pinMode(buzzerPin, OUTPUT);
}

void loop() {


  if (digitalRead(firstKeyPin) == LOW) {      //if the first key is pressed
    freq +=262;                     //play the frequency for c
  }
  if (digitalRead(secondKeyPin) == LOW) { //if the second key is pressed
    freq += 330;                     //play the frequency for e
  }
  if (digitalRead(thirdKeyPin) == LOW) { //if the third key is pressed
    freq += 390;                     //play the frequency for g
  }
  if(freq == 0){
    noTone(buzzerPin);                        //if no key is pressed turn the buzzer off
  }

  tone(buzzerPin, freq);
}

/*
  note  frequency
  c     262 Hz
  d     294 Hz
  e     330 Hz
  f     349 Hz
  g     392 Hz
  a     440 Hz
  b     494 Hz
  C     523 Hz
*/
