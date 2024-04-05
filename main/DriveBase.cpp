#include "DriveBase.h"

// :: is scope resolution operator
// allows the use of private variables from header within function body

void DriveBase::setupMotors(int m1p1, int m1p2, int m2p1, int m2p2, int pwmA, int pwmB) {

  motor1Port1 = m1p1;
  motor1Port2 = m1p2;
  motor2Port1 = m2p1;
  motor2Port2 = m2p2;

  pinMode(motor1Port1, OUTPUT);
  pinMode(motor1Port2, OUTPUT);
  pinMode(motor2Port1, OUTPUT);
  pinMode(motor2Port2, OUTPUT);

  pwmPort1 = pwmA;
  pwmPort2 = pwmB;

  pinMode(pwmPort1, OUTPUT);
  pinMode(pwmPort2, OUTPUT);
}

///////////////////TODO will need to change directions based on motor placement on final robot (forward, back, left, right)
// movement functions at set speed
void DriveBase::moveForward(int speed) {
  digitalWrite(motor1Port1, HIGH);
  digitalWrite(motor1Port2, LOW);

  digitalWrite(motor2Port1, LOW);
  digitalWrite(motor2Port2, HIGH);

  analogWrite(pwmPort1, speed);
	analogWrite(pwmPort2, speed);
}

void DriveBase::moveBack(int speed) {
  digitalWrite(motor1Port1, LOW);
  digitalWrite(motor1Port2, HIGH);

  digitalWrite(motor2Port1, HIGH);
  digitalWrite(motor2Port2, LOW);

  analogWrite(pwmPort1, speed);
	analogWrite(pwmPort2, speed);
}

void DriveBase::turnRight(int speed) {
  digitalWrite(motor1Port1, LOW);
  digitalWrite(motor1Port2, HIGH);

  digitalWrite(motor2Port1, LOW);
  digitalWrite(motor2Port2, HIGH);

  analogWrite(pwmPort1, speed);
	analogWrite(pwmPort2, speed);
}

void DriveBase::turnLeft(int speed) {
  digitalWrite(motor1Port1, HIGH);
  digitalWrite(motor1Port2, LOW);

  digitalWrite(motor2Port1, HIGH);
  digitalWrite(motor2Port2, LOW);

  analogWrite(pwmPort1, speed);
	analogWrite(pwmPort2, speed);
}

// overload movment functions

void DriveBase::moveForward() {
  moveForward(globalSpeed);
}

void DriveBase::moveBack() {
  moveBack(globalSpeed);
}

void DriveBase::turnRight() {
  turnRight(globalSpeed);
}

void DriveBase::turnLeft() {
  turnLeft(globalSpeed);
}

void DriveBase::stop() {
  digitalWrite(motor1Port1, LOW);
  digitalWrite(motor1Port2, LOW);

  digitalWrite(motor2Port1, LOW);
  digitalWrite(motor2Port2, LOW);
}

// getters and setters
void DriveBase::setGlobalSpeed(int pwm) {
  globalSpeed = pwm;
}

int DriveBase::getGlobalSpeed() {
  return globalSpeed;
}
