#include "Arduino.h"
#include "HelloWorld.h"

HelloWorld::HelloWorld()
{
}

void HelloWorld::hiThere()
{
	Serial.println("Hello World from inside a library!");
	} 