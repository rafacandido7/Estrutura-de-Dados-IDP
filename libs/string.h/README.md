# Biblioteca String.h

## Funções

### `strncpy(char *dst, const char *src, size_t n)`
> * Essa função realiza a copia de uma string, recebe 3 parametros:
>   * `char *dst`: para onde se vai copiar a string.
>   * `const char *src`: de onde se é copiada a string.
>   * `size_t n`: tamanho da string que se vai copiar.
> ***Atenção!***
>   * Essa função tem uma variação a `strincpy()`, ela recebe 2 parametros a string de destino e a de origem. Porém, não faz verificação nenhuma sobre o tamanho da string, podendo assim gerar um *overflow*.

### `size_t strlen(const char *__s)`
> * Essa função recebe um parametro: a string, e retorna o tamanho dela.

### `fgets(char *dst, size_t n), size_t n)`
> * Essa função realiza a copia de uma string, recebe 3 parametros:
>   * `char *dst`: Local de armazenamento de dados.
>   * `size_t n`: tamanho da string que se vai copiar.
>   * `FILE`: Ponteiro para a estrutura FILE.
