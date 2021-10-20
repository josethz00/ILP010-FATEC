#include<stdio.h>
#define retangulo(b,a) (b*a)

int main(void) {
	int b, a;
	
	printf("\nInforme o valor da base: ");
	scanf("%d", &b);
	printf("Informe o valor da altura: ");
	scanf("%d", &a);
	printf("Valor da area do retangulo: %d\n\n", retangulo(b,a));
	return 0;
}