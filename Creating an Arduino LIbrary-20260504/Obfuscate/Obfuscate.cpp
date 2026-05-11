#include "Arduino.h"
#include "Obfuscate.h"

Obfuscate::Obfuscate()
{
}

String Obfuscate::parser(String message)
  {
    String returnstring;
    int charsLength = message.length() + 1;
    char chars[charsLength];
    message.toCharArray(chars, charsLength);
  
    for (int i = 0; i <= charsLength; i++)
    {
      returnstring = returnstring + roter(chars[i]);
      }
    return returnstring;
  }

  char Obfuscate::roter(char letter){
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
