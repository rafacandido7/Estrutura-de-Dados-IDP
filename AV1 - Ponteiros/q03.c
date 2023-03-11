#include <stdio.h>

int naturalSum(int *value){
  int sum = (1 + *(value))*(*(value))/2;
  return sum;
};

int main() {
  int k = 1;

  while ( k > 0 ) {
    printf("Digite um valor (K) para o programa retornar a soma dos números naturais até K\n");
    int *p = &k;
    scanf("%d", p);

    if ( *p > 0 ) printf("A soma é: %d\n", naturalSum(p));
  };

  printf("O valor digidado foi menor que 0, portando o programa se encerrará\n");
  return 0;
}
