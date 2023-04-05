#include <stdio.h>
#include <stdlib.h>

int main() {
  int x, sdrQuantity, res;
  printf("Digite a quantidade de Leads:\n");
  scanf("%d", &x);
  sdrQuantity=2;
  res = x % sdrQuantity;
  printf("%d", res);
  return 0;
}
