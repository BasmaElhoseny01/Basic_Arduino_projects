#define RED_LED 3
#define GREEN_LED 5
#define BLUE_LED 10



void setup() {
  // put your setup code here, to run once:
  pinMode(RED_LED,OUTPUT);
  pinMode(GREEN_LED,OUTPUT);
  pinMode(BLUE_LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Method 1
  analogWrite(RED_LED,255);
   analogWrite(GREEN_LED,0);
  analogWrite(BLUE_LED,0);
  delay(1000);
    analogWrite(RED_LED,0);
   analogWrite(GREEN_LED,255);
  analogWrite(BLUE_LED,0);
  delay(1000);
    analogWrite(RED_LED,0);
   analogWrite(GREEN_LED,0);
  analogWrite(BLUE_LED,255);
  delay(1000);
  //mixed
  analogWrite(RED_LED,255);
  analogWrite(RED_LED,255);
  analogWrite(RED_LED,255);
    delay(1000);

analogWrite(RED_LED,123);
  analogWrite(GREEN_LED,50);
  analogWrite(BLUE_LED,2);
 delay(1000);
}
