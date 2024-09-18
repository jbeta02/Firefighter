#include "DriveBase.h"

// create subsystem instances (drive, ultrasonic, ect)
DriveBase testDrive;

void setup() {
  // put your setup code here, to run once:
  
  testDrive.init(2, 3, 4, 5, 10, 11); // setup motor pin locations

}

void loop() {
  // put your main code here, to run repeatedly:

  testDrive.setGlobalSpeed(255);

  testDrive.moveForward();
  stopPause(1000);
  // testDrive.turnRight();
  // stopPause(1000);

}

// only used for testing
void stopPause(int time) {
  delay(time);
  testDrive.stop();
  delay(time);
}