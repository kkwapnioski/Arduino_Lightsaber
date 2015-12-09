#include <Arduino.h>
#include <SoftwareSerial.h>
#include <DFPlayer.h>


Lightsaber::Lightsaber() {
  state_ = LSS_Initializing;
}


Lightsaber::~Lightsaber() {
  delete dfplayer;
}


void Lightsaber::initialize_sound(SerialMode mode, int rxPin, int txPin) {
  // initialize dfplayer sound module
  dfplayer = new DFPlayer(mode, rxPin, txPin);
  
}


void Lightsaber::loop() {
  
}
