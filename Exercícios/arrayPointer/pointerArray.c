#include <stdio.h>

void readVector (int *pointer) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("Insira o valor da posição [%d][%d]\n", i+1, j+1);
      scanf("%d", pointer + i*3 + j);
    };
  };
}

int isPair (int *pointer) {
  int pairQuantity = 0;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if ((*(pointer + i*3 + j) % 2 == 0) && (*(pointer + i*3 + j) != 0) ) {
        pairQuantity++;
      };
    };
  };

  return pairQuantity;
}

#define ROW 3
#define COLLUM 3

int main() {
  int v[ROW][COLLUM];
  int *p = v;

  printf("Insira os 10 valores do vetor\n");

  readVector(p);

  int pairQuantity = isPair(p);

  printf("A quantidade de números pares é %d\n", pairQuantity);

  return 0;
}
