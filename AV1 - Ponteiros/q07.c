#include <stdio.h>

int fibonacci (int months) {
  if (months == 0 || months == 1) {
    return months;
  } else {
    return fibonacci(months-1) + fibonacci(months-2);
  }
}

int main() {
  int n;

  printf("Quantidade de coelhos após N meses!\n");

  printf("Insira a quantiadade de meses: \n");
  scanf("%d", &n);

  printf("A quantidade de coelhos será: %d\n", fibonacci(n));

  return 0;
}
