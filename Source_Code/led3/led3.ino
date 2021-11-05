// initiate buzzer pin
const int pinBuzzer = 9;

void setup() 
{  
  //initiate LED'S pins
   for ( int i = 10 ; i <= 13 ; i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop() 
{
  //turning on and off the LED'S each second
  digitalWrite( 10 , HIGH) ;
  delay(1000);
  digitalWrite( 10 , LOW);
  
    
  digitalWrite( 11 , HIGH) ;
  delay(1000);
  digitalWrite( 11 , LOW);

  digitalWrite( 12 , HIGH) ;
  delay(1000);
  digitalWrite( 12 , LOW);
  
 /*Here, besides turning on the 4th LED, we made aparte de encender el 4to led, 
 we make sound to the buzzer for 1 second until the LED goes off */
  digitalWrite( 13 , HIGH) ;
  delay(1000);
  tone(pinBuzzer, 300);
  delay(1000); 
  noTone(pinBuzzer); 
  digitalWrite( 13 , LOW);
  
}
