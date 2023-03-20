#include <stdio.h>
#include <stdlib.h>

int vectorSum (int *vector, int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += *(vector+i);
  }
  return sum;
}

int main() {
  printf("Digite quantas posições vc deseja: \n");
  int quantity;
  scanf("%d", &quantity);

  int * v = (int *)malloc(quantity * sizeof(int));

  if (v == NULL) return 1;

  for (int i = 1; i <= quantity; i++) {
    printf("Digite a posição %d\n", i);
    scanf("%d", v + i);
  };

  int soma = vectorSum(v, quantity);
  printf("Soma: %d\n", soma);

  free(v);

  return 0;
}
