
const int M1 = 3;
const int M2 = 3;
const int M3 = 5;
const int M4 = 5;
const int M5 = 6;
const int M6 = 6;
const int M7 = 9;
const int M8 = 9;
const int M9 = 10;
const int M10 = 10;
const int M11 = 11;
const int M12 = 11;

const int buttonpin1 = ;
const int buttonpin2 = ;
const int buttonpin3 = ;
const int buttonpin4 = ;
const int buttonpin5 = ;
const int buttonpin6 = ;
const int buttonpin7 = ;
const int buttonpin8 = ;
const int buttonpin9 = ;
const int buttonpin10 = ;
const int buttonpin11 = ;
const int buttonpin12 = ;

int buttonstate1 = ;
int buttonstate2 = ;
int buttonstate3 = ;
int buttonstate4 = ;
int buttonstate5 = ;
int buttonstate6 = ;
int buttonstate7 = ;
int buttonstate8 = ;
int buttonstate9 = ;
int buttonstate10 = ;
int buttonstate11 = ;
int buttonstate12 = ;

int DUp = ;
int DDown = ;
int SpinCW = ;
int SpinCCW = ;
int DRight = ;
int DLeft = ;
int DForward = ;
int DBackward = ;

void setup() 
{
  pinMode(DUp, INPUT);
  pinMode(DDown, INPUT);
  pinMode(SpinCW, INPUT);
  pinMode(SpinCCW, INPUT);
  pinMode(DLeft, INPUT);
  pinMode(DRight, INPUT);
  pinMode(DForward, INPUT);
  pinMode(DBackward, INPUT);

  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  pinMode(buttonPin4, INPUT);
  pinMode(buttonPin5, INPUT);
  pinMode(buttonPin6, INPUT);
  pinMode(buttonPin7, INPUT);
  pinMode(buttonPin8, INPUT);
  pinMode(buttonPin9, INPUT);
  pinMode(buttonPin10, INPUT);
  pinMode(buttonPin11, INPUT);
  pinMode(buttonPin12, INPUT);

//  SHIELD 1: M1, M2
//  SHIELD 2: M3, M4
//  SHIELD 3: M5, M6
//  SHIELD 4: M7, M8
//  SHIELD 5: M9, M10
//  SHIELD 6: M11, M12

//  Setup Shield 1, Channel A
//  pinMode(22,OUTPUT); //Initiates Motor Channel A pin Direction
//  pinMode(24,OUTPUT); //Initiates Brake Channel A pin
//  pinMode(B1, OUTPUT); //initiates Motor Channel A pin speed
  
//  Setup Shield 1, Channel B
//  pinMode(26, OUTPUT); //Initiates Motor Channel B pin Direction
//  pinMode(28, OUTPUT); //Initiates Brake Channel B pin
//  pinMode(B2, OUTPUT); //initiates Motor Channel B pin speed

//  //Setup Shield 2, Channel A
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
//  //Setup Shield 4, Channel A
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

  Serial.begin(9600);
}

void loop() {
  if( digitalRead(DDown) == LOW)
  {
    for (int motorValue = 0 ; motorValue <= 255; motorValue +=5) 
    {
    //Establishes forward direction of Channel B
      digitalWrite(22, HIGH); 
    //Activates Motors 5-12 according to ramped PWM value 
      analogWrite(M5, motorValue);
      analogWrite(M6, motorValue);
      analogWrite(M7, motorValue);
      analogWrite(M8, motorValue);
      analogWrite(M9, motorValue);
      analogWrite(M10, motorValue);
      analogWrite(M11, motorValue);
      analogWrite(M12, motorValue); 

      while(analogRead(motorValue) > 50 )
     {
       if(digitalRead(DDown) == HIGH)
       {
         break;
       }
     }
   }
  }
  
  else if( digitalRead(DUp) == LOW){
    for (int motorValue = 0 ; motorValue <= 255; motorValue +=5) 
    {
    //Establishes Backward direction of Channel B  
      digitalWrite(22, LOW);
    //Activates Motors 5-12 according to ramped PWM value 
      analogWrite(M5, motorValue);
      analogWrite(M6, motorValue);
      analogWrite(M7, motorValue);
      analogWrite(M8, motorValue);
      analogWrite(M9, motorValue);
      analogWrite(M10, motorValue);
      analogWrite(M11, motorValue);
      analogWrite(M12, motorValue); 

      while(analogRead(motorValue) > 50 )
     {
       if(digitalRead(DUp) == HIGH)
       {
         break;
        }
      }
   }
  }
  
  else if( digitalRead(DRight) == LOW){
    for (int motorValue = 0 ; motorValue <= 255; motorValue +=5) 
    {
    //Establishes Backward direction of Channel B  
      digitalWrite(22, LOW);
      digitalWrite(22, LOW);
      digitalWrite(22, LOW);
      digitalWrite(22, LOW);
      digitalWrite(22, HIGH);
      digitalWrite(22, HIGH);
      digitalWrite(22, HIGH);
      digitalWrite(22, HIGH);
    //Activates Motors 5-12 according to ramped PWM value 
      analogWrite(M5, motorValue);
      analogWrite(M6, motorValue);
      analogWrite(M7, motorValue);
      analogWrite(M8, motorValue);
      analogWrite(M9, motorValue);
      analogWrite(M10, motorValue);
      analogWrite(M11, motorValue);
      analogWrite(M12, motorValue); 

      while(analogRead(motorValue) > 50 )
     {
       if(digitalRead(DRight) == HIGH)
       {
         break;
        }
      }
   }
  }
  
  else if( digitalRead(DLeft) == LOW){
    for (int motorValue = 0 ; motorValue <= 255; motorValue +=5) 
    {
    //Establishes Backward direction of Channel B  
      digitalWrite(22, HIGH);
      digitalWrite(22, HIGH);
      digitalWrite(22, HIGH);
      digitalWrite(22, HIGH);
      digitalWrite(22, LOW);
      digitalWrite(22, LOW);
      digitalWrite(22, LOW);
      digitalWrite(22, LOW);
    //Activates Motors 5-12 according to ramped PWM value 
      analogWrite(M5, motorValue);
      analogWrite(M6, motorValue);
      analogWrite(M7, motorValue);
      analogWrite(M8, motorValue);
      analogWrite(M9, motorValue);
      analogWrite(M10, motorValue);
      analogWrite(M11, motorValue);
      analogWrite(M12, motorValue); 

      while(analogRead(motorValue) > 50 )
     {
       if(digitalRead(DLeft) == HIGH)
       {
         break;
        }
      }
   }
  }
}
