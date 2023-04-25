#ifndef LISTA_INT_H_
#define LISTA_INT_H_

typedef struct lista_int_no ListaIntNo;
typedef struct lista_int ListaInt; // Util para guardar meta dados da listas

// Interface das funções
ListaInt* lst_cria(void);
void lst_insere_inicio(ListaInt *l, int v);
void lst_imprime(ListaInt *l);
int lst_pertence (ListaInt *l, int v);
void lst_retira(ListaInt *l, int v);
int lst_vazia(ListaInt *l);
void lst_libera(ListaInt *l);

// v2
int lst_comprimento(ListaInt *l);
void lst_insere_fim(ListaInt *l, int v);

//v3

#endif
