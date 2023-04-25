/* TAD: Ponto(x, y)*/

/* Tipo exportado */
typedef struct ponto Ponto;

/* Funções exportadas */
// Aloca e retorna um ponto (x, y)
Ponto* pto_cria(float x, float y);
// Libera a memória de um ponto
void pto_libera(Ponto* p);
// Retorna os valores das coordenadas de um ponto
void pto_acessa (Ponto* p, float* x, float* y);
// Atribui novos valores às coordenadas
void pto_atribui(Ponto* p, float x, float y);
// Retorna a distância entre dois pontos
float pto_distancia(Ponto* p1, Ponto* p2);
// Calcula as coordenadas polares do ponto
void pto_imprime_polares (Ponto* p);
