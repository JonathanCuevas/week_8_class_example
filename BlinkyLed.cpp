#include "Arduino.h"
#include "BlinkyLed.h"

BlinkyLed::BlinkyLed(int _pin, int _blinkHighLength, int _blinkLowLength)
{
  pin = _pin;

  pinMode(pin, OUTPUT);

  blinkHighLength = _blinkHighLength;
  blinkLowLength = _blinkLowLength;
  lastBlink = 0;
  blinkState = LOW;
}

void BlinkyLed::updateLed()
{
  if (blinkState == LOW && millis() >= lastBlink + blinkLowLength) {
    blinkState = HIGH;
    lastBlink = millis();
    digitalWrite(pin, blinkState);
  } 
  else if (blinkState == HIGH && millis() >= lastBlink + blinkHighLength) {
    blinkState = LOW;
    lastBlink = millis();
    digitalWrite(pin, blinkState);
  }
}
