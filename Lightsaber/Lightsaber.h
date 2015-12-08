#ifndef Lightsaber_h
#define Lightsaber_h

#include <Arduino.h>
#include <SoftwareSerial.h>
#include <DFPlayer.h>

enum LightsaberState {
  INITIALIZING,
  OFF,
  POWERING_ON,
  IDLE,
  SWINGING,
  CLASHING,
  LOCKUP,
  DEFLECT,
  POWERING_OFF
};

class Lightsaber {
  public:
    Lightsaber();
    ~Lightsaber();
  
  private:
    LightsaberState state_;
    DFPlayer* dfplayer;
  
};

#endif
