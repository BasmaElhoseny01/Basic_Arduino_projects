void setup() {
  // put your setup code here, to run once:

  pinMode(6,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //Reading of the potentiometer
  int InputVoltage=analogRead(A3);

  //map 0-1023 to 0-255
  int LED_Value=map(InputVoltage,0,1023,0,255);

  //output value to LED
  analogWrite(6,LED_Value);

}
