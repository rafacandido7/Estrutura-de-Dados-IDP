#include <stdio.h>
#include <math.h>

//código antigo :{

int main() {
  int a = 0;
  int b = 0;
  int c = 0;
  double delta = 0;
  double x2 = 0;
  double x1 = 0;
  scanf("%d", &a);
  printf("\n");
  scanf("%d", &b);
  printf("\n");
  scanf("%d", &c);
  printf("\n");

  delta = pow(b, 2) - (4 * a * c);

  if (delta < 0){
    printf("Essa equação não possui raiz real.");
  }

  if (delta == 0) {
    x1 = -b / (2 * a);
    x2 = x1;
    printf("x1 = %f e x2 = %f", x1, x2);
  }

  if (delta > 0) {
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = -(b + sqrt(delta)) / (2 * a);
    printf("x1 = %f e x2 = %f", x1, x2);
    }

  return 0;
  }
