# Estrutura de Dados

https://www.markdownguide.org/basic-syntax#headings

Repositório destinado à materia de Estrutura de Dados lecinonada pelo Prof. Nilson Donizete Guerin Junior.

## Tópicos Estudados na Disciplina:

- Ponteiros

- Alocação Dinâmica

- TAD

- Vetor Dinâmico

- Listas Encadeadas

- Pilhas

- Filas


### Resumo dos tópicos

> #### Array
  > * O nome do vetor representa um ponteiro para o primeiro elemento do vetor.
  > * Vetores são espaços sequenciais contidos na memória.
  > * Para a alocação de vetores grandes pode gerar dificuldade de alocação.
  > * **Vantagem**: Acesso randômico aos elementos.
  > * **Problema**: Não é uma estrutura flexível.
  > * **Contorno**: Realocar o Vetor, porém tem um custo computacional alto!

> #### Vetor Dinâmico
  > * Utiliza a realocação de memória de vetores utilizando a função realloc() da biblioteca <stdlib.h>.
  > `vet = (float * ) realloc(vet, m * sizeof(float))`.
  > * Partindo dessa realocação, sendo ela sucedida, o `vet` aponta para uma área de memória contínua suficiente para armazenar `m` valores.
  > * Conceitualmente:
  >   * É feito uma alocação de um novo vetor com o novo tamanho.
  >   * É feita a cópia das posições do vetor anterior para o novo (motivo do alto custo computacional).
  >   * O vetor anterior é liberado.

> #### Listas Encadeadas
  > * Para cada novo elemento inserido na estrutura, alocamos um espaço de memória para armazená-lo (struct listaEncadeada).
  > * Exemplo do tipo da estutura:
  > ```
  > struct listaEncadeada {
  >   TYPE elemento; // Cuidado! Se for um tipo diferente dos tipos base, tem-se de usar ponteiro de ponteiro.
  >   struct listaEndadeada *proxElemento;
  > };
  >```
  > * O espaço total de memória gasto é proporcional a quantidade de elementos na lista.
  > * Não é possivel garantir que os elementos ocuparão um espaço contiguo na memória, logo não teremos acesso direto ao elemento desejado.
  > * O encadeamento é feito por ponteiros que relacionam o elemento com o próximo elemento.
  > * Em compensação a leitura dessa estrutura é ruim, a leitura na ordem inversa é ruim.

> #### Arrays x Listas
  > Em construção...

> #### Pilhas
  > * LIFO(*last in, first out*), o último elemento a entrar é o primeiro a sair.
  > * Fundamentação: Todo o acesso aos seus elementos é feito através do *topo* da pilha.
  > * Se um elemento é introduzido, passa a ser o elemento do topo, e o único lemento que pode ser removido é o do topo.
  > * Operações características da lista: se um elemento é indroduzido, passa a ser o elemento do topo, e o único elemento que pode ser removido é o do topo.
  > * Exemplo de execução: Pilha de execução da linguagem C (HEAP).
  > * As pilhas pode ser implementadas de duas formas:
  >   * Arrays (Forma mais fácil).
  >   * Listas (Forma mais difícil).
  >
  > * Pilhas implementadas por array
  >   *

