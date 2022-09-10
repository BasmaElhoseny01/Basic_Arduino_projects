#define SensorPin A1

float supply_voltage = 5;  // 3.3; //If you are useing a 3.3V supply voltage, change this accordingly.
void setup() {

  // analogReference(EXTERNAL); // If using 3.3V as reference by bridging it to the AREF pin,
  // then uncomment this line. If using 5V then this is not necessary.
  Serial.begin(9600);  // Start the serial connection with the computer
                       // to view the result open the serial monitor
}

void loop() {
  // put your main code here, to run repeatedly:

  int reading = analogRead(SensorPin);  //[0-1023]

  //convert raeding to Volatge [0-5v] or [0-3.3]
  // @0 =>0v
  //1023=>5v
  //reading=>volt
  float voltage = reading * supply_voltage / 1024;


  float temperatureC = (voltage - 0) * 100;  //converting from 10 mv per degree with 0 mV offset
                                             //to degrees ((voltage - 0) times 100)
  Serial.print(temperatureC);
  Serial.println(" degrees C");

  // now convert to Fahrenheit
  float temperatureF = (temperatureC * 9.0 / 5.0) + 32.0;
  Serial.print(temperatureF);
  Serial.println(" degrees F");

  delay(1000);  //waiting a second
}