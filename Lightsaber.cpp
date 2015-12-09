#include <Arduino.h>
#include <SoftwareSerial.h>
#include <DFPlayer.h>

Lightsaber::Lightsaber() {
  state_ = INITIALIZING;
}

Lightsaber::~Lightsaber() {
}

