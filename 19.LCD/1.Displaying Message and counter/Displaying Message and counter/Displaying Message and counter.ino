//include library
#include <LiquidCrystal.h>

//intialize
LiquidCrystal lcd(12,11,5,4,3,2);//(Reset,Enable,D4,D5,D6,D7)
//in case of 8 bit mode (Reset,Enable,D0,D1,D2,D2,D4,D5,D6,D7)
void setup() {
  //set up the LCD's number of colums and rows
  lcd.begin(16,2);
  //print message
  lcd.print("Hello, world!");
}

void loop() {
  // set cursor ro col 0 and line 1
  lcd.setCursor(0,1);

  //print no of the seconds passed since reset
  lcd.print(millis()/1000);
}
