#include <Wire.h>  // Only needed for Arduino 1.6.5 and earlier
#include "SSD1306Wire.h" // legacy include: `#include "SSD1306.h"`

// Initialize the OLED display using Wire library
SSD1306Wire  display(0x3c, D3, D5);

#include <Hx711.h>
Hx711 scale(D1, D2);

void setup() {
  // put your setup code here, to run once:
    Serial.begin(115200);

    display.init();
    display.flipScreenVertically();
}

void loop() {
  // clear the display
  display.clear();

  display.setTextAlignment(TEXT_ALIGN_LEFT);
  display.setFont(ArialMT_Plain_16);
  display.drawString(0, 0, String(scale.getGram()));

  display.display();
  
  delay(5);
}
