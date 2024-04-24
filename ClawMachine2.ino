#include <Servo.h>

// Define the servo pin
#define SERVO_PIN 9

//Create software serial object to communicate with HC-08
//SoftwareSerial mySerial(3, 2); //HC-05 Tx & Rx is connected to Arduino #3 & #2

//const byte numChars = 6;
//char receivedChars[numChars];   // an array to store the received data
//char tempChars[numChars];

//char botDirection[1] = {0};
int botSpeed = 0;
int motorSpeed = 0;

boolean newData = false;

// Create a servo object
Servo servo;
/********************************************************************************/
const int AIN1 = 13;           
const int AIN2 = 12;           
const int PWMA = 11;           

//const int PWMB = 10;           
//const int BIN2 = 9;           
//const int BIN1 = 8;         

const int driveTime = 20;                              
const int turnTime = 8;                                  

float duration, distance; 

String botDirection;         
String speed;                  

/********************************************************************************/

void setup() 
{
  Serial.begin(9600);         //Default Baud Rate for software serial communications
  /*****************************************************************************/

  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(PWMA, OUTPUT);

  // Attach the servo to the specified pin
  servo.attach(SERVO_PIN);      

  Serial.println("Enter a direction.");
  Serial.println("F = forward, B = backward, R = right, L = left");
  Serial.println("Example command: F");

  //  pinMode(trigPin, OUTPUT);  
  //	pinMode(echoPin, INPUT);  
}

/********************************************************************************/

void loop() 
{
  if (digitalRead(2) == HIGH)
  {                                           
    //if (Serial.available() > 0)                         
    //{
      //botDirection = Serial.readStringUntil(' '); 
      botDirection = "D";              
      Serial.print(botDirection);

      int mSpeed = 200;

      
      if (botDirection == "D")                         
      {
        servo.write(0);//open claw (set servo angle)
        delay(1000);
        MotorZ(mSpeed);    //lower claw 
        delay(1100);           //insert time to reach bottom
        MotorZ(0);         //stop
        delay(1000);
        servo.write(12); //close claw (set servo angle) 
        delay(1000);
        MotorZ(-mSpeed);    
        delay(1250);                                      
      }
  }
  else                              
    {
      MotorZ(0);
      //servo.write(0);
    }
    //}
}

/********************************************************************************/


/********************************************************************************/
void MotorZ(int motorSpeed)                       
{
  if (motorSpeed > 0)                                 
  {
    digitalWrite(AIN1, HIGH);                         
    digitalWrite(AIN2, LOW);                          
  }
  else if (motorSpeed < 0)                            
  {
    digitalWrite(AIN1, LOW);                          
    digitalWrite(AIN2, HIGH);                         
  }
  else                                                
  {
    digitalWrite(AIN1, LOW);                          
    digitalWrite(AIN2, LOW);                          
  }
  analogWrite(PWMA, abs(motorSpeed));                 
}

/********************************************************************************/
void Servo(int motorSpeed)                       
{
                  
}