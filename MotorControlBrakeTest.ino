int S1CB = 3; 
int S1CA = 3;
int S2CB = 5;
int S2CA = 5;
int S3CB = 6;
int S3CA = 6;
int S4CB = 10;
int S4CA = 10; 
// char Parameter;

void setup()
{
  //Setup Shield 1, Channel A
  pinMode(22,OUTPUT); //Initiates Motor Channel A pin Direction
  pinMode(24,OUTPUT); //Initiates Brake Channel A pin
  pinMode(S1CA, OUTPUT); //initiates Motor Channel A pin speed
  
  //Setup Shield 1, Channel B
  pinMode(26, OUTPUT); //Initiates Motor Channel B pin Direction
  pinMode(28, OUTPUT); //Initiates Brake Channel B pin
  pinMode(S2CB, OUTPUT); //initiates Motor Channel B pin speed

    //Setup Shield 2, Channel A
  pinMode(30,OUTPUT); //Initiates Motor Channel A pin Direction
  pinMode(32,OUTPUT); //Initiates Brake Channel A pin
  pinMode(S2CA, OUTPUT); //initiates Motor Channel A pin speed
  
  //Setup Shield 2, Channel B
  pinMode(34, OUTPUT); //Initiates Motor Channel B pin Direction
  pinMode(36, OUTPUT); //Initiates Brake Channel B pin
  pinMode(S1CB, OUTPUT); //initiates Motor Channel B pin speed

    //Setup Shield 3, Channel A
//  pinMode(38,OUTPUT); //Initiates Motor Channel A pin Direction
//  pinMode(40,OUTPUT); //Initiates Brake Channel A pin
//  pinMode(S3CA, OUTPUT); //initiates Motor Channel A pin speed
//  
//  //Setup Shield 3, Channel B
//  pinMode(42, OUTPUT); //Initiates Motor Channel B pin Direction
//  pinMode(44, OUTPUT); //Initiates Brake Channel B pin
//  pinMode(S3CB, OUTPUT); //initiates Motor Channel B pin speed
//
//    //Setup Shield 4, Channel A
//  pinMode(46,OUTPUT); //Initiates Motor Channel A pin Direction
//  pinMode(48,OUTPUT); //Initiates Brake Channel A pin
//  pinMode(S4CA, OUTPUT); //initiates Motor Channel A pin speed
//  
//  //Setup Shield 4, Channel B
//  pinMode(50, OUTPUT); //Initiates Motor Channel B pin Direction
//  pinMode(52, OUTPUT); //Initiates Brake Channel B pin
//  pinMode(S4CB, OUTPUT); //initiates Motor Channel B pin speed
}

void loop()
{
//  if (Serial.available())
//  {
//    Parameter = Serial.read();
//    
//    if (Parameter =='w')
//    {

// Sequence 1
      
      digitalWrite(26, HIGH); //Establishes forward direction of Channel B, Shield 1
      digitalWrite(28, LOW);   //Disengage the Brake for Channel B, Shield 1
      analogWrite(S1CB, 255);

      digitalWrite(22, HIGH); //Establishes forward direction of Channel A, Shield 1
      digitalWrite(24, HIGH);   //Disengage the Brake for Channel A, Shield 1
      analogWrite(S1CA, 255);

        digitalWrite(34, HIGH); //Establishes forward direction of Channel B, Shield 2
      digitalWrite(36, LOW);   //Disengage the Brake for Channel B, Shield 2
      analogWrite(S2CB, 255);

      digitalWrite(30, HIGH); //Establishes forward direction of Channel A, Shield 2
      digitalWrite(32, HIGH);   //Disengage the Brake for Channel A, Shield 2
      analogWrite(S2CA, 255);

      delay(5000);
      
      analogWrite(S1CA,0);
      analogWrite(S1CB, 0);
      analogWrite(S2CB,0);
      analogWrite(S2CA, 0);

      delay(5000);

// Sequence 2

//      digitalWrite(34, HIGH); //Establishes forward direction of Channel B
//      digitalWrite(36, LOW);   //Disengage the Brake for Channel B
//      analogWrite(S2CB, 255);
//
//      digitalWrite(30, HIGH); //Establishes forward direction of Channel A
//      digitalWrite(32, HIGH);   //Disengage the Brake for Channel A
//      analogWrite(S2CA, 255);
//
//      delay(5000);
//
//      analogWrite(S2CB,0);
//      analogWrite(S2CA, 0);
//
//      delay(5000);

// Sequence 3

//      digitalWrite(42, HIGH); //Establishes forward direction of Channel B
//      digitalWrite(44, LOW);   //Disengage the Brake for Channel B
//      analogWrite(S3CB, 255);
//
//      digitalWrite(38, HIGH); //Establishes forward direction of Channel A
//      digitalWrite(40, LOW);   //Disengage the Brake for Channel A
//      analogWrite(S3CA, 255);
//
//      delay(5000);
//
//      analogWrite(S3CB,0);
//      analogWrite(S3CA, 0);
//
//      delay(5000);
//
//// Sequence 4
//
//      digitalWrite(50, HIGH); //Establishes forward direction of Channel B
//      digitalWrite(52, LOW);   //Disengage the Brake for Channel B
//      analogWrite(S4CB, 255);
//
//      digitalWrite(46, HIGH); //Establishes forward direction of Channel A
//      digitalWrite(48, LOW);   //Disengage the Brake for Channel A
//      analogWrite(S4CA, 255);
//
//      delay(5000);
//
//      analogWrite(S4CB,0);
//      analogWrite(S4CA, 0);
//
//      delay(5000);
//
//      
    }
