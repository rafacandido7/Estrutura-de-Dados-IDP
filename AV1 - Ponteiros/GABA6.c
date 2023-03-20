#include <stdio.h>
#include <stdlib.h>
int le_temp(int vetor)
{
    for (int i = 0; i < 12; i++)
    {
        printf("Restam %d valores.\nDigite um valor: ", i);
        scanf("%d", vetor + i);
    }
    return vetor;
}

int verifica(int maior, int menor, int mes, int menor_mes, int *vetor)
{
    for (int i = 0; i < 12; i++)
    {
        if (vetor[i] > (maior))
        {
            (maior) = *(vetor + i);
            (mes) = i + 1;
        }
        if ((vetor + i) < (menor))
        {
            (menor) = vetor[i];
            (menor_mes) = i + 1;
        }
    }
}

int main()
{
int *vetor = (int)malloc(12 * sizeof(int));
    int maior, menor, mes, menor_mes;
    menor = (int)malloc(sizeof(int));
    maior = (int)malloc(sizeof(int));
    mes = (int)malloc(sizeof(int));
    menor_mes = (int)malloc(sizeof(int));

    (maior) = -999;
    (menor) = 999;
    vetor = le_temp(vetor);
    verifica(maior, menor, mes, menor_mes, vetor);
    printf("O mes com a maior temperatura foi %d e a temperatura foi %d, o mes com a menor temperatura foi %d e o mes foi %d", mes, maior, menor_mes, menor);
}
