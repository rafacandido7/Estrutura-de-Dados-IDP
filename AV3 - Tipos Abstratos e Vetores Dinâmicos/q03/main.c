#include <stdio.h>
#include <stdlib.h>
#include "aluno.h" // Estou puxando diretamente a implementação uma vez que estou tendo erro de compilação usando a declaração. :[

#define vectorLength 3

int main() {

  DinamicVector* vector = createVector();

  for (int i = 0; i < vectorLength; i++) {
    char name[NAME_LENGTH];
    float p1, p2, p3;
    printf("Dados do %d° aluno: \n", i+1);

    printf("Digite o nome do aluno: ");

    fgets(name, NAME_LENGTH, stdin);
    name[strlen(name) - 1] = '\0';

    printf("Digite as notas p1, p2, p3\n");
    scanf("%f %f %f%*c", &p1, &p2, &p3);

    Student* st = createStudent(name, p1, p2, p3);
    pushVector(vector, st);
  }

  for (int i = 0; i < vectorLength; i++) {
    Student* st = readVector(vector, i);

    printf("Dados do %d° aluno: \n", i+1);
    // printf("Nome: %s\n", st->name);
    // printf("Notas (p1, p2, p3): %.2f, %.2f, %.2f\n", st->p1, st->p2, st->p3);
  }

  freeVector(vector);
  exit(0);
}
