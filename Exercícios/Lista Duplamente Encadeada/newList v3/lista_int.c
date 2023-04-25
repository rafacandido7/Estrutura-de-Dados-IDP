#include"lista_int.h"
#include<stdlib.h>
#include<stdio.h>

struct lista_int_no {
    int info;
    ListaIntNo* proximo;
};

struct lista_int {
    ListaIntNo* primeiro;
    ListaIntNo* ultimo; //adicionar essa funcionalidade
    int length;
};


ListaInt* lst_cria(void)
{
    ListaInt *l = (ListaInt*) malloc(sizeof(ListaInt));
    l->primeiro = NULL;
    l->ultimo = NULL;
    l->length = 0;
    return l;
}

void lst_insere_inicio(ListaInt *l, int v)
{
    ListaIntNo *novo = (ListaIntNo*) malloc(sizeof(ListaIntNo));
    novo->info = v;
    novo->proximo = l->primeiro;
    l->primeiro = novo;
    l->length++;
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
        l->length--;
    }

}

int lst_vazia(ListaInt *l)
{
  if (l->primeiro == NULL) {
    printf("A lista está vazia!\n");
    return;
  }
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

int lst_comprimento(ListaInt *l) {
  return l->length;
}

void lst_insere_fim(ListaInt *l, int v) {
  ListaIntNo* new = (ListaIntNo*)malloc(sizeof(ListaIntNo));


  if (l -> primeiro == NULL) {
    l -> primeiro = new;
    return;
  }

  ListaIntNo* p = l -> primeiro;
  while(p -> proximo != NULL) {
    p = p -> proximo;
  }
  p -> proximo = new;
  l->length++;

}


