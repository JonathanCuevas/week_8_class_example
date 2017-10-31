#include "BlinkyLed.h"

BlinkyLed b1(1, 500, 2000);
BlinkyLed b2(2, 100, 1000);
BlinkyLed b3(3, 1000, 1000);
BlinkyLed b4(4, 2000, 2000);

void setup() {
  Serial.begin(9600);
}

void loop() {
  b1.updateLed();
  b2.updateLed();
  b3.updateLed();
  b4.updateLed();
}
