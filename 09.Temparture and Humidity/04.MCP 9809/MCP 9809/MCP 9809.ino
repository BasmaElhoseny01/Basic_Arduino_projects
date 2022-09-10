#include <Wire.h>
#include "Adafruit_MCP9808.h"

//create MCP9808 Temp Sensor
Adafruit_MCP9808 tempsensor = Adafruit_MCP9808();


void setup() {
  Serial.begin(9600);
  Serial.println("MCP9808 demo");

    //make sure the sesnor is found
    if (!tempsensor.begin()) {
    Serial.println("Couldn't find MCP9808!");
    while (1)
      ;
  }
}


void loop() {
  //Read temp from sensor
  float c = tempsensor.readTempC();
  //convert to F
  float f = c * 9.0 / 5.0 + 32;

  Serial.print("Temp: ");
  Serial.print(c);
  Serial.print("*C\t");
  Serial.print(f);
  Serial.println("*F");
  delay(250);

  Serial.println("Shutdown MCP9808.... ");
  tempsensor.shutdown_wake(1);  // shutdown MSP9808 - power consumption ~0.1 mikro Ampere

  delay(2000);

  Serial.println("wake up MCP9808.... ");  // wake up MSP9808 - power consumption ~200 mikro Ampere
  tempsensor.shutdown_wake(0);
}