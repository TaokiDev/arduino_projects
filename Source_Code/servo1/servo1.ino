#include <Servo.h> // Include Servo Library
Servo servo1; // Create a Servo type object named servo1
int angle = 0 ; // Initialize the angle
int pin=9; // Initialize the servo pin
void setup()
{
        servo1.attach(pin) ; // Connect servo1 to pin 9
}

void loop()
{
        for(angle = 0; angle <= 180; angle += 1) //increase angle 1 degree
            {
                 servo1.write(angle);
                 delay(25);
            }
        for(angulo = 180; angulo >=0; angulo -=1 ) //decreases angle 1 degree.
            {
                 servo1.write( angle );
                 delay(25);
            }
}


