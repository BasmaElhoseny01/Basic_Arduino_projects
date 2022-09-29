int X_axis = A3;
int Y_axis = A2;
int Z_axis = A1;

int x, y, z;        

void setup() {
  // put your setup code here, to run once:
  analogReference(EXTERNAL);  //using Vref as ref not 5v


  Serial.begin(9600);

  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:

  x = analogRead(X_axis);  // read analog input pin 0
  y = analogRead(Y_axis);  // read analog input pin 1
  z = analogRead(Z_axis);  // read analog input pin 1

  Serial.print(x);     // print the raw value in the X axis
  Serial.print("\t");  // prints a tab between the numbers
  Serial.print(y);     // print the raw value in the Y axis
  Serial.print("\t");  // prints a tab between the numbers
  Serial.print(z);     // print the raw value in the Z axis
  Serial.println();

  delay(100);  // wait 100ms for next reading
}