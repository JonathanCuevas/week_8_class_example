#include "Arduino.h"

class BlinkyLed
{
  public:
    BlinkyLed(int _pin, int _blinkHighLength, int _blinkLowLength);
    void updateLed();
    
    byte pin;
    int blinkHighLength;
    int blinkLowLength;
    bool blinkState;
    unsigned long lastBlink;

    private:
};
