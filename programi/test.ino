#include <FastLED.h> 
#define DATA_PIN 13
#define BRIGHTNESS 180
#define MATRIX_W 12
#define MATRIX_H 10
#define NUM_LEDS MATRIX_W * MATRIX_H


CRGB leds[NUM_LEDS];
CRGB picture[MATRIX_W][MATRIX_H];

//int hue 0-360
// nt sat 0-255

int sat = 200;

uint16_t XY( uint8_t x, uint8_t y)//funkcija iz x,y v spremenljivko i
{
uint16_t i;
    x = x % MATRIX_W;
    if (y%2==0) //y=2n
      i = y * MATRIX_W + x;
    else //y=2n+1
      i = MATRIX_W *( y + 1 ) - 1 - x;
  return i;
}

void setup() {
   LEDS.addLeds<WS2812,DATA_PIN,GRB>(leds,NUM_LEDS);
   FastLED.setBrightness(BRIGHTNESS); 
}

int calcHue(int collumn, int offs){
    int hue = collumn + offs * 3;
    return hue;
}

void loop(){
    while(true){
        for(int offset = 0; offset < 360; offset++){
            for(int coll = 0; coll < MATRIX_W; coll++){
                int currHue = calcHue(coll, offset);
                for(int row = 0; row < MATRIX_H; row++){
                    leds[XY(row, coll)] = CHSV(calcHue,sat,BRIGHTNESS);
                    FastLED.show();
                }
            }
            FastLED.show();
            delay(100);
        }
    }

}
