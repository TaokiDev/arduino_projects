#include <Servo.h>

int buttonPin = 2; //pushbutton pin
Servo myservo;

int buttonState = 0; //Pushbutton state
int prevState; //variable of previous value of buttonState
int ang; //servo angle

void setup (){
    myservo.attach(9); // motor pin
    pinMode(buttonPin, INPUT); //Set button with input signal
}

void loop(){
buttonState = digitalRead(buttonPin);

if (buttonState == HIGH && buttonState != prevState){ //is the button pressed? and is the button state different than it was a moment ago?
    if (ang == 120) { // if the angle was 120, it becomes 60
    ang = 60; } 
    else { // vice versa
    ang = 120;
}
}

prevState = buttonState; // makes the previous value of the button, equal to that of the button....
myservo.write(ang);
delay(10);
}

