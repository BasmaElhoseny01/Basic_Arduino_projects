#include <TinyWireM.h>
#include <Adafruit_TinyMCP23017.h>
#include <Adafruit_TinyRGBLCDShield.h>

//creating object
Adafruit_TinyRGBLCDShield lcd = Adafruit_TinyRGBLCDShield();

#define RED 0x1
#define YELLOW 0x3
#define GREEN 0x2
#define TEAL 0x6
#define BLUE 0x4
#define VIOLET 0x5
#define WHITE 0x7

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  //set up the LCD with the dimenions
  lcd.begin(16, 2);
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0, 1);
  lcd.print(millis() / 1000);

  uint8_t buttons = lcd.readButtons();  //unsigned int to read the buttons

  if (buttons)  //valid not zero
  {
    lcd.clear();
    lcd.setCursor(0, 0);
    if (buttons & BUTTON_UP) {
      lcd.print("UP");
      lcd.setBacklight(RED);
    }
    if (buttons & BUTTON_DOWN) {
      lcd.print("DOWN");
      lcd.setBacklight(YELLOW);
    }
    if (buttons & BUTTON_LEFT) {
      lcd.print("LEFT");
      lcd.setBacklight(GREEN);
    }
    if (buttons & BUTTON_RIGHT) {
      lcd.print("RIGHT");
      lcd.setBacklight(TEAL);
    }
    if (buttons & BUTTON_SELECT) {
      lcd.print("SELECT");
      lcd.setBacklight(VIOLET);
    }
  }
}