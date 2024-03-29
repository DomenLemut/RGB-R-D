//https://wokwi.com/projects/333202862446215764

#include <FastLED.h> 
#define DATA_PIN 3
#define BRIGHTNESS 180
#define MATRIX_W 16
#define MATRIX_H 16
#define NUM_LEDS MATRIX_W * MATRIX_H


CRGB leds[NUM_LEDS];
CRGB picture[MATRIX_W][MATRIX_H];

uint16_t XY( uint8_t x, uint8_t y)//funkcija iz x,y v spremenljivko i
{
uint16_t i;
    x = x % MATRIX_W;
    if (y%2 == 0) //y=2n
      i = y * MATRIX_W + x;
    else //y=2n+1
      i = MATRIX_W * (y + 1) - 1 - x;
  return i;
}

void setup() {
   LEDS.addLeds<WS2812,DATA_PIN,GRB>(leds,NUM_LEDS);
}

int* calcRGB(int bright, int hue){
    int rgb [3] = {0, 0, 0};
    rgb[1] = hue;
    rgb[2] = 100;
    rgb[3] = 100;
    return rgb;
}

void loop(){

    int rgb [3] = {0, 0, 255};
    int pointer = 2;
    int up = 1;
    int step = 15;
    bool go = true;

//START find rgb values  (circular rgb)
        
//END
    while(true){

        if(up == 1 && go){
            rgb[pointer] += step;
            if(rgb[pointer] >= 255){
                pointer++;
                pointer = pointer % 3;
                up *= -1;
            }
            go = false;
        }
        else if(up == -1 && go){
            rgb[pointer] -= step;
            if(rgb[pointer] <= 0){
                pointer++;
                pointer = pointer % 3;
                up *= -1;
            }
            go = false;
        }
        go = true;

        leds[0] = CHSV(rgb[0], rgb[1], rgb[2]);
        FastLED.show();
    }
}
