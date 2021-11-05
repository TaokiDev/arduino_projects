//Import libraries
#include <LiquidCrystal.h>       
#include <Wire.h>                
LiquidCrystal lcd(12, 11, 6, 4, 3, 2);  //define LCD communication connections

void setup() {
lcd.begin(16, 2);    //define (hadware) what type of display is connected to 
}

void loop()
{
lcd.display();    //start the display of characters on the LCD
lcd.clear();      //clean the screen to erase the previous message if any

lcd.print("Hello World");   //write inside the quotation marks (MAX 16 characters)
lcd.setCursor(0,1 );
lcd.print("Kryss");   //write inside the quotation marks (MAX 16 characters)
delay(3000);         //Wait for 3 seconds for the message to be displayed.
lcd.noDisplay();   //turn off the display of characters
lcd.setCursor(0, 0);
delay(1000);   //wait for one second with the LCD off

// repeat the cycle
lcd.display();
lcd.clear();

lcd.print("World Hello!");
lcd.setCursor(0, 1);
lcd.print("finished");
delay(3000);
lcd.noDisplay();
lcd.setCursor(0, 0);
delay(1000);

}
