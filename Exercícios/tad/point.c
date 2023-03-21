#include "point.h"
#include <stdlib.h>
#include <math.h>

struct point {
  float x;
  float y;
};

Point* createPoint ( float x, float y ) {
  Point* p= (Point *) malloc(sizeof(Point));

  p -> x = x;
  p -> y = y;
}

void freePoint (Point* p) {
  free(p);
}

void readPoint (Point* p, float* x, float* y) {
  *x = p->x;
  *y = p->y;
}

float distanceToOrigin (Point* p) {
  float distance;
  distance = sqrt(pow(p->x, 2) + pow(p->y, 2));

  return distance;
}

float distanceBetweenPoints (Point* p1, Point* p2) {
  float distance;
  distance = sqrt(pow(((p1->x)-(p2->x)), 2) + pow(((p1->y)-(p2->y)), 2));

  return distance;
}
