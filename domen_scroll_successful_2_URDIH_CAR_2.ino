#include <FastLED.h> 
#define DATA_PIN 13
#define BRIGHTNESS 180
#define MATRIX_W 12
#define MATRIX_H 10
#define PIC_W 50
#define NUM_LEDS MATRIX_W * MATRIX_H
CRGB leds[NUM_LEDS];
CRGB picture[PIC_W][MATRIX_H];
int hue = 100; //0-360
int sat = 255; //0-255

int a = 0;

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
   FastLED.setBrightness( BRIGHTNESS ); 

}


void loop(){
    //U
picture[0][0] = CHSV(hue,sat,BRIGHTNESS);
picture[0][1] = CHSV(hue,sat,BRIGHTNESS);
picture[0][2] = CHSV(hue,sat,BRIGHTNESS);
picture[0][3] = CHSV(hue,sat,BRIGHTNESS);
picture[0][4] = CHSV(hue,sat,BRIGHTNESS);
picture[0][5] = CHSV(hue,sat,BRIGHTNESS);
picture[0][6] = CHSV(hue,sat,BRIGHTNESS);
picture[0][7] = CHSV(hue,sat,BRIGHTNESS);
picture[0][8] = CHSV(hue,sat,BRIGHTNESS);

picture[1][9] = CHSV(hue,sat,BRIGHTNESS);

picture[2][9] = CHSV(hue,sat,BRIGHTNESS);

picture[3][9] = CHSV(hue,sat,BRIGHTNESS);

picture[4][0] = CHSV(hue,sat,BRIGHTNESS);
picture[4][1] = CHSV(hue,sat,BRIGHTNESS);
picture[4][2] = CHSV(hue,sat,BRIGHTNESS);
picture[4][3] = CHSV(hue,sat,BRIGHTNESS);
picture[4][4] = CHSV(hue,sat,BRIGHTNESS);
picture[4][5] = CHSV(hue,sat,BRIGHTNESS);
picture[4][6] = CHSV(hue,sat,BRIGHTNESS);
picture[4][7] = CHSV(hue,sat,BRIGHTNESS);
picture[4][8] = CHSV(hue,sat,BRIGHTNESS);

//R
picture[6][0] = CHSV(hue,sat,BRIGHTNESS);
picture[6][1] = CHSV(hue,sat,BRIGHTNESS);
picture[6][2] = CHSV(hue,sat,BRIGHTNESS);
picture[6][3] = CHSV(hue,sat,BRIGHTNESS);
picture[6][4] = CHSV(hue,sat,BRIGHTNESS);
picture[6][5] = CHSV(hue,sat,BRIGHTNESS);
picture[6][6] = CHSV(hue,sat,BRIGHTNESS);
picture[6][7] = CHSV(hue,sat,BRIGHTNESS);
picture[6][8] = CHSV(hue,sat,BRIGHTNESS);
picture[6][9] = CHSV(hue,sat,BRIGHTNESS);

picture[7][0] = CHSV(hue,sat,BRIGHTNESS);
picture[7][4] = CHSV(hue,sat,BRIGHTNESS);
picture[7][5] = CHSV(hue,sat,BRIGHTNESS);

picture[8][0] = CHSV(hue,sat,BRIGHTNESS);
picture[8][4] = CHSV(hue,sat,BRIGHTNESS);
picture[8][6] = CHSV(hue,sat,BRIGHTNESS);

picture[9][0] = CHSV(hue,sat,BRIGHTNESS);
picture[9][4] = CHSV(hue,sat,BRIGHTNESS);
picture[9][7] = CHSV(hue,sat,BRIGHTNESS);

picture[10][1] = CHSV(hue,sat,BRIGHTNESS);
picture[10][2] = CHSV(hue,sat,BRIGHTNESS);
picture[10][3] = CHSV(hue,sat,BRIGHTNESS);
picture[10][8] = CHSV(hue,sat,BRIGHTNESS);
picture[10][9] = CHSV(hue,sat,BRIGHTNESS);

//D
picture[12][0] = CHSV(hue,sat,BRIGHTNESS);
picture[12][1] = CHSV(hue,sat,BRIGHTNESS);
picture[12][2] = CHSV(hue,sat,BRIGHTNESS);
picture[12][3] = CHSV(hue,sat,BRIGHTNESS);
picture[12][4] = CHSV(hue,sat,BRIGHTNESS);
picture[12][5] = CHSV(hue,sat,BRIGHTNESS);
picture[12][6] = CHSV(hue,sat,BRIGHTNESS);
picture[12][7] = CHSV(hue,sat,BRIGHTNESS);
picture[12][8] = CHSV(hue,sat,BRIGHTNESS);
picture[12][9] = CHSV(hue,sat,BRIGHTNESS);

picture[13][0] = CHSV(hue,sat,BRIGHTNESS);
picture[13][9] = CHSV(hue,sat,BRIGHTNESS);

picture[14][0] = CHSV(hue,sat,BRIGHTNESS);
picture[14][9] = CHSV(hue,sat,BRIGHTNESS);

picture[15][0] = CHSV(hue,sat,BRIGHTNESS);
picture[15][9] = CHSV(hue,sat,BRIGHTNESS);

picture[16][1] = CHSV(hue,sat,BRIGHTNESS);
picture[16][2] = CHSV(hue,sat,BRIGHTNESS);
picture[16][3] = CHSV(hue,sat,BRIGHTNESS);
picture[16][4] = CHSV(hue,sat,BRIGHTNESS);
picture[16][5] = CHSV(hue,sat,BRIGHTNESS);
picture[16][6] = CHSV(hue,sat,BRIGHTNESS);
picture[16][7] = CHSV(hue,sat,BRIGHTNESS);
picture[16][8] = CHSV(hue,sat,BRIGHTNESS);

//I
picture[18][0] = CHSV(hue,sat,BRIGHTNESS);
picture[18][1] = CHSV(hue,sat,BRIGHTNESS);
picture[18][2] = CHSV(hue,sat,BRIGHTNESS);
picture[18][3] = CHSV(hue,sat,BRIGHTNESS);
picture[18][4] = CHSV(hue,sat,BRIGHTNESS);
picture[18][5] = CHSV(hue,sat,BRIGHTNESS);
picture[18][6] = CHSV(hue,sat,BRIGHTNESS);
picture[18][7] = CHSV(hue,sat,BRIGHTNESS);
picture[18][8] = CHSV(hue,sat,BRIGHTNESS);
picture[18][9] = CHSV(hue,sat,BRIGHTNESS);

//H
picture[20][0] = CHSV(hue,sat,BRIGHTNESS);
picture[20][1] = CHSV(hue,sat,BRIGHTNESS);
picture[20][2] = CHSV(hue,sat,BRIGHTNESS);
picture[20][3] = CHSV(hue,sat,BRIGHTNESS);
picture[20][4] = CHSV(hue,sat,BRIGHTNESS);
picture[20][5] = CHSV(hue,sat,BRIGHTNESS);
picture[20][6] = CHSV(hue,sat,BRIGHTNESS);
picture[20][7] = CHSV(hue,sat,BRIGHTNESS);
picture[20][8] = CHSV(hue,sat,BRIGHTNESS);
picture[20][9] = CHSV(hue,sat,BRIGHTNESS);

picture[21][4] = CHSV(hue,sat,BRIGHTNESS);

picture[22][4] = CHSV(hue,sat,BRIGHTNESS);

picture[23][4] = CHSV(hue,sat,BRIGHTNESS);

picture[24][0] = CHSV(hue,sat,BRIGHTNESS);
picture[24][1] = CHSV(hue,sat,BRIGHTNESS);
picture[24][2] = CHSV(hue,sat,BRIGHTNESS);
picture[24][3] = CHSV(hue,sat,BRIGHTNESS);
picture[24][4] = CHSV(hue,sat,BRIGHTNESS);
picture[24][5] = CHSV(hue,sat,BRIGHTNESS);
picture[24][6] = CHSV(hue,sat,BRIGHTNESS);
picture[24][7] = CHSV(hue,sat,BRIGHTNESS);
picture[24][8] = CHSV(hue,sat,BRIGHTNESS);
picture[24][9] = CHSV(hue,sat,BRIGHTNESS);

//C
picture[27][1] = CHSV(hue,sat,BRIGHTNESS);
picture[27][2] = CHSV(hue,sat,BRIGHTNESS);
picture[27][3] = CHSV(hue,sat,BRIGHTNESS);
picture[27][4] = CHSV(hue,sat,BRIGHTNESS);
picture[27][5] = CHSV(hue,sat,BRIGHTNESS);
picture[27][6] = CHSV(hue,sat,BRIGHTNESS);
picture[27][7] = CHSV(hue,sat,BRIGHTNESS);
picture[27][8] = CHSV(hue,sat,BRIGHTNESS);

picture[28][0] = CHSV(hue,sat,BRIGHTNESS);
picture[28][9] = CHSV(hue,sat,BRIGHTNESS);

picture[29][0] = CHSV(hue,sat,BRIGHTNESS);
picture[29][9] = CHSV(hue,sat,BRIGHTNESS);

picture[30][0] = CHSV(hue,sat,BRIGHTNESS);
picture[30][9] = CHSV(hue,sat,BRIGHTNESS);

picture[31][1] = CHSV(hue,sat,BRIGHTNESS);
picture[31][8] = CHSV(hue,sat,BRIGHTNESS);

//A
picture[33][1] = CHSV(hue,sat,BRIGHTNESS);
picture[33][2] = CHSV(hue,sat,BRIGHTNESS);
picture[33][3] = CHSV(hue,sat,BRIGHTNESS);
picture[33][4] = CHSV(hue,sat,BRIGHTNESS);
picture[33][5] = CHSV(hue,sat,BRIGHTNESS);
picture[33][6] = CHSV(hue,sat,BRIGHTNESS);
picture[33][7] = CHSV(hue,sat,BRIGHTNESS);
picture[33][8] = CHSV(hue,sat,BRIGHTNESS);
picture[33][9] = CHSV(hue,sat,BRIGHTNESS);

picture[34][0] = CHSV(hue,sat,BRIGHTNESS);
picture[34][5] = CHSV(hue,sat,BRIGHTNESS);

picture[35][0] = CHSV(hue,sat,BRIGHTNESS);
picture[35][5] = CHSV(hue,sat,BRIGHTNESS);

picture[36][0] = CHSV(hue,sat,BRIGHTNESS);
picture[36][5] = CHSV(hue,sat,BRIGHTNESS);

picture[37][1] = CHSV(hue,sat,BRIGHTNESS);
picture[37][2] = CHSV(hue,sat,BRIGHTNESS);
picture[37][3] = CHSV(hue,sat,BRIGHTNESS);
picture[37][4] = CHSV(hue,sat,BRIGHTNESS);
picture[37][5] = CHSV(hue,sat,BRIGHTNESS);
picture[37][6] = CHSV(hue,sat,BRIGHTNESS);
picture[37][7] = CHSV(hue,sat,BRIGHTNESS);
picture[37][8] = CHSV(hue,sat,BRIGHTNESS);
picture[37][9] = CHSV(hue,sat,BRIGHTNESS);

//R
picture[39][0] = CHSV(hue,sat,BRIGHTNESS);
picture[39][1] = CHSV(hue,sat,BRIGHTNESS);
picture[39][2] = CHSV(hue,sat,BRIGHTNESS);
picture[39][3] = CHSV(hue,sat,BRIGHTNESS);
picture[39][4] = CHSV(hue,sat,BRIGHTNESS);
picture[39][5] = CHSV(hue,sat,BRIGHTNESS);
picture[39][6] = CHSV(hue,sat,BRIGHTNESS);
picture[39][7] = CHSV(hue,sat,BRIGHTNESS);
picture[39][8] = CHSV(hue,sat,BRIGHTNESS);
picture[39][9] = CHSV(hue,sat,BRIGHTNESS);

picture[40][0] = CHSV(hue,sat,BRIGHTNESS);
picture[40][4] = CHSV(hue,sat,BRIGHTNESS);
picture[40][5] = CHSV(hue,sat,BRIGHTNESS);

picture[42][0] = CHSV(hue,sat,BRIGHTNESS);
picture[42][4] = CHSV(hue,sat,BRIGHTNESS);
picture[42][6] = CHSV(hue,sat,BRIGHTNESS);

picture[42][0] = CHSV(hue,sat,BRIGHTNESS);
picture[42][4] = CHSV(hue,sat,BRIGHTNESS);
picture[42][7] = CHSV(hue,sat,BRIGHTNESS);

picture[43][1] = CHSV(hue,sat,BRIGHTNESS);
picture[43][2] = CHSV(hue,sat,BRIGHTNESS);
picture[43][3] = CHSV(hue,sat,BRIGHTNESS);
picture[43][8] = CHSV(hue,sat,BRIGHTNESS);
picture[43][9] = CHSV(hue,sat,BRIGHTNESS);

picture[45][8] = CHSV(hue,sat,BRIGHTNESS);

  for (int offs = 0; offs < PIC_W; offs++){
    for(int tmp_x=0; tmp_x < MATRIX_W; tmp_x++ )
      for(int tmp_y=0; tmp_y < MATRIX_H; tmp_y++ )
        leds[XY(tmp_x,tmp_y)] = picture[(tmp_x+offs) % PIC_W][tmp_y];
    hue++;    
    FastLED.show();
    delay(80);
  }