#include <stdio.h>
#include <stdlib.h>

/*
  (*) Representa bomba
  (-) Representa livre
*/

int* getDimension () {
  printf("Digite a dimensão da matriz:\n");
  int* dimension = (int*)malloc(sizeof(int));
  scanf("%d", dimension);

  return dimension;
}

char* readMatrix(int* dimension) {
  char* matrix = (char*)malloc((*dimension)*(*dimension)*(sizeof(char)));

  printf("Digite (-) para campo sem bomba, digite (*) para campo com bomba\n");

  for (int i = 0; i < *dimension; i++) {
    for (int j = 0; j < *dimension; j++) {
      printf("Digite a posição [%d][%d]\n", i+1, j+1);
      int* dimension = (int*)malloc(sizeof(int));
      fflush(stdin);
      scanf(" %c%*c", matrix + i*(*dimension) + j);
    }
  }

  printf("\n");
  return matrix;
}

void printMatrix (int* dimension, char* matrix) {
  printf("Aqui está a matriz que você digitou: \n");
  for (int i = 0; i < *dimension; i++) {
    for (int j = 0; j < *dimension; j++) {
      printf("%c ", *(matrix + i*(*dimension) + j));
    }
    printf("\n");
  }
}

// char* getBombs(int* dimension, char* matrix) {
//   char* field = (char*)malloc((*dimension)*(*dimension)*(sizeof(char)));

//   for (int i = 0; i < *dimension; ++i) {
//     for (int j = 0; j < *dimension; ++j) {
//       if ()
//     }
//   }

//   return field;
// }

int main() {
  printf("============= Campo Minado ===========\n");
  int* dimension = getDimension();

  char* matrix = readMatrix(dimension);
  printMatrix(dimension, matrix);
  // getBombs(dimension, matrix);
  return 0;
}
