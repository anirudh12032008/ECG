#include <TFT_eSPI.h>
#include <SPI.h>

#define ECG_PIN 34         
#define SCREEN_WIDTH 320
#define SCREEN_HEIGHT 240

TFT_eSPI tft = TFT_eSPI();  
int x = 0;
int lastY = SCREEN_HEIGHT / 2;

void setup() {
  tft.init();
  tft.setRotation(1);
  tft.fillScreen(TFT_BLACK);
  tft.drawRect(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT, TFT_DARKGREY);
  analogReadResolution(12); 
}

void loop() {
  int ecgValue = analogRead(ECG_PIN);
  int y = map(ecgValue, 0, 4095, SCREEN_HEIGHT - 1, 1);

  tft.drawLine(x, 0, x, SCREEN_HEIGHT, TFT_BLACK); 
  tft.drawLine(x - 1, lastY, x, y, TFT_GREEN);   
  lastY = y;
  x++;

  if (x >= SCREEN_WIDTH) {
    x = 0;
    tft.fillRect(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT, TFT_BLACK);
    tft.drawRect(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT, TFT_DARKGREY);
  }

  delay(10);
}
