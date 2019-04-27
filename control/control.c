#include <stdio.h>
#include <math.h>
#include "control.h"

static dPos move;
static dOri turn;
static dPos pos;
static dOri ori;
static dMotors motors;

static dOri targetOri;

void control_init() {
  targetOri.pit = 0;
  targetOri.rol = 0;
  targetOri.yaw = 0;
}
void setMove(double x, double y, double z) {
  move.x = x;
  move.y = y;
  move.z = z;
}

void setTurn(double yaw) {
  ori.yaw = yaw;
}

void setPos(dPos newPos) {
  pos = newPos;
}

void setOri(dOri newOri) {
  ori = newOri;
}

dPos measureAcceleration() {
  dPos acc;
  acc.x = 1;
  acc.y = 2;
  acc.z = -100;
  return acc;
}

dOri measureOrientation() {
  dOri measured;
  dPos acc = measureAcceleration();
  dOri.rol = atan2(acc.x, acc.y) * 180/M_PI;
  dOri.pit = atan2(-acc.z, sqrt(acc.x*acc.x + acc.y*acc.y)) * 180/M_PI;
  dOri.yaw = 0; //we can't solve for yaw yet with accelerometer
}

void tick() {
 setOri(measureOrientation());
 dOri deltaOri;
 deltaOri.pit = ori.pit - targetOri.pit;
 deltaOri.rol = ori.rol - targetOri.rol;
 deltaOri.yaw = ori.yaw - targetOri.yaw;
}
