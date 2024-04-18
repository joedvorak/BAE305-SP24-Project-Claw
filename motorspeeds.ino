const int AIN1 = 13;           
const int AIN2 = 12;           
const int PWMA = 11;           

const int PWMB = 10;           
const int BIN2 = 9;           
const int BIN1 = 8;         

const int driveTime = 20;                              
const int turnTime = 8;                                  

float duration, distance; 

String botDirection;         
String speed;                  

/********************************************************************************/
void setup()
{
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(PWMA, OUTPUT);

  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);
  pinMode(PWMB, OUTPUT);

  Serial.begin(9600);        

  Serial.println("Enter a direction followed by a distance and a speed.");
  Serial.println("f = forward, b = backward, r = turn right, l = turn left");
  Serial.println("1 = low, 2 = medium, 3 = high");
  Serial.println("Example command: f 1");

//  pinMode(trigPin, OUTPUT);  
//	pinMode(echoPin, INPUT);  
}

/********************************************************************************/
void loop()
{
  if (true)
  {                                                     
    if (Serial.available() > 0)                         
    {
      botDirection = Serial.readStringUntil(' ');       
      speed = Serial.readStringUntil(' ');             
      Serial.print(botDirection);
      Serial.print(" ");
      Serial.println(speed);


      int mSpeed = 0;
      if (speed == "1") {
        mSpeed = 100; 
      } else if (speed == "2") {
        mSpeed = 150; 
      } else if (speed == "3") {
        mSpeed = 200; 
      }

      


      if (botDirection == "f")                         
      {
        rightMotor(mSpeed);                                
        //leftMotor(mSpeed);                                 
        
      }
      else if (botDirection == "b")                   
      {
        rightMotor(-mSpeed);                               
        //leftMotor(-mSpeed);                                
        
      }
      else if (botDirection == "r")                     
      {
        //rightMotor(mSpeed);                               
        leftMotor(-mSpeed);                                 
        
      }
      else if (botDirection == "l")                 
      {
        //rightMotor(-mSpeed);                               
        leftMotor(mSpeed);                               
        
      }
    }
  }
  else
  {
    rightMotor(0);                                  
    leftMotor(0);                                  
  }
}
/********************************************************************************/

void rightMotor(int motorSpeed)                       
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
void leftMotor(int motorSpeed)                        
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