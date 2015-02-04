const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;
#include <RGBMood.h>
RGBMood m(redPin, greenPin, bluePin);

void setup() {
  m.setRGB(255, 0, 0); // Start red.
}

void loop() {
  m.setHSB(random(359), 255, 255);
  m.tick(); // Update the colors.
  delay(1000);
}