#include <stdio.h>

int main(void) {
  float imc, peso, altura;
  printf("Digite peso e altura: ");
  scanf("%f   %f", &peso, &altura);

  imc = peso / (altura * altura);
  printf("Seu IMC: %.3f", imc);

  return 0;
}