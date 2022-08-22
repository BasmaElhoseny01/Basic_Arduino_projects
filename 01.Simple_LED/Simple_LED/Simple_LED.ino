void setup() {
  // put your setup code here, to run once:

  //Configure Digital Pins
  pinMode(8, OUTPUT); //The Ardunio outputs the value on it

}

void loop() {
  // put your main code here, to run repeatedly:

  //set state of the Digital Output pin
  digitalWrite(8, HIGH);
  delay(2000);//in millisec
  digitalWrite(8, LOW);
  delay(2000);//in millisec

}
