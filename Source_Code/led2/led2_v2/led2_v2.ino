int n=5;

void setup() {
  // Initiate pins for 10 to 12
  for ( int i = 10 ; i <= 12 ; i++)
  {
    pinMode(i, OUTPUT);
  }

}

void loop() {
  /*turn on and off each of the 3 pins each time with less time of waiting */ 
  for (int i=10 ; i <= 12 ; i++)
  {
       int x=150;
       digitalWrite( i , HIGH) ;
       delay (x-n);
       digitalWrite( i , LOW);
       delay (x-n);
       n++;
  }

}
