#ifndef COMPLEX_NUMBER_H_
#define COMPLEX_NUMBER_H_

typedef struct complex Complex;

Complex* createComplex (float a, float b);
void freeComplex (Complex* c);
Complex* add2Complex (Complex* c1, Complex* c2);
Complex* subtract2Complex (Complex* c1, Complex* c2);
Complex* multiply2Complex (Complex* c1, Complex* c2);
Complex* divide2Complex (Complex* c1, Complex* c2);
void printComplex (Complex* c);

#endif
