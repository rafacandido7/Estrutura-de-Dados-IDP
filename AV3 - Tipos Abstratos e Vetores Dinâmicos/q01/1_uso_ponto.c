#include <stdio.h>
#include "ponto.c"

int main()
{
    Ponto *p = pto_cria(0.0, 0.0);
    Ponto *q = pto_cria(3, 4);

    float d = pto_distancia(p, q);

    printf("Distancia: %f\n", d);

    pto_imprime_polares(q);

    pto_libera(q);
    pto_libera(p);

    return 0;
}
