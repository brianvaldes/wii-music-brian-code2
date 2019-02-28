#include "FastLED.h"
//creators brian valdes and dionte blake
//the square brackets contains the number of the led that will flash, after the CRGB the color stated will flash and the black color at the end will simulate the led turning off, while the delay is the pauses between each led flash in miliseconds. the NEOPIXEL or the WS2811 is the type of led being used.
CRGB leds [1];
void setup() {FastLED.add leds<NEOPIXEL,6>(leds,1);}
void loop (){
    leds[0]=CRGB::white;FastLED.show();delay(30); //led is turned on
    leds[0]=CRGB::black;FastLED.show();delay(30); //led is turned off
}
void loop (){
    leds[5]=CRGB::blue;FastLED.show();delay(30);
    leds[5]=CRGB::black;FastLED.show();delay(30);
}
void loop (){
    leds[20]=CRGB::white;FastLED.show();delay(30);
    leds[20]=CRGB::black;FastLED.show();delay(30);
}
void loop(){
    leds[55]=CRGB::blue;FastLED.show();delay(30);
    leds[55]=CRGB::black;FastLED.show();delay(30);
}
void loop(){
    leds[101]=CRGB::white;FastLED.show();delay(30);
    leds[101]=CRGB::black;FastLED.show();delay(30);
}
void loop(){
    leds[130]=CRGB::blue;FastLED.show();delay(20); // three consecutive beats in a row
    leds[130]=CRGB::black;FastLED.show();delay(20);
    leds[131]=CRGB::blue;FastLED.show();delay(20);
    leds[131]=CRGB::black;FastLED.show();delay(20);
    leds[132]=CRGB::blue;FastLED.show();delay(20);
    leds[132]=CRGB::black;FastLED.show();delay(20);
}
delay(40); //long pause between sequences
void loop(){
    leds[30]=CRGB::white;FastLED.show();delay(10); //long curve connecting the beats
    leds[30]=CRGB::black;FastLED.show();delay(10);
    leds[31]=CRGB::white;FastLED.show();delay(10);
    leds[31]=CRGB::black;FastLED.show();delay(10);
    leds[32]=CRGB::white;FastLED.show();delay(10);
    leds[32]=CRGB::black;FastLED.show();delay(10);
    leds[33]=CRGB::white;FastLED.show();delay(10);
    leds[33]=CRGB::black;FastLED.show();delay(10);
}
void loop (){
    leds[60]=CRGB::blue;FastLED.show();delay(30);
    leds[60]=CRGB::black;FastLED.show();delay(30);
}
void loop (){
    leds[70]=CRGB::white;FastLED.show();delay(30);
    leds[70]=CRGB::black;FastLED.show();delay(30);
}
void loop (){
    leds[80]=CRGB::blue;FastLED.show();delay(30);
    leds[80]=CRGB::black;FastLED.show();delay(30);
}
void loop (){
    leds[90]=CRGB::white;FastLED.show();delay(30);
    leds[90]=CRGB::black;FastLED.show();delay(30);
}
void loop (){
    leds[100]=CRGB::blue;FastLED.show();delay(30);
    leds[100]=CRGB::black;FastLED.show();delay(30);
}
void loop(){
    leds[40]=CRGB::white;FastLED.show();delay(10); //another curve from the song
    leds[40]=CRGB::black;FastLED.show();delay(10);
    leds[41]=CRGB::white;FastLED.show();delay(10);
    leds[41]=CRGB::black;FastLED.show();delay(10);
    leds[42]=CRGB::white;FastLED.show();delay(10);
    leds[42]=CRGB::black;FastLED.show();delay(10);
    leds[43]=CRGB::white;FastLED.show();delay(10);
    leds[43]=CRGB::black;FastLED.show();delay(10);
}
void loop (){
    leds[44]=CRGB::blue;FastLED.show();delay(20); //double beat at the end of the song
    leds[44]=CRGB::black;FastLED.show();delay(20);
    leds[45]=CRGB::blue;FastLED.show();delay(20);
    leds[45]=CRGB::black;FastLED.show();delay(20);
}
delay(30); //long pause
void loop (){
    leds[25]=CRGB::white;FastLED.show();delay(30);
    leds[25]=CRGB::black;FastLED.show();delay(30);
}
void loop (){
    leds[67]=CRGB::blue;FastLED.show();delay(30);
    leds[67]=CRGB::black;FastLED.show();delay(30);
}
void loop (){
    leds[40]=CRGB::white;FastLED.show();delay(30);
    leds[40]=CRGB::black;FastLED.show();delay(30);
}
void loop (){
    leds[84]=CRGB::blue;FastLED.show();delay(30);
    leds[84]=CRGB::black;FastLED.show();delay(30);
}
void loop (){
    leds[39]=CRGB::white;FastLED.show();delay(30);
    leds[39]=CRGB::black;FastLED.show();delay(30);
}
void loop (){
    leds[92]=CRGB::blue;FastLED.show();delay(30);
    leds[92]=CRGB::black;FastLED.show();delay(30);
}
void loop (){
    leds[12]=CRGB::white;FastLED.show();delay(30);
    leds[12]=CRGB::black;FastLED.show();delay(30);
}
void loop (){
    leds[54]=CRGB::blue;FastLED.show();delay(30);
    leds[54]=CRGB::black;FastLED.show();delay(30);
}
void loop (){
    leds[43]=CRGB::white;FastLED.show();delay(30);
    leds[43]=CRGB::black;FastLED.show();delay(30);
}
void loop (){
    leds[25]=CRGB::white;FastLED.show();delay(25); //triple consecutive beat
    leds[25]=CRGB::black;FastLED.show();delay(25);
    leds[26]=CRGB::white;FastLED.show();delay(25);
    leds[26]=CRGB::black;FastLED.show();delay(25);
    leds[27]=CRGB::white;FastLED.show();delay(25);
    leds[27]=CRGB::black;FastLED.show();delay(25);
}
delay(30) //pause in the song between two sequences of beats
void loop (){
    leds[77]=CRGB::white;FastLED.show();delay(25); //triple consecutive beat
    leds[77]=CRGB::black;FastLED.show();delay(25);
    leds[78]=CRGB::white;FastLED.show();delay(25);
    leds[78]=CRGB::black;FastLED.show();delay(25);
    leds[79]=CRGB::white;FastLED.show();delay(25);
    leds[79]=CRGB::black;FastLED.show();delay(25);
}

