#ifndef FILA_H_
#define FILA_H_

#define TAM 5

typedef struct fila_ Fila;

Fila* fila_cria (void);
void fila_insere (Fila* f, int v);
int fila_remove (Fila* f, int* value);
int fila_vazia (Fila* f);
void fila_libera (Fila* f);
void fila_exibe(Fila* f);
void fila_trata_disponibilidade (Fila* f);

#endif
