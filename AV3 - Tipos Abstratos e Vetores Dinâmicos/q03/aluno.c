#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "aluno.h"


struct student {
  char name[NAME_LENGTH]; // grades
  float p1, p2, p3; // tests
};

struct dinamicVector {
  Student** studentVector; // vetor
  int n; // numero de elementos
  int length; // dimensão
};

Student* createStudent (char* name, float p1, float p2, float p3) {
  Student* s = (Student*)malloc(sizeof(Student));
    if (s == NULL) exit(1);

  strncpy(s->name, name, NAME_LENGTH);

  s->p1 = p1;
  s->p2 = p2;
  s->p3 = p3;

  return s;
}

void freeStudent (Student* s) {
  free(s);
}

DinamicVector* createVector(void) {
  DinamicVector* vector = (DinamicVector*)malloc(sizeof(DinamicVector));
  if (vector == NULL) exit(1);

  vector->n = 0;
  vector->length = 2;
  vector->studentVector = (Student**)malloc(vector->length * sizeof(Student));
  if (vector->studentVector == NULL) {
    free(vector);
    exit(1);
  }

  return vector;
};

void reallocVector (DinamicVector* v) {
  v->length *= 2;
  v->studentVector = (Student**)realloc(v->studentVector, v->length * sizeof(Student));
}

DinamicVector* pushVector (DinamicVector* v, Student* student) {
  if (v -> n == v -> length) {
    reallocVector(v);
  }

  v->studentVector[v->n++] = student;
  return v;
};

int lengthVector (DinamicVector* v) {
  return v->length;
};

Student* readVector (DinamicVector* v, int i) {
  if (i < v->length) return v->studentVector[i];

  return NULL;
};

void freeVector (DinamicVector* v) {
  free(v->studentVector);
  free(v);
};
