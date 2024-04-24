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
  
  pinMode(4, OUTPUT);

  Serial.println("Enter a direction.");
  Serial.println("F = forward, B = backward, R = right, L = left");
  Serial.println("Example command: F");
}

void loop() 
{
  if (digitalRead(coin) == LOW)
  {
    Serial.println("Coin Detected");
    if (Serial.available() > 0) 
    {
      botDirection = Serial.readStringUntil(' ');                 


      int mSpeed = 200;

      if (botDirection == "R")                         
        {
          Serial.print(botDirection);
          MotorX(mSpeed);   
          delay(1000);
          MotorX(0);                                 
        }

      else if (botDirection == "L")                   
        {
          Serial.print(botDirection);
          MotorX(-mSpeed);                                                              
          delay(1000);
          MotorX(0);                                 
        }

      else if (botDirection == "B")                     
        {
          Serial.print(botDirection);
          MotorY(mSpeed);                                                               
          delay(1000);
          MotorY(0);                                 
        }

      else if (botDirection == "F")                 
        {
          Serial.print(botDirection);
          MotorY(-mSpeed);                                                              
          delay(00);
          MotorY(0);                                 
        }

      else if (botDirection == "D")

      {
        Serial.print(botDirection);
        digitalWrite(4, HIGH);
        delay(1000);
        digitalWrite(4, LOW);
      }
    }
  }
  else
  {
    Serial.println("S");
    MotorX(0);
    MotorY(0);
  }
  
  
}



/********************************************************************************/
void MotorX(int motorSpeed)                       
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