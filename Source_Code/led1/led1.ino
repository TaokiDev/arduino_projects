//indicates which cell should send the electric power 
int led = 13;

void setup() {
  pinMode(led, OUTPUT); //exit method
}

void loop() {
  digitalWrite(led, HIGH); //LED turns on 
  delay(2000); //time the LED is on            
  digitalWrite(led, LOW); //LED turns off  
  delay(1000); //time in which it is turned off       
}
