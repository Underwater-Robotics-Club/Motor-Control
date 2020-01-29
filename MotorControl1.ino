int motorPin1 = 11; 
int motorPin2 = 3;

void setup()
{
  //Setup Channel A
  pinMode(12,OUTPUT); //Initiates Motor Channel A pin Direction
  pinMode(9,OUTPUT); //Initiates Brake Channel A pin
  pinMode(motorPin2, OUTPUT); //initiates Motor Channel B pin speed
  
  //Setup Channel B
  pinMode(13, OUTPUT); //Initiates Motor Channel B pin Direction
  pinMode(8, OUTPUT); //Initiates Brake Channel B pin
  pinMode(motorPin1, OUTPUT); //initiates Motor Channel B pin speed
}

void loop()
{
  if (Serial.available())
  {
    Parameter = Serial.read();
    
    if (Parameter =='w')
    {
      digitalWrite(13, HIGH); //Establishes forward direction of Channel B
      digitalWrite(8, LOW);   //Disengage the Brake for Channel B
      analogWrite(motorPin1, 255);

      digitalWrite(12, HIGH); //Establishes forward direction of Channel B
      digitalWrite(9, LOW);   //Disengage the Brake for Channel B
      analogWrite(motorPin2, 255);

      delay(1000);
    }
  }
}
