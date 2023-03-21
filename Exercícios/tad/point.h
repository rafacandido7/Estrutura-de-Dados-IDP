typedef struct point Point;

Point* createPoint (float x, float y);
void freePoint (Point* p);
void readPoint (Point* p, float* x, float* y);
float distanceToOrigin (Point* p);
float distanceBetweenPoints (Point* p1, Point* p2);
