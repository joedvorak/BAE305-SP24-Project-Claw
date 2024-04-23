const int coin = 5;  // declare variable for coin detection and assign it to digital pin


// the setup function runs once when you press reset or power the board
void setup() 
{
  pinMode(coin, INPUT); // initialize coin as an input
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() 
{
  if (digitalRead(coin) == HIGH)
  {
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED off by making the voltage LOW
    delay(1000);                      // wait for a second
  }
  else
  {
    digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
    delay(1000); 
  }
}