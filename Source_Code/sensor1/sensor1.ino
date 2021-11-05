 int Chest = 6;
 int Ptrig = 7;
long duration, distance;   
 
void setup() {                
  Serial.begin (9600); // initializes the serial port to 9600 baud
  pinMode(Pecho, INPUT); // define pin 6 as input (echo)
  pinMode(Ptrig, OUTPUT); // define pin 7 as output (triger)
  pinMode(13, 1); // defines pin 13 as output (output)
  pinMode(4, 1); 

  }
  
void loop() {
  
  digitalWrite(Ptrig, LOW);
  delayMicroseconds(2);
  digitalWrite(Ptrig, HIGH); // generate triger pulse for 10ms
  delayMicroseconds(10);
  digitalWrite(Ptrig, LOW);
  
  duration = pulseIn(Pecho, HIGH);
  distance = (duration/2) / 29; // calculate distance in centimeters
  
  if (distance >= 500 || distance <= 0){ // if the distance is greater than 500cm or less than 0cm 
    Serial.println("---"); // doesn't measure anything
  }
  else {
    digitalWrite(13, 0); // on low pin 13
    digitalWrite(4, 1); 
  } 
  
   if (distance <= 20 && distance >= 1){
    digitalWrite(13, 1); // on high pin 13 if distance is less than 20cm
    digitalWrite(4, 0); 
  }
  delay(400); // wait 400ms to get the distance on the console.
}

