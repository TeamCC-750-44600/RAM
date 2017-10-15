#include <LiquidCrystal.h>

LiquidCrystal lcd (12, 11, 5, 4, 3, 2);

void setup() {
  
}

void loop() {
 lcd.begin (16, 2);
 lcd.print ("Help! Circuits");
 lcd.setCursor (0,1);
 lcd.print ("running slow...");
 lcd.clear();
}



