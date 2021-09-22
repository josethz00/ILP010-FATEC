#include <stdio.h>

double rec_pow(double base, unsigned int exponent) {
  if (exponent == 0)
    return 1;
  else
    return base * rec_pow(base, exponent - 1);
}

int main(void) {
  double base;
  unsigned int exponent;

  printf("Digite o número da base:    ");
  scanf("%lf", &base);

  printf("Digite o número do expoente:    ");
  scanf("%d", &exponent);

  double pow_result = rec_pow(base, exponent);
  printf("O resultado é: %.2lf\n", pow_result);

  return 0;
}