#include "Interface.h"

void Interface::init() {
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("Erro ao iniciar display");
    while (true);
  }
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.println("Display OK!");
  display.display();
}

void Interface::drawStartup() {
  display.clearDisplay();
  display.setCursor(0, 0);
  display.println("Marauder Custom");
  display.println("Inicializando...");
  display.display();
}

void Interface::drawWifiScan() {
  display.clearDisplay();
  display.setCursor(0, 0);
  display.println("Redes WiFi:");
  int n = WiFi.scanNetworks();
  for (int i = 0; i < n && i < 4; i++) {
    display.println(WiFi.SSID(i));
  }
  display.display();
}