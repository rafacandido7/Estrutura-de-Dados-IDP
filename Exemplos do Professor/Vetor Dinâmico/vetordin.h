/*
cria: cria um vetor dinamico vazio
insere: insere elemento no final do vetor
tam: retorna o numero de elementos
acessa: acesar determinado elemento
libera: liberar memoria ocupada pelo vetor
*/

typedef struct vetordin VetorDin;

VetorDin* vd_cria(void);
void vd_insere(VetorDin* vd, float x);
int vd_tam(VetorDin* vd);
float vd_acessa(VetorDin* vd, int i);
void vd_libera(VetorDin* vd);