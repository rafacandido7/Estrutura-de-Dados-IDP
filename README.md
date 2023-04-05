# Estrutura de Dados

https://www.markdownguide.org/basic-syntax#headings

Repositório destinado aos exercícios feitos da disciplina de Estrutura de Dados.

## Tópicos Estudados na Disciplina:

- Ponteiros

- Alocação Dinâmica

- TAD

- Vetor Dinâmico



### Resumo dos tópicos

> #### Vetor Dinâmico
  > Utiliza a realocação de memória de vetores utilizando a função realloc() da biblioteca <stdlib.h>.
  > `vet = (float * ) realloc(vet, m * sizeof(float))`.
  >

> #### O Problema dos Vetores
  > Vetores são espaços sequenciais contidos na memória.
  > Para a alocação de vetores grandes pode gerar dificuldade de alocação.
  > **Problema:** Não é uma estrutura flexível.
  > **Contorno**: Realocar o Vetor, porém tem um custo computacional alto!

> #### Listas Encadeadas
  > Para cada novo elemento inserido na estrutura, alocamoms um espaço de memória para armazená-lo (struct listaEncadeada).
  > Exemplo do tipo da estutura:
  > `struct listaEncadeada {
  >   TYPE elemento;
  >   struct listaEndadeada *proxElemento;
  > };`
  > O espaço total de memória gasto é proporcional a quantidade de elementos na lista.
  > Não é possivel garantir que os elementos ocuparão um espaço contiguo na memória, logo não teremos acesso direto ao elemento desejado.
  > O encadeamento é feito por ponteiros que relacionam o elemento com o próximo elemento.
  > Em compensação a leitura dessa estrutura é ruim, a leitura na ordem inversa é ruim.
