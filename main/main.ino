#include "DriveBase.h"

// create subsystem instances (drive, ultrasonic, ect)
DriveBase drive;

void setup() {
  // put your setup code here, to run once:
  
  drive.setupMotors(2, 3, 4, 5, 10, 11);

}

void loop() {
  // put your main code here, to run repeatedly:

  drive.setGlobalSpeed(255);

  drive.moveForward();
  stopPause(1000);
  // drive.turnRight();
  // stopPause(1000);

  // drive.moveForward();
  // stopPause(1000);
  // drive.turnRight();
  // stopPause(1000);

  // drive.moveForward();
  // stopPause(1000);
  // drive.turnRight();
  // stopPause(1000);

  // drive.moveForward();
  // stopPause(1000);
  // drive.turnRight();
  // stopPause(1000);

}

void stopPause(int time) {
  delay(time);
  drive.stop();
  delay(time);
}