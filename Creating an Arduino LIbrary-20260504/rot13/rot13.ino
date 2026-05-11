void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println(parseString("i hope this works v ubcr guvf jbexf"));
}

void loop() {
  // put your main code here, to run repeatedly:

}

String parseString(String message)
{
  // String message must be converted into an array of characters
  String returnstring;
  int charsLength = message.length() + 1;
  char chars[charsLength];
  message.toCharArray(chars, charsLength);

  // Iterate thru array, encypher chars, return encyphered data
  for (int i = 0; i <= charsLength; i++)
  {
    returnstring = returnstring + rot13(chars[i]);
    }
  return returnstring;
}

// ROT13 - there is a difference between a "b" and a "B".
// You can fix that if you like. 
char rot13(char letter){
  char transcribed;
  switch(letter){
    case'a': transcribed = 'n'; break;
    case'b': transcribed = 'o'; break;
    case'c': transcribed = 'p'; break;
    case'd': transcribed = 'q'; break;
    case'e': transcribed = 'r'; break;
    case'f': transcribed = 's'; break;
    case'g': transcribed = 't'; break;
    case'h': transcribed = 'u'; break;
    case'i': transcribed = 'v'; break;
    case'j': transcribed = 'w'; break;
    case'k': transcribed = 'x'; break;
    case'l': transcribed = 'y'; break;
    case'm': transcribed = 'z'; break;
    case'n': transcribed = 'a'; break;
    case'o': transcribed = 'b'; break;
    case'p': transcribed = 'c'; break;
    case'q': transcribed = 'd'; break;
    case'r': transcribed = 'e'; break;
    case's': transcribed = 'f'; break;
    case't': transcribed = 'g'; break;
    case'u': transcribed = 'h'; break;
    case'v': transcribed = 'i'; break;
    case'w': transcribed = 'j'; break;
    case'x': transcribed = 'k'; break;
    case'y': transcribed = 'l'; break;
    case'z': transcribed = 'm'; break;
    default: transcribed = ' '; break;
  }
  return transcribed;
}
  
