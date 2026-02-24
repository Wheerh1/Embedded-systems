/*
  SOS

  Blinks LED connected to output pin 11 in morse code for each letter of S O S.
  Blinks LED connected to output pin 10 on for each letter and breifly off between each letter in order to
  better denote each letter from eachother.

  then says jk jk because I had time

  
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(11, OUTPUT); //LED1
  pinMode(10, OUTPUT); //LED2
  pinMode(9, OUTPUT);//LED3
  pinMode(8, OUTPUT); //LED4
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(10, HIGH); //LED2 on for start of a letter  (S)
  for(int i=0; i<3; i++){ //for loop to repeat long dash 3 times
    digitalWrite(11, HIGH);  //LED1 on
    delay(1500);  //length of time LED1 remains on
    digitalWrite(11, LOW);   //LED1 off 
    delay(1000);  //length of time LED1 remains off
  }
  digitalWrite(10, LOW); //LED2 off - end of letter
  delay(500); //delay before next letter
  digitalWrite(10,HIGH); //LED2 on for letter 2 (O)

  for(int i=0; i<3; i++){ //For loop that repeats short dash 3 times
    digitalWrite(11, HIGH); //LED1 on
    delay(400); //LED1 on duration
    digitalWrite(11, LOW); // LED1 off
    delay(400); //LED1 off duration
  }
  digitalWrite(10, LOW); //LED2 off - end of letter
  delay(500); // duration between letters
  digitalWrite(10,HIGH); //LED2 on - start of next letter

  for(int i=0; i<3; i++){ //letter S again
    digitalWrite(11, HIGH);  
    delay(1500);
    digitalWrite(11, LOW);   
    delay(1000);
  }
  digitalWrite(10, LOW);//LED2 off end of letter
  delay(500); //Duration before next
  

 for(int i=0; i<2; i++){ //repeat letters j and k twice
  digitalWrite(10,HIGH);
  //letter j
  digitalWrite(9, HIGH); //short dash
  delay(400); 
  digitalWrite(9, LOW); 
  delay(400); 
  for(int i=0; i<3; i++){ //3 long
    digitalWrite(9, HIGH);  
    delay(1500);
    digitalWrite(9, LOW);   
    delay(1000);
  }
  digitalWrite(10, LOW);//LED2 off end of letter
  delay(500); //Duration before next
  digitalWrite(10,HIGH);

  //letter k
  digitalWrite(8, HIGH); //long dash
  delay(1500);
  digitalWrite(8, LOW);   
  delay(1000);

  digitalWrite(8, HIGH); //short dash
  delay(400); 
  digitalWrite(8, LOW); 
  delay(400);

  digitalWrite(8, HIGH); //long dash
  delay(1500);
  digitalWrite(8, LOW);   
  delay(1000);

  digitalWrite(10, LOW);//LED2 off end of letter
  delay(500); //Duration before next
 }
 digitalWrite(10, LOW);//LED2 off end of letter
  delay(500); //Duration before next
}
