#include "lista_int.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  ListaInt *l = lst_cria();
  int arg = 1;

  while (arg > 0) {
    printf("Lista Duplamente encadeada\n");

    printf("(1) - Inserir um elemento no inicio na lista\n");
    printf("(2) - Remover um elemento na lista\n");
    printf("(3) - Verificar se esse elemento pertence a lista\n");
    printf("(4) - Exibir os elementos da lista\n");
    printf("(5) - Inserir um elemento no final na lista\n");
    printf("(6) - Imprimir o comprimento da lista\n");
    printf("(-1) - Sair do programa\n");
    printf("Escolha a operação que você quer executar:\n");
    scanf("%d", &arg);

    if (arg == -1) {
      printf("O Programa foi encerrado!");
      lst_libera(l);
      exit(1);
    } else if (arg == 1) {
      int value;

      printf("Digite o valor que você quer adicionar a lista: ");
      scanf("%d", &value);

      lst_insere_inicio(l, value);

      printf("-------------------------------\n");
    } else if (arg == 2) {
      lst_vazia(l);

      int value;

      printf("Digite o valor que você quer remover da lista:");
      scanf("%d", &value);

      lst_retira(l, value);

      printf("-------------------------------\n");
    } else if (arg == 3) {
      lst_vazia(l);

      int value;

      printf("Digite o valor que você quer verificar se está na lista: ");
      scanf("%d", &value);

      int ret = lst_pertence(l, value);

      if (ret == 0) {
        printf("O número %d não pertence a lista.\n", value);
      } else {
        printf("O número %d pertence a lista.\n", value);
      }
      printf("-------------------------------\n");

    } else if (arg == 4) {
      printf("Os valores da lista são: \n");

      lst_imprime(l);

      printf("\n");
      printf("-------------------------------\n");
    } else if (arg == 5) {
      int value;

      printf("Digite o valor que você quer adicionar a lista: ");
      scanf("%d", &value);

      lst_insere_fim(l, value);

      printf("-------------------------------\n");
    }else if (arg == 6) {
      printf("O comprimento da lista é: %d\n", lst_comprimento(l));
      printf("-------------------------------\n");
    }
  }
}
