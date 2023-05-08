#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

typedef struct fila_ {
  int* vet;
  int n; // numero de termos
  int dim; // dimensão
  int inicio;
  //fim = (inicio+n)%dim
};

// calcular  fim  = (inicio + n - 1)%dim;

Fila* fila_cria (void) {
  Fila* f = (Fila*)malloc(sizeof(Fila));

  if (f == NULL) {
    return f;
  }

  f->n = 0;
  f->inicio = f->n;
  f->dim = TAM;
  f->vet = (int*)malloc(f->dim*sizeof(int));

  if (f->vet == NULL) {
    free(f);
    return NULL;
  }

  return f;
};

void fila_insere (Fila* f, int v) {
  fila_trata_disponibilidade(f);

  int fim = (f->inicio + f->n) % f->dim;
  f->vet[fim] = v;
  f->n++;

};

int fila_remove (Fila* f, int* value) {
  if (f->n == 0) {
    return -1;
  }

  *value = f->vet[f->inicio];

  int inicio = (f->inicio + f->n) % f->dim;

  f->n--;
  return 0;
};

int fila_vazia (Fila* f) {
  return (f->n == 0);
};

void fila_libera (Fila* f) {
  free(f->vet);
  free(f);
};

void fila_exibe(Fila* f) {
  int pos_atual = f->inicio;
  int n_exibidos = 0;

  printf("Fila: ");

  while (n_exibidos < f->n) {
    printf("%.2f", f->vet[pos_atual]);
    pos_atual = (pos_atual + 1) % f->dim;
    n_exibidos++;
  }
};

void fila_trata_disponibilidade (Fila* f) {
  if (f->n == f->dim) {
    f->dim *= 2;
    f->vet = (int*)realloc(f->vet, f->dim * sizeof(int));

    if (f->vet == NULL) {
      printf("Erro ao realocar o vetor");
      return;
    }

    if (f->inicio != 0) { // mover os elementos do final
      int *src = &f->vet[f->inicio];
      int *dest = &f->vet[f->dim - f->n + f->inicio]; // f->dim - f->n + f->inicio = novo início

      int bytes = (f->inicio - f->n) * sizeof(int);
      memmove(dest, src, bytes);
    }
  }
}
