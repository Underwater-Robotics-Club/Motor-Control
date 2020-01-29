//some attempt at initializing physical push buttons to
//activate designated motors
const int buttonPin1 = 13;
const int buttonPin2 = 12;

//some attempt at initializing each individual motor
//and pairing them with PWM values from arduino mega
//B1-4: Bottom 4 motors
//T1-8: Top 8 Motors
int B3 = 3; 
int B2 = 3;
int B4 = 5;
int B1 = 5;
int T2 = 6;
int T1 = 6;
int T4 = 9;
int T3 = 9;
int T6 = 10;
int T5 = 10;
int T8 = 11;
int T7 = 11;

//Some attempt at setting initial button states to 0
//while buttons are pressed, buttonstate should go to 1
int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;

void setup() 
{
 pinMode(buttonPin1, INPUT);
 pinMode(buttonPin2, INPUT);

//SHIELD 1: B2,B3
//SHIELD 2: B1,B4
//SHIELD 3: T2,T1
//SHIELD 4: T4,T3
//SHIELD 5: T6,T5
//SHIELD 6: T8,T7

 //Setup Shield 1, Channel A
  pinMode(22,OUTPUT); //Initiates Motor Channel A pin Direction
  pinMode(24,OUTPUT); //Initiates Brake Channel A pin
  pinMode(B1, OUTPUT); //initiates Motor Channel A pin speed
  
  //Setup Shield 1, Channel B
  pinMode(26, OUTPUT); //Initiates Motor Channel B pin Direction
  pinMode(28, OUTPUT); //Initiates Brake Channel B pin
  pinMode(B2, OUTPUT); //initiates Motor Channel B pin speed

//    //Setup Shield 2, Channel A
//  pinMode(30,OUTPUT); //Initiates Motor Channel A pin Direction
//  pinMode(32,OUTPUT); //Initiates Brake Channel A pin
//  pinMode(B3, OUTPUT); //initiates Motor Channel A pin speed
//  
//  //Setup Shield 2, Channel B
//  pinMode(34, OUTPUT); //Initiates Motor Channel B pin Direction
//  pinMode(36, OUTPUT); //Initiates Brake Channel B pin
//  pinMode(B4, OUTPUT); //initiates Motor Channel B pin speed
//
//  //Setup Shield 3, Channel A
//  pinMode(38,OUTPUT); //Initiates Motor Channel A pin Direction
//  pinMode(40,OUTPUT); //Initiates Brake Channel A pin
//  pinMode(T1, OUTPUT); //initiates Motor Channel A pin speed
//  
//  //Setup Shield 3, Channel B
//  pinMode(42, OUTPUT); //Initiates Motor Channel B pin Direction
//  pinMode(44, OUTPUT); //Initiates Brake Channel B pin
//  pinMode(T2, OUTPUT); //initiates Motor Channel B pin speed
//
//    //Setup Shield 4, Channel A
//  pinMode(46,OUTPUT); //Initiates Motor Channel A pin Direction
//  pinMode(48,OUTPUT); //Initiates Brake Channel A pin
//  pinMode(T3, OUTPUT); //initiates Motor Channel A pin speed
//  
//  //Setup Shield 4, Channel B
//  pinMode(50, OUTPUT); //Initiates Motor Channel B pin Direction
//  pinMode(52, OUTPUT); //Initiates Brake Channel B pin
//  pinMode(T4, OUTPUT); //initiates Motor Channel B pin speed
//
//  //Setup Shield 5, Channel A
//  pinMode(31,OUTPUT); //Initiates Motor Channel A pin Direction
//  pinMode(51,OUTPUT); //Initiates Brake Channel A pin
//  pinMode(T5, OUTPUT); //initiates Motor Channel A pin speed
//  
//  //Setup Shield 5, Channel B
//  pinMode(41, OUTPUT); //Initiates Motor Channel B pin Direction
//  pinMode(49, OUTPUT); //Initiates Brake Channel B pin
//  pinMode(T6, OUTPUT); //initiates Motor Channel B pin speed
//
//  //Setup Shield 6, Channel A
//  pinMode(35,OUTPUT); //Initiates Motor Channel A pin Direction
//  pinMode(53,OUTPUT); //Initiates Brake Channel A pin
//  pinMode(T7, OUTPUT); //initiates Motor Channel A pin speed
//  
//  //Setup Shield 6, Channel B
//  pinMode(39, OUTPUT); //Initiates Motor Channel B pin Direction
//  pinMode(47, OUTPUT); //Initiates Brake Channel B pin
//  pinMode(T8, OUTPUT); //initiates Motor Channel B pin speed

}

void loop() {
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);

  if (buttonState1 == HIGH)
  {
    digitalWrite(26, HIGH); //Establishes forward direction of B3
      digitalWrite(28, LOW);   //Disengage the Brake for Channel B3
      analogWrite(B3, 255);

      digitalWrite(22, HIGH); //Establishes forward direction of B2
      digitalWrite(24, LOW);   //Disengage the Brake for B2
      analogWrite(B2, 255);

        digitalWrite(34, HIGH); //Establishes forward direction of Channel B, Shield 2
      digitalWrite(36, LOW);   //Disengage the Brake for Channel B, Shield 2
      analogWrite(B4, 255);

      digitalWrite(30, HIGH); //Establishes forward direction of Channel A, Shield 2
      digitalWrite(32, LOW);   //Disengage the Brake for Channel A, Shield 2
      analogWrite(B1, 255);

       delay(500);
  }
  
  else {
//    if (buttonState2 == HIGH)
//  {
//    digitalWrite(26, LOW); //Establishes forward direction of Channel B, Shield 1
//      digitalWrite(28, LOW);   //Disengage the Brake for Channel B, Shield 1
//      analogWrite(B3, 255);
//
//      digitalWrite(22, LOW); //Establishes forward direction of Channel A, Shield 1
//      digitalWrite(24, LOW);   //Disengage the Brake for Channel A, Shield 1
//      analogWrite(B2, 255);
//
//        digitalWrite(34, LOW); //Establishes forward direction of Channel B, Shield 2
//      digitalWrite(36, LOW);   //Disengage the Brake for Channel B, Shield 2
//      analogWrite(B4, 255);
//
//      digitalWrite(30, LOW); //Establishes forward direction of Channel A, Shield 2
//      digitalWrite(32, LOW);   //Disengage the Brake for Channel A, Shield 2
//      analogWrite(B1, 255);
//
//      delay(500);
//  }
//  else {
//    if (buttonState3 == HIGH)
//  {
//    digitalWrite(26, LOW); //Establishes forward direction of B3
//      digitalWrite(28, LOW);   //Disengage the Brake for B3
//      analogWrite(B3, 255);
//
//      digitalWrite(22, LOW); //Establishes forward direction of B2
//      digitalWrite(24, LOW);   //Disengage the Brake for B2
//      analogWrite(B2, 255);
//
//        digitalWrite(34, HIGH); //Establishes forward direction of B4
//      digitalWrite(36, LOW);   //Disengage the Brake for B4
//      analogWrite(B4, 255);
//
//      digitalWrite(30, HIGH); //Establishes forward direction of B1
//      digitalWrite(32, LOW);   //Disengage the Brake for B1
//      analogWrite(B1, 255);
//
//      delay(500);
//      }
      
//      else 
//      {
    analogWrite(B2,0);
      analogWrite(B3, 0);
      analogWrite(B4,0);
      analogWrite(B1, 0);

      delay(500);
  }
  }
//  }
//}
