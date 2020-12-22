#include <SPI.h> // Not actually used but needed to compile
//#include "arduinoFFT.h"

#define RED_LED 6
#define GREEN_LED 5
#define BLUE_LED 9

int brightness = 255;
int gBright = 0;
int rBright = 0;
int bBright = 0;
int fadeSpeed = 10;
int amplitude;

void setup()
{
//    Serial.begin(9600);    // Debugging only
//    pinMode(A0, INPUT);
//    amplitude = 0;
    pinMode(GREEN_LED, OUTPUT);
    pinMode(RED_LED, OUTPUT);
    pinMode(BLUE_LED, OUTPUT);
    TurnOn();
    delay(5000);
    TurnOff();
}

void loop()
{
    //amplitude = analogRead(A0);
    //amplitude = amplitude * 8;
    //String msg_str = String(amplitude);
    //Serial.println(msg_str);
    //delay(1000);
}

void TurnOn() { 
   for (int i = 0; i < 256; i++) {
       analogWrite(RED_LED, rBright);
       rBright +=1;
       delay(fadeSpeed);
   }
 
   for (int i = 0; i < 256; i++) {
       analogWrite(BLUE_LED, bBright);
       bBright += 1;
       delay(fadeSpeed);
   } 
   for (int i = 0; i < 256; i++) {
       analogWrite(GREEN_LED, gBright);
       gBright +=1;
       delay(fadeSpeed);
   } 
}
