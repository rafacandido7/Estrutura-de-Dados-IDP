#include <stdio.h>
#include <stdlib.h>

typedef struct lista_int_no ListaIntNo;
typedef struct lista_head ListaHead;

struct lista_int_no {
  int v;
  ListaIntNo *prox;
};

struct lista_head {
  ListaIntNo *primeiro;
};

ListaHead* cria_lista() {
  ListaHead *l = (*ListaHead)malloc(sizeof(ListaHead));
  l -> primeiro = NULL;
  return l;
};

void adiciona_elemento(ListaHead* l, int v) {
  ListaIntNo *novo = (*ListaIntNo)malloc(sizeof(ListaIntNo));
  novo -> prox = l -> primeiro;
  novo -> v = v;
  l -> primeiro = novo;
};

void exibe_lista(ListaHead* l) {
  ListaIntNo* atual;
  atual = l -> primeiro;
  printf("Lista de elementos: ");
  for (atual = l -> primeiro; atual -> prox != NULL; atual = atual -> prox) {
    printf("%d ", atual -> v);
  }
}

int main() {
  ListaHead *l = cria_lista();
  adiciona_elemento(l, 5);
  adiciona_elemento(l, 2);
  adiciona_elemento(l, -1);

  return 0;
}
