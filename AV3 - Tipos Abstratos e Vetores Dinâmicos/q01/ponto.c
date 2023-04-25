#include "ponto.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct ponto {
    float x;
    float y;
};

Ponto* pto_cria(float x, float y)
{
    Ponto* p = (Ponto*) malloc(sizeof(Ponto));
    if (p == NULL)
    {
        printf("Memroia insuficiente\n");
        exit(1);
    }

    p->x = x;
    p->y = y;

    return p;
}

void pto_libera(Ponto *p)
{
    free(p);
}

void pto_acessa(Ponto* p, float* x, float* y)
{
    *x = p->x;
    *y = p->y;
}

void pto_atribui(Ponto* p, float x, float y)
{
    p->x = x;
    p->y = y;
}

float pto_distancia(Ponto* p1, Ponto* p2) // calcula a hipotenusa
{
    float dx = p2->x - p1->x;
    float dy = p2->y - p1->y;
    return sqrt(dx * dx + dy * dy);
}

void pto_imprime_polares(Ponto* p) {
  // Criar um ponto representando a origem.
  Ponto* origin = pto_cria(0, 0);

  // Acessa o ponto.
  float x, y;
  pto_acessa(p, &x, &y);

  // Encontrar o raio
  float distance = pto_distancia(p, origin);

  // Encontrar o angulo utilizando as funções da math.h;
  float O = atan2(x, y);

  printf("As coordenadas polares do ponto (%f,%f) são %f(cosß+senß)\n Onde ß = %f", x, y, distance, O);
}

