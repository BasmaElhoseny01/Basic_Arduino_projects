#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);  //(address of the i2c packback that we will use,col,row)
//Note in the PackBack I2C there is an opti on to change the addrss of it if there another device with the same address so we change it but by default it is 0x27
void setup() {
  // put your setup code here, to run once:
  lcd.clear();
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Hello Basma :)");
  lcd.setCursor(0, 1); 
  lcd.print("Row number: ");
  lcd.setCursor(12, 1);
  lcd.print("2");
}

void loop() {
  // put your main code here, to run repeatedly:
}