const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;
#include <RGBMood.h>
RGBMood m(redPin, greenPin, bluePin);
int step = 0;

void setup() {}

void loop() {
  if (not m.isFading()) {
    switch (step) {
      case 0:
        m.fadeRGB(Color::AQUAMARINE);
        break;
      case 1:
        m.fadeRGB(Color::AIRFORCEBLUE);
        break;
      case 2:
        m.fadeRGB(Color::AMARANTH);
        break;
    }
    step = (step + 1) % 3;
  }
  m.tick();
}