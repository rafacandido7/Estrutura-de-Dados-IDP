#ifndef FOO_H_
#define FOO_H_


typedef struct lista_no ListaNo;
typedef struct lista Lista;

Lista* lista_cria(void);
void lista_insere(Lista *l, int value);
void lista_imprime(Lista* l);
int pertence(Lista* l, int value);
void lista_retira(Lista* l, int value);
int lista_vazia(Lista* l);
void libera_lista(Lista* l);

#endif
