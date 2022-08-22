//3.constant
const int const_var = 2;

void setup() {
  // put your setup code here, to run once:
  //1.Serial Monitor
  Serial.begin(9600);
  Serial.println("Hello first line" );
  Serial.println("Hello" );

  //8.Digital Inputs and Outputs 
  //Refer to projects 1-3

  //9.Analog Inputs
  //Refer to project 4

  //10.Analog Outputs(PWM)
  //Refer to project 5
}

void loop() {
  // put your main code here, to run repeatedly:
  //1.Serial Monitor
  Serial.println(millis());//no of milli sec since the arduino is powered
  delay(1000);//in miilisec

  //2.Data Types
  byte byte_var = 10; //1 byte
  int inetger;//2 bytes
  unsigned int unsigned_int_var;//2 bytes (unsigned int)
  word word_var;//2 bytes (unsigned int)
  long long_var;//4 bytes

  char char_var;//1 byte

  boolean bool_var_true = true;
  boolean bool_var_false = false;

  //3.constant

  //4.if
  int var_if = 10;
  if (var_if >= 0) {
    Serial.println("Postive");
  }
  else Serial.println("Negative");

  //5.Switch Statment
  int button_pressed = 1;
  switch (button_pressed) {
    case 1:
      Serial.println("Button 1 is pressed");
      break;

    case 2:
      Serial.println("Button 2 is pressed");
      break;

    default://deafult is optional
      Serial.println("No button is pressed");
      break;
  }


  //6.while loop
  int counter = 10;
  while (counter >= 0) {
    Serial.println("More than oe eqaul to 0");
    counter--;
  }

  //7.for loop
  for (int i = 0; i < 10; i++) {
    Serial.println(i);
  }


  //11.Functions
  Serial.println(do_a_cal(1, 9));
}


//Functions
//naming_rule ==> aA0-9
int do_a_cal(int x, int y) {
  return x + y;
}
