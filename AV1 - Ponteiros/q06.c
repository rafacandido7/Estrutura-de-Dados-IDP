#include <stdio.h>
#include <stdlib.h>

typedef struct asw {
  double higher;
  double lower;
  int hMonth;
  int lMonth;
} Asw;

float* getTemperatures (float* vector) {
  for (int i = 0; i < 12; i++) {
    printf("Insira o valor da temperatura no %d mês: \n", i+1);
    scanf("%f", vector + i);
  };

  return vector;
}

Asw* getHighAndLowTemperatures (float *vector, Asw* result) {
  result->higher = vector[0];
  result->lower = vector[11];

  for (int i = 0; i < 12; i++) {
    if ( vector[i] > result->higher) {
      result->higher = vector[i];
      result->hMonth = i + 1;
    }

    if ( vector[i] < result->lower ) {
      result->lower = vector[i];
      result->lMonth = i + 1;
    }
  }

  return result;
}

int main() {
  printf("Pege a menor e maior temperatura\n");

  float* temperatures = (float*)malloc(12 * sizeof(int));
  temperatures = getTemperatures(temperatures);

  Asw* result;
  result = (Asw*) malloc(sizeof(Asw));

  result = getHighAndLowTemperatures(temperatures, result);

  printf("O mês com a maior temperatura foi %d e a temperatura foi %f, o mês com a menor temperatura foi %d e o mês foi %f", result->hMonth, result->higher, result->lMonth, result->lower);

  return 0;
}
