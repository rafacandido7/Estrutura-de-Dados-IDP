#include "lista_int.h"
#include <stdio.h>
#include <stdlib.h>

struct lista_int {
  ListaIntNo *primeiro;
};

struct lista_int_no {
  int info;
  ListaIntNo *proximo;
  ListaIntNo *anterior;
};

ListaInt *lst_cria(void) {
  ListaInt *l = (ListaInt *)malloc(sizeof(ListaInt));
  l->primeiro = NULL;
  return l;
}

void lst_insere(ListaInt *l, int v) { // insere no inicio
  ListaIntNo *novo = (ListaIntNo *)malloc(sizeof(ListaIntNo));
  novo->info = v;
  novo->proximo = l->primeiro;
  novo->anterior = NULL;
  if (l->primeiro != NULL) {
    l->primeiro->anterior = novo;
  }
  l->primeiro = novo;
}

void lst_imprime(ListaInt *l) {
  ListaIntNo *ptr = l->primeiro;
  while (ptr != NULL) {
    printf("%d ", ptr->info);
    ptr = ptr->proximo;
  }
}

void lst_imprime_reverso(ListaInt *l) {
  ListaIntNo *ptr = l->primeiro;
  if (ptr == NULL)
    return;
  while (ptr != NULL) {
    ptr = ptr->proximo;
  }

  while (ptr->anterior != NULL) {
    printf("%d", ptr->info);
    ptr = ptr->anterior;
  }
}

int lst_pertence(ListaInt *l, int v) {
  ListaIntNo *ptr = l->primeiro;
  while (ptr != NULL) {
    if (ptr->info == v)
      return 1;
    ptr = ptr->proximo;
  }

  return 0;
}

void lst_retira(ListaInt *l, int v) {
  ListaIntNo *p = l->primeiro;

  while (p != NULL && p->info != v) {
    p = p->proximo;
  }

  if (p == NULL) { // lista vazia, ou elemento não encontrado
    printf("Lista vazia");
    return;
  }

  if (p == l->primeiro && p->proximo == NULL) { // lista com um elemento
    l->primeiro = NULL;
  } else if (p == l->primeiro) { // primeiro elemento
    p->proximo->anterior = NULL;
    l->primeiro = p->proximo;
  } else if (p->proximo == NULL) { // ultimo elemento
    p->anterior->proximo = p->proximo;
  } else { // elemento no meio
    p->anterior->proximo = p->proximo;
    p->proximo->anterior = p->anterior;
  }

  free(p);
}

int lst_vazia(ListaInt *l) { 
  return (l->primeiro == NULL); 
}

void lst_libera(ListaInt *l) {
  ListaIntNo *p = l->primeiro;
  while (p != NULL) {
    ListaIntNo *t = p->proximo;
    free(p);
    p = t;
  }

  free(l);
}
