#include <stdio.h>
#include "complexNumber.c"

int main () {
  Complex* c1 = createComplex(1, 2);
  Complex* c2 = createComplex(2, 3);

  Complex* result = divide2Complex(c1, c2);

  printComplex(result);

  freeComplex(c1);
  freeComplex(c2);
  freeComplex(result);
}
