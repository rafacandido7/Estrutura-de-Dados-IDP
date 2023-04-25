/*
cria: cria um vetor dinamico vazio
insere: insere elemento no final do vetor
tam: retorna o numero de elementos
acessa: acesar determinado elemento
libera: liberar memoria ocupada pelo vetor
*/

#include "vetordin.h"
#include <stdlib.h>
#include <assert.h>

struct vetordin {
    int n; // numero de elementos;
    int nmax; // dimensao do vetor;
    float* v; // o vetor de elementos;
};

VetorDin* vd_cria(void)
{
    VetorDin* vd = (VetorDin*)malloc(sizeof(VetorDin));
    vd->n = 0;
    vd->nmax = 4;
    vd->v = (float*)malloc(vd->nmax * sizeof(float));
}

void realoca(VetorDin* vd)
{
    vd->nmax *= 2; // dobra o total
    vd->v = (float*)realloc(vd->v, vd->nmax * sizeof(float));
}

void vd_insere(VetorDin* vd, float x)
{
    if (vd->n == vd->nmax)
        realoca(vd);
    vd->v[vd->n++] = x;;
}

int vd_tam(VetorDin* vd)
{
    return vd->n;
}

float vd_acessa(VetorDin* vd, int i)
{
    assert(i >= 0 && i < vd->n);
    return vd->v[i];
}

void vd_libera(VetorDin* vd)
{
    free(vd->v);
    free(vd);
}
