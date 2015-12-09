#ifndef Lightsaber_h
#define Lightsaber_h

#include <Arduino.h>
#include <DFPlayer.h>


#define LS_SOUND_DIR_SYSTEM = 1
#define LS_SOUND_DIR_POWERON = 2
#define LS_SOUND_DIR_IDLE = 3
#define LS_SOUND_DIR_SWING = 4
#define LS_SOUND_DIR_CLASH = 5
#define LS_SOUND_DIR_LOCKUP = 7
#define LS_SOUND_DIR_DEFLECT = 8
#define LS_SOUND_DIR_POWEROFF = 9



enum LightsaberState {
  LSS_Initializing,
  LSS_Off,
  LSS_PoweringOn,
  LSS_Idle,
  LSS_Swinging,
  LSS_Clashing,
  LSS_Lockup,
  LSS_Deflect,
  LSS_PoweringOff
};


class Lightsaber {
  
  public:
    Lightsaber();
    ~Lightsaber();
    void initialize_power_button(int pin);
    void initialize_sound(SerialMode mode, int rxPin, int txPin);
    void loop();
    
    void power_on();
    void power_on(int poweron);
    void power_off();
    void power_off(int poweroff);
    void swing();
    void swing(int swing);
    void clash();
    void clash(int clash);
    
  
  private:
    // static members
    static const int SOUND_LOCKOUT      = 500;
    static const int SOUND_IDLE_TIMEOUT = 1500;
    
    // members
    LightsaberState state_;
    DFPlayer* dfplayer;
    int numPowerOn_;
    int numIdle_;
    int numSwing_;
    int numClash_;
    int numLockup_;
    int numDeflect_;
    int numPowerOff_;
    
    
    // methods
    
};

#endif
