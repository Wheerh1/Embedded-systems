class Converter
{
  public:
  Converter();
  void convertXtoY(String unit1, String unit2, double amount);
  // void meterFeet();
  // void mileFeet();
   void squareArea(double side1, double side2, String unit);
};
Converter::Converter()
{
}
void Converter::convertXtoY(String unit1, String unit2, double amount)
{
  double output;
  double input = amount;
  if ((unit1 == "meters" || unit1 == "metre") && (unit2 == "miles" || unit2 == "mile")){
    output = amount / 1609;
  }
  else if ((unit2 == "meters" || unit2 == "metre") && (unit1 == "miles" || unit1 == "mile")){
    output = amount * 1609;
  }
  else if ((unit1 == "meters" || unit1 == "metre") && (unit2 == "feet" || unit2 == "foot")){
    output = amount * 3.281;
  }
  else if ((unit2 == "meters" || unit2 == "metre") && (unit1 == "feet" || unit1 == "foot")){
    output = amount / 3.281;
  }
  else if ((unit1 == "miles" || unit1 == "mile") && (unit2 == "feet" || unit2 == "foot")){
    output = amount * 5280;
  }
  else if ((unit2 == "miles" || unit2 == "mile") && (unit1 == "feet" || unit1 == "foot")){
    output = amount / 5280;
  };
    Serial.print(input);
    Serial.print(" ");
    Serial.print(unit1);
    Serial.print(" is ");
    Serial.print(output);
    Serial.print(" ");
    Serial.println(unit2);
}
void Converter::squareArea(double side1, double side2, String unit){
 double area = side1 * side2;
 double output;
 if (unit == "hectares" || unit == "hectare"){
  output = area / 10000;
 }
 else if(unit == "acre" || unit == "acres"){
  output = area / 4047;
 };
 Serial.print("the "+unit+" of the area is ");
 Serial.println(output);
}



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  delay(1000);
  // put your main code here, to run repeatedly:
  //Converter().convertXtoY("metre","mile", 2000);
  //Converter().convertXtoY("foot", "mile", 2500);
  Converter().squareArea(10, 10, "acre");
}
