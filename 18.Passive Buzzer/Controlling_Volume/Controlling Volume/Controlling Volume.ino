const int buzzer = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //tone(pin,frequency in HZ)
  //tone(pin,frequency in HZ,duration in millisec)
  tone(buzzer, 1000);
  delay(4000);  //4 sec
  noTone(buzzer);
  delay(1000);  //1 sec
}