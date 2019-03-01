//creators brian valdes and dionte blake
//the square brackets contains the number of the led that will flash, after the CRGB the color stated will flash and the black color at the end will simulate the led turning off, while the delay is the pauses between each led flash in miliseconds. the NEOPIXEL or the WS2811 is the type of led being used.
#include <FastLED.h>
#define NUM_LEDS 135
#define DATA_PIN 11

CRGB leds[NUM_LEDS];

void setup(){
  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);}
void loop(){
    leds[0]=0xffffff;FastLED.show();delay(30); //led is turned on
    leds[0]=0x09090a;FastLED.show();delay(30); //led is turned off
    leds[5]=0x387cea;FastLED.show();delay(30);
    leds[5]=0x09090a;FastLED.show();delay(30);
    leds[20]=0xffffff;FastLED.show();delay(30);
    leds[20]=0x09090a;FastLED.show();delay(30);
    leds[55]=0x387cea;FastLED.show();delay(30);
    leds[55]=0x09090a;FastLED.show();delay(30);
    leds[101]=0xffffff;FastLED.show();delay(30);
    leds[101]=0x09090a;FastLED.show();delay(30);
    leds[130]=0x387cea;FastLED.show();delay(20); // three consecutive beats in a row
    leds[130]=0x09090a;FastLED.show();delay(20);
    leds[131]=0x387cea;FastLED.show();delay(20);
    leds[131]=0x09090a;FastLED.show();delay(20);
    leds[132]=0x387cea;FastLED.show();delay(20);
    leds[132]=0x09090a;FastLED.show();delay(20);
delay(40); //long pause between sequences
    leds[30]=0xffffff;FastLED.show();delay(10); //long curve connecting the beats
    leds[30]=0x09090a;FastLED.show();delay(10);
    leds[31]=0xffffff;FastLED.show();delay(10);
    leds[31]=0x09090a;FastLED.show();delay(10);
    leds[32]=0xffffff;FastLED.show();delay(10);
    leds[32]=0x09090a;FastLED.show();delay(10);
    leds[33]=0xffffff;FastLED.show();delay(10);
    leds[33]=0x09090a;FastLED.show();delay(10);
    leds[60]=0x387cea;FastLED.show();delay(30);
    leds[60]=0x09090a;FastLED.show();delay(30);
    leds[70]=0xffffff;FastLED.show();delay(30);
    leds[70]=0x09090a;FastLED.show();delay(30);
    leds[80]=0x387cea;FastLED.show();delay(30);
    leds[80]=0x09090a;FastLED.show();delay(30);
    leds[90]=0xffffff;FastLED.show();delay(30);
    leds[90]=0x09090a;FastLED.show();delay(30);
    leds[100]=0x387cea;FastLED.show();delay(30);
    leds[100]=0x09090a;FastLED.show();delay(30);
    leds[40]=0xffffff;FastLED.show();delay(10); //another curve from the song
    leds[40]=0x09090a;FastLED.show();delay(10);
    leds[41]=0xffffff;FastLED.show();delay(10);
    leds[41]=0x09090a;FastLED.show();delay(10);
    leds[42]=0xffffff;FastLED.show();delay(10);
    leds[42]=0x09090a;FastLED.show();delay(10);
    leds[43]=0xffffff;FastLED.show();delay(10);
    leds[43]=0x09090a;FastLED.show();delay(10);
    leds[44]=0x387cea;FastLED.show();delay(20); //double beat at the end of the song
    leds[44]=0x09090a;FastLED.show();delay(20);
    leds[45]=0x387cea;FastLED.show();delay(20);
    leds[45]=0x09090a;FastLED.show();delay(20);
delay(30); //long pause
    leds[25]=0xffffff;FastLED.show();delay(30);
    leds[25]=0x09090a;FastLED.show();delay(30);
    leds[67]=0x387cea;FastLED.show();delay(30);
    leds[67]=0x09090a;FastLED.show();delay(30);
    leds[40]=0xffffff;FastLED.show();delay(30);
    leds[40]=0x09090a;FastLED.show();delay(30);
    leds[84]=0x387cea;FastLED.show();delay(30);
    leds[84]=0x09090a;FastLED.show();delay(30);
    leds[39]=0xffffff;FastLED.show();delay(30);
    leds[39]=0x09090a;FastLED.show();delay(30);
    leds[92]=0x387cea;FastLED.show();delay(30);
    leds[92]=0x09090a;FastLED.show();delay(30);
    leds[12]=0xffffff;FastLED.show();delay(30);
    leds[12]=0x09090a;FastLED.show();delay(30);
    leds[54]=0x387cea;FastLED.show();delay(30);
    leds[54]=0x09090a;FastLED.show();delay(30);
    leds[43]=0xffffff;FastLED.show();delay(30);
    leds[43]=0x09090a;FastLED.show();delay(30);
    leds[25]=0xffffff;FastLED.show();delay(25); //triple consecutive beat
    leds[25]=0x09090a;FastLED.show();delay(25);
    leds[26]=0xffffff;FastLED.show();delay(25);
    leds[26]=0x09090a;FastLED.show();delay(25);
    leds[27]=0xffffff;FastLED.show();delay(25);
    leds[27]=0x09090a;FastLED.show();delay(25);
delay(30); //pause in the song between two sequences of beats
    leds[77]=0xffffff;FastLED.show();delay(25); //triple consecutive beat
    leds[77]=0x09090a;FastLED.show();delay(25);
    leds[78]=0xffffff;FastLED.show();delay(25);
    leds[78]=0x09090a;FastLED.show();delay(25);
    leds[79]=0xffffff;FastLED.show();delay(25);
    leds[79]=0x09090a;FastLED.show();delay(25);
}
