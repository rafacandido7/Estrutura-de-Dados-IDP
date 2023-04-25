#include "complexNumber.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// a + b*i

struct complex {
  float a; // real part
  float b; // imaginary part
};

Complex* createComplex (float a, float b) {
  Complex* c = (Complex*) malloc(sizeof(Complex));

  if (c == NULL) {
    printf("Erro ao alocar memória!\n");
    exit(1);
  }

  c -> a = a;
  c -> b = b;

  return c;
};

void freeComplex (Complex* c) {
  free(c);
};

Complex* add2Complex (Complex* c1, Complex* c2) {
  float a =c1 -> a + c2 -> a;
  float b =c1 -> b + c2 -> b;

  Complex* c = createComplex(a, b);

  return c;
};

Complex* subtract2Complex (Complex* c1, Complex* c2) {
  float a =c1 -> a - c2 -> a;
  float b =c1 -> b - c2 -> b;

  Complex* c = createComplex(a, b);

  return c;
};

Complex* multiply2Complex (Complex* c1, Complex* c2) {
  float a =((c1 -> a) * (c2 -> a)) - ((c1 -> b) * (c2 -> b));
  float b =((c1 -> a) * (c2 -> b)) + ((c1 -> b) * (c2 -> a));

  Complex* c = createComplex(a, b);

  return c;
};

Complex* divide2Complex (Complex* c1, Complex* c2) {
  float squareNorm = pow(c2 -> a,2) + pow(c2 -> b,2);

  float a =((c1 -> a)*(c2 -> a) + (c1 -> b)*(c2 -> b))/squareNorm;
  float b =((c1 -> b)*(c2 -> a) - (c1 -> a)*(c2 -> b))/squareNorm;

  Complex* c = createComplex(a, b);

  return c;
};

void printComplex (Complex* c) {
  if (c -> b == 0) {
    printf("O Complexo só possui parte real %f", c -> a);
    return;
  }
  if (c -> b > 0) {
    printf("O número complexo digitado é %f + %fi\n", c -> a, c -> b);
    return;
  }
  if (c -> b < 0) {
    printf("O número complexo digitado é %f - %fi\n", c -> a, c -> b);
    return;
  }

};
