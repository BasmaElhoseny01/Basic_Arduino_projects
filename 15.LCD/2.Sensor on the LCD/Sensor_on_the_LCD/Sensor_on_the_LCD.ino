#include <LiquidCrystal.h>
#include "DHT.h"

#define DHTPIN 7  //pin is connected to pin 7
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

//intilaize the LCD library
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // put your setup code here, to run once:
  //set no of columns & rows of the LCD
  lcd.begin(16, 2);
  lcd.print("DHT test");

  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);

  float h = dht.readHumidity();
  float t = dht.readTemperature();
  //check if the readings are valid else there is sth wrong
  if (isnan(t) || isnan(h)) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Can't get reading");
    lcd.setCursor(0, 1);
    lcd.print("from DHT");

  } else {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Hum: ");
    lcd.print(h);
    lcd.print(" %");
    lcd.setCursor(0, 1);
    lcd.print("Temp: ");
    lcd.print(t);
    lcd.print(" *C");
  }
}