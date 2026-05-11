#ifndef classname_h
#define classname_h
#include <Arduino.h>
class Converter
{
  public:
  Converter();
  void convertXtoY(String unit1, String unit2, double amount);
  // void meterFeet();
  // void mileFeet();
   void squareArea(double side1, double side2, String unit);
};
#endif