#include "thermistor.h"

//Analog Pin we Read from
#define THERMISTORPIN A1

//Thermistor Obj
//he kept modifying 12000 and 1000 untill eading is near to that appearing on the voltmeter he is using to measure temp of room
THERMISTOR thermistor(THERMISTORPIN,  //Analog Pin
                      12000,          //Normal resistance of thr termistort @ 25 C
                      3950,           //Thermistor's beta cofficient
                      10000           //value of series resistor
);

void setup() {
  Serial.begin(9600);
}

void loop() {
  float temp = thermistor.read();  //read temprature

  Serial.print("Temp in 1/10 C: ");
  Serial.println(temp);

    delay(5000);
}