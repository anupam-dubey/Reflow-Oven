#include <SPI.h>
#include <Wire.h>
#include <EEPROM.h>
#include <Adafruit_GFX.h>      // Comment for VERSION 1
#include <Adafruit_SSD1306.h>  // Comment for VERSION 1 
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels
// Declaration for SSD1306 display connected using software SPI (default case):
#define OLED_MOSI  11
#define OLED_CLK   13
#define OLED_DC    9
#define OLED_CS    10
#define OLED_RESET 8
Adafruit_SSD1306 oled(SCREEN_WIDTH, SCREEN_HEIGHT,
  OLED_MOSI, OLED_CLK, OLED_DC, OLED_RESET, OLED_CS);
  // put your setup code here, to run once:
void setup()
{ // the library initializes this with an Adafruit splash screen.
  // the library initializes this with an Adafruit splash screen.
  oled.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  oled.display();
  oled.clearDisplay();
  oled.setTextSize(1);
  oled.setTextColor(WHITE);
  oled.setCursor(0, 0);
  oled.println(F("     Tiny Reflow"));
  oled.println(F("     Controller"));
  oled.println();
  oled.println(F("       v2.00"));
  oled.println();
  oled.println(F("      04-03-19"));
  oled.display();
  delay(3000);
  oled.clearDisplay();
  // Clear the buffer
  
}

// the loop function runs over and over again forever
void loop() {
                    // wait for a second
}
