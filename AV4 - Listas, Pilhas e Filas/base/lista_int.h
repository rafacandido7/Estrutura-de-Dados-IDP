#ifndef LISTA_INT_H_
#define LISTA_INT_H_

typedef struct lista_int_no ListaIntNo;
typedef struct lista_int ListaInt;

// Interface das funções
ListaInt* lst_cria(void);
void lst_insere(ListaInt *l, int v);
void lst_imprime(ListaInt *l);
int lst_pertence (ListaInt *l, int v);
void lst_retira(ListaInt *l, int v);
int lst_vazia(ListaInt *l);
void lst_libera(ListaInt *l);

#endif