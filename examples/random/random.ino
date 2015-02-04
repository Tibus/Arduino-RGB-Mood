const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;
#include <RGBMood.h>
RGBMood m(redPin, greenPin, bluePin);

void setup() {
  m.setMode(RGBMood::RANDOM_HUE_MODE);  // Automatic random fade.
  m.setHoldingTime(4000);  // Keep the same color for 4 seconds before fading again.
  m.setFadingSteps(150);   // Fade with 150 steps.
  m.setFadingSpeed(50);    // Each step last 50ms. A complete fade takes 50*150 = 7.5 seconds
  m.setHSB(random(359), 255, 255) // Random hue mode only change the hue so we first set the saturation and brightness to what we want.
}

void loop() {
  m.tick(); // Update the colors.
}