#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char name[] = {};

  printf("Get Name: ");
  scanf("%s\n", name);
  setbuf(stdin, NULL);

  printf("%s", name);

  printf("Get Name: ");
  gets(name);

  printf("%s\n", name);

  return 0;
}
