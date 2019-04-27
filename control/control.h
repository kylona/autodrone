#include <stdio.h> //we will want some debug output

typedef struct dPos { //drone position
  double x; //the drones latitude (relative to position on boot)
  double y; //the drones longitude
  double z; //the drones altitude
} 

typedef struct dOri { //drone orientation
  double rol; //the roll  
  double pit; //the pitch
  double yaw; //the yaw
} 

typedef struct dMotors { //the drone motor speeds
  int fl; //front left motor
  int fr; //fornt right motor
  int bl; //back left motor
  int br; //back right motor
}


  void setMove(double x, double y, double z);

  void setTurn(double yaw);

  void setPos(dPos newPos);

  void setOri(dOri newOri);

  void tick();

  dPos measureAcceleration();

  dOri measureRotationalVelocity();

  dOri measureOrientation();

  //these will require GPS
  dPos measurePosition();

  dPos measureVelocity();
