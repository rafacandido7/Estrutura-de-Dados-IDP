#include <stdio.h>

int fibonacci (int *months) {
  int n1 = 0;
  int n2 = 1;

  for (int i = 1; i < *months; i++) {
    int n3 = n1 + n2;
    n1 = n2;
    n2 = n3;
  }
  return n2;
}

int main() {
  int n;
  int *p = &n;

  printf("Quantidade de coelhos após N meses!\n");

  printf("Insira a quantiadade de meses: \n");
  scanf("%d", p);

  printf("A quantidade de coelhos será: %d\n", fibonacci(p));

  return 0;
}
