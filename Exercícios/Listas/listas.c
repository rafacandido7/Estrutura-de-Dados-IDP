#include "listas.h"
#include<stdio.h>
#include<stdlib.h>

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
  atual = l -> primeiro;
  printf("Lista de elementos: ");
  for (atual = l -> primeiro; atual -> prox != NULL; atual = atual -> prox) {
    printf("%d ", atual -> v);
  }
}

int pertence(Lista* l, int value);
void lista_retira(Lista* l, int value);
int lista_vazia(Lista* l);
void libera_lista(Lista* l);



