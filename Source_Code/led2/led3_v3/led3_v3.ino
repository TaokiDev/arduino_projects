

void setup() {
  // Initiate pins for 10 to 12 as output

  for ( int i = 10 ; i <= 12 ; i++)
  {
    pinMode(i, OUTPUT);
  }

}


void loop() {
  
  for(int i=10; i <= 12; i++){

       digitalWrite( i, HIGH) ;
       digitalWrite(i+2, HIGH);
       delay (1000);

       digitalWrite( i, LOW) ;
       digitalWrite(i+2, LOW);
       delay(1);

  }
  
  
}
