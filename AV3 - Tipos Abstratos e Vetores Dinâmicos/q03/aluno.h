#ifndef STUDENT_H_
#define STUDENT_H_

// Student

#define NAME_LENGTH 81
typedef struct student Student;
Student* createStudent (char* name, float p1, float p2, float p3);
void freeStudent (Student* s);

// DinamicVector
typedef struct dinamicVector DinamicVector;
DinamicVector* createVector(void);
DinamicVector* pushVector (DinamicVector* v, Student* aluno);
void reallocVector (DinamicVector* v);
int lengthVector (DinamicVector* v);
Student* readVector (DinamicVector* v, int i);
void freeVector (DinamicVector* v);

#endif
