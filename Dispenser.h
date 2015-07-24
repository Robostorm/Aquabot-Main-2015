//-*-C++-*-
/* File Dispenser.h  */
#ifndef DISPENSER
#define DISPENSER

#include <Servo.h>

#include "pins.h"
#include "conf.h"
#include "states.h"

extern int bottles;
extern int bottleSold;
extern int coolerTemp;

class Dispenser{

private:

  int state = DISPREADY;
  int ledState = 0;
  int irState = 0;
  int photoState = 0;

  Servo servo;

  int motorPower = 0;
  int servoPos = 45;

  int servoState = 0;
  int servoWait = 0;

  void dispense(unsigned long now);

  void sensorUpdate(unsigned long now);
  void motorUpdate(unsigned long now);

public:
  void init();
  int update(unsigned long now);
  void setMotorPower(int power);
  void setServoPos(int pos);
  int getServoPos();
  int getMotorPower();
  int getLedState();
  int getIrState();
  int getPhotoState();
};

#endif /* !DISPENSER */
