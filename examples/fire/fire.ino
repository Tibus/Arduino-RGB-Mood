const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;
#include <RGBMood.h>
RGBMood m(A5, A4, A3);

void setup() {
  m.setMode(RGBMood::FIRE_MODE); // Fire effect
}

void loop() {
  m.tick(); // Update the colors.
}
