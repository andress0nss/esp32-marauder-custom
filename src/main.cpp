#include <Arduino.h>
#include "Interface.h"

Interface interface;

void setup() {
  Serial.begin(115200);
  interface.init();
  interface.drawStartup();
  delay(2000);
}

void loop() {
  interface.drawWifiScan();
  delay(5000);
}