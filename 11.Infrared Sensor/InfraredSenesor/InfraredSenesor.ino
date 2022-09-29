int ledPin   = 4;       // choose the pin for the LED
int inputPin = 3;      // choose the input pin (for PIR sensor)
int pirState = LOW;    // we start, assuming no motion detected
int val      = 0;      // variable for reading the pin status

//the time we give the sensor to calibrate (10-60 secs according to the datasheet)
int calibrationTime = 30; //This time is in seconds
 
void setup() {
  pinMode(ledPin, OUTPUT);      // declare LED as output
  pinMode(inputPin, INPUT);     // declare sensor as input
 
  Serial.begin(9600);
  Serial.println("Waiting for the sensor to warm up.");
//  delay(calibrationTime * 1000); // Convert the time from seconds to milliseconds.
  Serial.println("SENSOR ACTIVE");
}
 
void loop(){
  val = digitalRead(inputPin);  // read input value

  if (val == HIGH) {            // check if the input is HIGH
    digitalWrite(ledPin, HIGH);  // turn LED ON
    if (pirState == LOW) {
      // we have just turned on
      Serial.println("Motion detected!");
      // We only want to print on the output change, not state
      pirState = HIGH;
    }
  } else {
    digitalWrite(ledPin, LOW); // turn LED OFF
    if (pirState == HIGH){
      // we have just turned off
      Serial.println("Motion ended!");
      // We only want to print on the output change, not state
      pirState = LOW;
    }
  }
  delay(1000);
}