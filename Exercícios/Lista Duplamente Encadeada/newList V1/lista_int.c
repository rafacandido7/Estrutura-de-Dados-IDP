#include"lista_int.h"
#include<stdlib.h>
#include<stdio.h>

struct lista_int_no {
    int info;
    ListaIntNo* proximo;
};

struct lista_int {
    ListaIntNo* primeiro;
};


ListaInt* lst_cria(void)
{
    ListaInt *l = (ListaInt*) malloc(sizeof(ListaInt));
    l->primeiro = NULL;
    return l;
}

void lst_insere(ListaInt *l, int v)
{
    ListaIntNo *novo = (ListaIntNo*) malloc(sizeof(ListaIntNo));
    novo->info = v;
    novo->proximo = l->primeiro;
    l->primeiro = novo;
}

void lst_imprime(ListaInt *l)
{
    ListaIntNo *ptr = l->primeiro;
    while(ptr != NULL)
    {
        printf("%d ", ptr->info);
        ptr = ptr->proximo;
    }
}

int lst_pertence (ListaInt *l, int v)
{
    ListaIntNo *ptr = l->primeiro;
    while(ptr != NULL)
    {
        if (ptr->info == v)
            return 1;
        ptr = ptr->proximo;
    }

    return 0;
}

void lst_retira(ListaInt *l, int v)
{
    ListaIntNo *ant = NULL;
    ListaIntNo *p = l->primeiro;

    while (p != NULL && p->info != v)
    {
        ant = p;
        p = p->proximo;
    }

    if (p != NULL) {
        if (ant == NULL)
            l->primeiro = p->proximo;
        else
            ant->proximo = p->proximo;

        free(p);
    }
}

int lst_vazia(ListaInt *l)
{
    return (l->primeiro == NULL);
}

void lst_libera(ListaInt *l)
{
    ListaIntNo *p = l->primeiro;
    while (p != NULL)
    {
        ListaIntNo *t  = p->proximo;
        free(p);
        p = t;
    }

    free(l);
}
