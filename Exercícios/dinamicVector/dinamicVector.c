#include "dinamicVector.h"
#include <stdlib.h>

#define T_INICIAL 10

typedef struct vetorDin {
  float* v;
  int n;
  int n_max;
} VetorDin;


VetorDin* vd_cria(void) {
   VetorDin *novo = (VetorDin*)malloc(sizeof(VetorDin));
   novo -> n = 0;
   novo -> n_max = T_INICIAL;
   return novo;
}

void vd_insere(VetorDin* vd, float x) {
  if (vd -> n >= vd -> n_max) {
    vd -> v = (float*) realloc( vd -> v, (vd-> n + T_INICIAL)*sizeof(float));
    vd -> n_max += T_INICIAL;
  }

  vd -> v[vd -> n++] = x;
}
