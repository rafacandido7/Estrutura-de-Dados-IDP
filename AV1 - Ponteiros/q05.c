#include <stdio.h>

struct Person {
  char sex;
  float height;
  float weight;
};

void idealWeightForEachPerson (int nPersons) {
  for (int i = 0; i < nPersons; i++) {
    struct Person _person;

    printf("A partir de agora colheremos as informações da %dª pessoa \n", i + 1);

    printf("Digite o sexo (F ou M) da %dª pessoa:\n", i + 1);
    scanf(" %c", &_person.sex);

    printf("Digite a altura (em metros) da %dª pessoa:\n", i + 1);
    scanf("%f", &_person.height);

    if (_person.sex != ('M' || 'F')) {
      printf("O sexo digitado é inválido!");
      break;
    }

    if (_person.sex == 'F') {
      _person.weight = (62.1 * _person.height - 44.7);

      printf("O peso ideal para a %d pessoa é %f kg\n", i + 1, _person.weight);
    }

    if (_person.sex == 'M') {
      _person.weight = (72.7 *_person.height - 58);

      printf("O peso ideal para a %d pessoa é %f kg\n", i + 1, _person.weight);
    }

  }
}

int main() {
  int nPersons;

  printf("Calcule o Peso Ideal\n");

  printf("Digite o número de pessoas (n): \n");
  scanf("%d", &nPersons);

  idealWeightForEachPerson(nPersons);

  return 0;
}
