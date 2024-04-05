#ifndef Firefighter_h // header guard

#define Firefighter_h

#include <Arduino.h> // include arduino library

class Firefighter {

  public:
    
    void init(); // create instances of subsystems
    void lookForRoom(); // will use: drive, ultrasonic
    void scanRoom(); // drive, ultrasonic, ir sensor
    void extinguish(); // drive, ultrasonic, ir sensor, ext mechanism

  private: 
    
    
};

#endif

