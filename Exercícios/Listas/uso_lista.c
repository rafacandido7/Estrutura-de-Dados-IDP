#include<stdio.h>
#include<stdlib.h>
#include"listas.h"

int main() {
  Lista* l = lista_cria();
  printf("Lista vazia: %d", lista_vazia(l));
  lista_insere(l, 5);
  lista_insere(l, 2);
  lista_insere(l, -1);
  lista_imprime(l);
  printf("Lista vazia: %d", lista_vazia(l));

  lista_libera(l);
  return 0;
}
