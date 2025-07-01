#ifndef INTERFACE_H
#define INTERFACE_H

#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <WiFi.h>

class Interface {
  public:
    void init();
    void drawStartup();
    void drawWifiScan();
  private:
    Adafruit_SSD1306 display = Adafruit_SSD1306(128, 64, &Wire, -1);
};

#endif