#include<stdio.h>
#include<stdlib.h>
#include "listas.h"

typedef struct lista_no ListaNo;
typedef struct lista Lista;

struct lista_no {
  int v;
  ListaNo *prox;
};

struct lista {
  ListaNo *primeiro;
};

Lista* lista_cria() {
  Lista* l = (Lista*)malloc(sizeof(Lista));
  l -> primeiro = NULL;
  return l;
};

void lista_insere(Lista* l, int v) {
  ListaNo *novo = (ListaNo*)malloc(sizeof(ListaNo));
  novo -> prox = l -> primeiro;
  novo -> v = v;
  l -> primeiro = novo;
};

void lista_imprime(Lista* l) {
  ListaNo* atual;
  printf("Lista de elementos: ");
  for (atual = l -> primeiro; atual -> prox != NULL; atual = atual -> prox) {
    printf("%d ", atual -> v);
  }
}

int pertence(Lista* l, int value) {
  ListaNo* atual;
  for (atual = l -> primeiro; atual -> prox != NULL; atual = atual -> prox) {
    return atual -> v == value ? 1 : 0;
  }
};

void lista_libera(Lista* l) {
  ListaNo* atual;
  ListaNo* aux;

  atual = l -> primeiro;
  while (atual != NULL) {
    aux = atual -> prox;
    free(atual);
    atual = aux;
  }

  free(l);
};

int lista_vazia(Lista* l) {
  return l -> primeiro == NULL ? 1 : 0;
};

void lista_retira(Lista* l, int value) {
  ListaNo* atual;
  ListaNo* aux;

  atual = l -> primeiro;
  while (atual != NULL) {
    aux = atual -> prox;
    atual = aux;
  }
};

