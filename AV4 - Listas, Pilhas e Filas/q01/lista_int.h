#ifndef LISTA_INT_H_
#define LISTA_INT_H_

typedef struct lista_double_no ListaDoubleNo;
typedef struct lista_double ListaDouble;

// Interface das funções
ListaDouble* lst_cria(void);
void lst_insere(ListaDouble *l, double v);
void lst_imprime(ListaDouble *l);
int lst_pertence (ListaDouble *l, double v);
void lst_retira(ListaDouble *l, double v);
int lst_vazia(ListaDouble *l);
void lst_libera(ListaDouble *l);

#endif
