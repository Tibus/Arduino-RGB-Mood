const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;
#include <RGBMood.h>
RGBMood m(redPin, greenPin, bluePin);

void setup() {
  m.setMode(RGBMood::RAINBOW_HUE_MODE); // Internally fade from red to red.
  m.setFadingSteps(200); // 200 steps.
  m.setFadingSpeed(25); // 25 ms * 200 steps = 5 seconds.
  m.setHoldingTime(0); // No need to stay red.
  m.fadeHSB(0, 255, 255); // Rainbow mode only change Hue so we first set the saturation and brightness.
}

void loop() {
  m.tick();
}