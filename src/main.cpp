/**************************************************************************
 This is an example for our Monochrome OLEDs based on SSD1306 drivers

 Pick one up today in the adafruit shop!
 ------> http://www.adafruit.com/category/63_98

 This example is for a 128x64 pixel display using I2C to communicate
 3 pins are required to interface (two I2C and one reset).

 Adafruit invests time and resources providing this open
 source code, please support Adafruit and open-source
 hardware by purchasing products from Adafruit!

 Written by Limor Fried/Ladyada for Adafruit Industries,
 with contributions from the open source community.
 BSD license, check license.txt for more information
 All text above, and the splash screen below must be
 included in any redistribution.
 **************************************************************************/

#include <LCD_ST7032.h>

LCD_ST7032 lcd;

#include "earthunit.h"

void setup() {
  Serial.begin(115200);

  lcd.begin();
  lcd.setcontrast(24); //contrast value range is 0-63, try 25@5V or 50@3.3V as a starting value

  lcd.setCursor(0, 0);
  lcd.print("Moisture");
}

void loop() {

  lcd.setCursor(1, 0);
  // print the number of seconds since reset:
  lcd.print(EarthUnit::getData());
  delay(2000);
}
