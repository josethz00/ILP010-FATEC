#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
  int a, b, c;

  printf("Digite o valor do coeficiente `a`:  ");
  scanf("%d", &a);

  printf("Digite o valor do coeficiente `b`:  ");
  scanf("%d", &b);

  printf("Digite o valor do coeficiente `c`:  ");
  scanf("%d", &c);

  double delta = b*b - 4*a*c;
  if (delta < 0) {
    printf("Não há raízes reais para o valor de delta.\n");
    exit(0);
  }

  double bask_x1 = (-b + sqrt(delta)) / 2*a;
  double bask_x2 = (-b - sqrt(delta)) / 2*a;

  printf("x1 é igual a: %.2lf \n", bask_x1);
  printf("x2 é igual a: %.2lf \n", bask_x2);

  return 0;
}