#include "vetordin.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM_STR 100

void le_valores(VetorDin* vd)
{
    char buffer[TAM_STR];
    float num;
    
    while(1)
    {
        printf("Digite um valor (digite nao para sair)");
        fgets(buffer, TAM_STR, stdin);
        printf("%d", strcmp(buffer, "nao"));
        if (strcmp(buffer, "nao") >= 0)
            break;
        else
            num = atof(buffer);

        vd_insere(vd, num);
    }
}

int main(int argc, char const *argv[])
{
    VetorDin *vd = vd_cria();
    le_valores(vd);

    printf("Valores do vetor: ");
    for (int i = 0; i < vd_tam(vd); i++)
        printf("%.2f ", vd_acessa(vd, i));
    printf("\n");

    return 0;
}
