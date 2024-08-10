#include <SPIFFS.h>
#include <M5GFX.h>
#include <Arduino.h>
#include <M5Dial.h>

#include "posion.hpp"

void drawPngFile(const char *path, int32_t x = 0, int32_t y = 0, datum_t datum = datum_t::top_left)
{
  M5Dial.Display.drawPngFile(SPIFFS, path, x, y, 0, 0, 0, 0, 1.0F, 1.0F, datum);
}

void setup()
{
  auto cfg = M5.config();
  SPIFFS.begin(true);
  M5Dial.begin(cfg, true, true);
  M5Dial.Display.fillScreen(TFT_WHITE);
  drawPngFile("/bell.png");
}

int i = 0;
void loop()
{
  // M5Dial.Display.fillScreen(TFT_WHITE);
  drawPngFile("/bell.png", poisons[i][0], poisons[i][1], datum_t::middle_center);
  i++;
  delay(10);
}
