#ifndef Obfuscate_h
#define Obfuscate_h
# include "Arduino.h"

class Obfuscate
{
  public:
    Obfuscate();
	String parser(String message);
	char roter(char letter);
};
#endif