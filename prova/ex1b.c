#include <stdio.h>

#define fah(c) ((c * (9.0/ 5.0))+ 32)

int main(void) {
  float c;
	printf("\nInforme o valor da temperatura em Graus Celsius: ");
	scanf("%f", &c);
  printf("Valor da temperatura informada em Graus Fahrenheit: %.2f \n\n", fah(c));
  return 0;
}
