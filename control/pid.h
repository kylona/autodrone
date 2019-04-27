#include <stdio.h>
#include <math.h>

#include "control.h"

typedef struct pidParam {
  double propCo = 1; //proportional coefficient
  double intCo = 1; //integral coefficient
  double dirCo = 1; //derivative coefficient
};

typedef struct pidControl {
  dOri deltaOri;
  pidParam param; 
}
