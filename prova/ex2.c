#include<stdio.h>

void ddd(int cod) {
	switch (cod) {
		case 61: printf("Brasilia\n\n"); break;
		case 71: printf("Salvador\n\n"); break;
		case 11: printf("Sao Paulo\n\n"); break;
		case 21: printf("Rio de Janeiro\n\n"); break;
		case 32: printf("Juiz de Fora\n\n"); break;
		case 19: printf("Campinas\n\n"); break;
		case 27: printf("Vitoria\n\n"); break;
		case 31: printf("Belo Horizonte\n\n"); break;
		default: printf("DDD nao cadastrado\n\n");
	}
}

int main(void) {
	int cod;
	printf("\nInforme o DDD da cidade: ");
	scanf("%d", &cod);
	printf("O codigo informado refere-se a: ");
	ddd(cod);
	return 0;
}
