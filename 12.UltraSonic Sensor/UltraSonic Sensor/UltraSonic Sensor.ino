#define triggerpin 12
#define echopin 13

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(triggerpin, OUTPUT);
  pinMode(echopin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(triggerpin, LOW);
  delayMicroseconds(2);  //2Microsec LOW so that the comming high signal is clear
  digitalWrite(triggerpin, HIGH);
  delayMicroseconds(10);  //10Microsecs
  digitalWrite(triggerpin, LOW);

  //Measure duration of the echo pulse
  long duration = pulseIn(echopin, HIGH);
  long distance = (duration / 2) * 0.3435;  //for calcuation refer to the Notes section in the  readme file

  if (distance >= 200 || distance <= 0) {
    Serial.println("Distance is out of range");
  } else {
    Serial.print(distance);
    Serial.println("cm");
  }
}