#include"listas.h"

int main() {
  Lista* l = lista_cria();
  lista_insere(l, 5);
  lista_insere(l, 2);
  lista_insere(l, -1);

  return 0;
}