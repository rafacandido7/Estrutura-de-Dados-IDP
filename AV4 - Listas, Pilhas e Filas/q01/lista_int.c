#include "lista_int.h"
#include <stdlib.h>
#include <stdio.h>

struct lista_double_no {
  double info;
  ListaDoubleNo *proximo;
};

struct lista_double {
  ListaDoubleNo *primeiro;

};

ListaDouble *lst_cria(void) {
  ListaDouble *l = (ListaDouble *)malloc(sizeof(ListaDouble));
  l->primeiro = NULL;

  return l;
}

void lst_insere(ListaDouble *l, double v) {
  ListaDoubleNo *novo = (ListaDoubleNo *)malloc(sizeof(ListaDoubleNo));
  novo->info = v;
  novo->proximo = l->primeiro;
  l->primeiro = novo;
}

void lst_imprime(ListaDouble *l) {
  ListaDoubleNo *ptr = l->primeiro;

  while (ptr != NULL) {
    printf("%d ", ptr->info);
    ptr = ptr->proximo;
  }
}

int lst_pertence(ListaDouble *l, double v) {
  ListaDoubleNo *ptr = l->primeiro;
  while (ptr != NULL) {
    if (ptr->info == v)
      return 1;
    ptr = ptr->proximo;
  }

  return 0;
}

void lst_retira(ListaDouble *l, double v) {
  ListaDoubleNo *ant = NULL;
  ListaDoubleNo *p = l->primeiro;

  while (p != NULL && p->info != v) {
    ant = p;
    p = p->proximo;
  }

  if (p != NULL)
  {
    if (ant == NULL)
      l->primeiro = p->proximo;
    else
      ant->proximo = p->proximo;

    free(p);
  }
}

int lst_vazia(ListaDouble *l) {
  return (l->primeiro == NULL);
}

void lst_libera(ListaDouble *l) {
  ListaDoubleNo *p = l->primeiro;
  while (p != NULL) {
    ListaDoubleNo *t = p->proximo;
    free(p);
    p = t;
  }

  free(l);
}
