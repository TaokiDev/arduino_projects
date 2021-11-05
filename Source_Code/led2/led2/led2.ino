
void setup() {
  // Initiate pins for 10 to 12 as output

  for ( int i = 10 ; i <= 12 ; i++)
  {
    pinMode(i, OUTPUT);
  }

}

// the loop routine runs over and over again forever:
void loop() {
  /* turn on and off each of the 3 pins with a wait of 0.2 seconds*/
  for (int i=10 ; i <= 12 ; i++)
  {
       digitalWrite( i , HIGH) ;
       delay (200) ;
       digitalWrite( i , LOW);
       delay (200) ;
  }
}
