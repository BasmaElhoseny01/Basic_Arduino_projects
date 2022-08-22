void setup() {
  // put your setup code here, to run once:
  //wait till the serial monitor is openned
  Serial.begin(9600);
  while (!Serial) {
    ;
  }
  Serial.println("Photoresistor:");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(A1));
  delay(10);
}