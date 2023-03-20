#include <stdio.h>
#include <stdlib.h>

int getTemperatures (int vector) {
  for (int i = 0; i < 12; i++) {
    printf("Insira o valor da temperatura no %d mês: \n", i+1);
    scanf("%d", vector + i);
  }

  return vector;
}

int getHighAndLowTemperatures () {

}

int main() {
  printf("Pege a menor e maior temperatura\n");

  int temperatures = (int*)malloc(12 * sizeof(int));
  temperatures = getTemperatures(temperatures);

  return 0;
}
