//https://wokwi.com/projects/333262158369391188

#include <FastLED.h> 
#define DATA_PIN 3
#define BRIGHTNESS 180
#define MATRIX_W 16
#define MATRIX_H 16
#define NUM_LEDS MATRIX_W * MATRIX_H


CRGB leds[NUM_LEDS];
CRGB color;

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


void loop(){

    int rgb [3] = {0, 0, 255};
    int pointer = 2;
    int up = 1;
    int step = 15;
    int brightness = 80; //brightness 1-100%
    brightness %= 100;

    while(true){
        //move matrix one down
        for(int coll = MATRIX_W - 1; coll > 0; coll--){
            color = leds[XY(coll - 1, 0)];
            //color *= brightness / 100;
            for(int row = 0; row < MATRIX_H; row++){
                leds[XY(coll, row)] = color;
            }
        }

        //write new first row
        color = CRGB(
            rgb[0] * brightness / 100, 
            rgb[1] * brightness / 100, 
            rgb[2] * brightness / 100);

        for(int row = 0; row < MATRIX_H; row++){
            leds[XY(0, row)] = color;
        }

        FastLED.show();
        //delay(100);
        

        //START find next line rgb values  (circular rgb)
        if(up == 1){
            rgb[pointer] += step;
            if(rgb[pointer] >= 255){
                pointer++;
                pointer = pointer % 3;
                up *= -1;
            }
        }
        else if(up == -1){
            rgb[pointer] -= step;
            if(rgb[pointer] <= 0){
                pointer++;
                pointer = pointer % 3;
                up *= -1;
            }
        }
        //END

        
    }
}
