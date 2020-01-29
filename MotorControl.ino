int motorPin1 = 3;
int motorPin2 = 3;
 
void setup()
{
  //Setup Channel A
  pinMode(20,OUTPUT); //Initiates Motor Channel A pin Direction
  pinMode(22,OUTPUT); //Initiates Brake Channel A pin
  pinMode(motorPin2, OUTPUT); //initiates Motor Channel B pin speed
  
  //Setup Channel B
  pinMode(21, OUTPUT); //Initiates Motor Channel B pin Direction
  pinMode(23, OUTPUT); //Initiates Brake Channel B pin
  pinMode(motorPin1, OUTPUT); //initiates Motor Channel B pin speed
}

void loop(){
  
    if (Serial.available())
  {
    int speed = Serial.parseInt();
    if (speed >= 0 && speed <= 255)
    
    {
      digitalWrite(20, HIGH); //Establishes forward direction of Channel B
      digitalWrite(22, LOW);   //Disengage the Brake for Channel B
      analogWrite(motorPin1, speed);

      digitalWrite(21, HIGH); //Establishes forward direction of Channel B
      digitalWrite(23, LOW);   //Disengage the Brake for Channel B
      analogWrite(motorPin2, speed);

      delay(1000);
    }
  }
  
  delay(1000);

}
