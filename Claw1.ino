// Code for Arduino 1 running Line Sensor, Motor X, and Motor Y, and controlled by app

//#include <SoftwareSerial.h>

//Create software serial object to communicate with HC-08
//SoftwareSerial mySerial(3, 2); //HC-05 Tx & Rx is connected to Arduino #3 & #2

//const byte numChars = 6;
//char receivedChars[numChars];   // an array to store the received data
//char tempChars[numChars];

//char botDirection[1] = {0};
int botSpeed = 0;
int motorSpeed = 0;

boolean newData = false;

/********************************************************************************/
const int AIN1 = 13;  // x motor         
const int AIN2 = 12;           
const int PWMA = 11;           

const int PWMB = 10;  // y motor       
const int BIN2 = 9;           
const int BIN1 = 8;  

const int coin = 3;  // declare variable for coin detection and assign it to digital pin

const int driveTime = 20;                              
const int turnTime = 8;                                  

float duration, distance; 

String botDirection;         

/********************************************************************************/

void setup() 
{
  
  Serial.begin(9600);

  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(PWMA, OUTPUT);

  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);
  pinMode(PWMB, OUTPUT);
  
  pinMode(coin, INPUT); // initialize coin as an input

  Serial.println("Enter a direction.");
  Serial.println("F = forward, B = backward, R = right, L = left");
  Serial.println("Example command: F");
}

void loop() 
{
  // if (digitalRead(coin) == HIGH)
  {
    if (Serial.available() > 0) 
    {
      botDirection = Serial.readStringUntil(' ');                 
      Serial.print(botDirection);

      int mSpeed = 200;

      if (botDirection == "R")                         
        {
          MotorX(mSpeed);                                    
        }

      else if (botDirection == "L")                   
        {
          MotorX(-mSpeed);                                                              
        }

      else if (botDirection == "B")                     
        {
          MotorY(mSpeed);                                                               
        }

      else if (botDirection == "F")                 
        {
          MotorY(-mSpeed);                                                              
        }

      else if ()
      {

      }
    }
    else
    {
      MotorX(0);
      MotorY(0);
    }
  }
  
}



/********************************************************************************/
void MotorX(int motorSpeed)                       
{
  Serial.println("MotorX");
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
void MotorY(int motorSpeed)                       
{
  if (motorSpeed > 0)                                 
  {
    digitalWrite(BIN1, HIGH);                         
    digitalWrite(BIN2, LOW);                          
  }
  else if (motorSpeed < 0)                            
  {
    digitalWrite(BIN1, LOW);                          
    digitalWrite(BIN2, HIGH);                         
  }
  else                                                
  {
    digitalWrite(BIN1, LOW);                          
    digitalWrite(BIN2, LOW);                          
  }
  analogWrite(PWMB, abs(motorSpeed));                 
}