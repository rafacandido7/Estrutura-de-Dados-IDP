#include <stdio.h>
#include "ponto.h"

int main() {
  Ponto* p1, p2;
  float x, y;
  float xAws, yAws;
  float distance;

  prinf("Digite o X e o Y\n");
  scanf("%f %f", &x, &y);

  p1 = makePoint(x, y);

  readPoint (p1, &xAws, &yAws);





  return 0;
}
