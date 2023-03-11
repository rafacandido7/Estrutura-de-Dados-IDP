#include <stdio.h>

int main() {
  int grades[3];
  int weight[3];

  printf("===== Calcule a sua média ======\n");

  for (int i = 0; i < 3; i++) {
    printf("Coloque a %d nota\n", i+1);
    scanf("%d", &grades[i]);

    printf("Coloque o peso da %d nota\n", i+1);
    scanf("%d", &weight[i]);
  }

  int result = (weight[0]*grades[0] + weight[1]*grades[1] + weight[2]*grades[2])/(weight[0] + weight[1] + weight[2]);

  printf("A média final das notas é: %d\n", result);

  return 0;
}
