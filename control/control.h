#include <stdio.h> //we will want some debug output

typedef struct dPos { //a position
    double x //the drones latitude (relative to position on boot)
    double y //the drones longitude
    double z //the drones altitude
} 

typedef struct dOri { //a position
    double rol //the roll  
    double pit //the pitch
    double yaw //the yaw
} 

void setMove(double x, double y, double z);

void setTurn(double yaw);

void setPos(dPos pos);

void setOri(dOri ori);

void tick();

dOri measureOrientation();

dPos measurePosition();

dOri measureRotationalVelocity();

dPos measureVelocity();
