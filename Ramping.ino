
//#include <Servo.h>
//Servo myServo;
const int switchPin = 2; // the number of the switch pin
const int motorPin =  5; // the number of the motor pin

int switchState = 0;  // variable for reading the switch's status

void setup() {
  // initialize the motor pin as an output:
  pinMode(motorPin, OUTPUT);     
  // initialize the switch pin as an input:
  pinMode(switchPin, INPUT);   
//  myServo.attach(10); 
}

void loop(){
  // read the state of the switch value:
  switchState = digitalRead(switchPin);

if (switchState == LOW) {
   digitalWrite(motorPin, LOW);
   delay(30);
  }
 
if (switchState == HIGH) { 
//    myServo.write(90);   
//    delay(2000);   
    for(int motorValue = 0 ; motorValue <= 255; motorValue +=1){
    analogWrite(motorPin, motorValue);
    delay(30);

     while(analogRead(motorValue) > 10 )
     {
       if(digitalRead(switchPin) == LOW)
       {
         break;
        }
      }
    }
  }
}
