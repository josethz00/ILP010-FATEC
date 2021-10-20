#include<stdio.h>

void quadrante(int x, int y) {
	if (x == 0 && y == 0)
	  printf("na Origem.\n\n");
  else if (x != 0 && y == 0)
    printf("no Eixo X.\n\n");
  else if (x == 0 && y != 0)
	  printf("no Eixo Y.\n\n");
	else if (x > 0 && y > 0)
	  printf("no Quadrante 1.\n\n");
	else if (x < 0 && y > 0)
	  printf("no Quadrante 2.\n\n");
	else if (x < 0 && y < 0)
	  printf("no Quadrante 3.\n\n");
	else    
    printf("no Quadrante 4.\n\n");
}

int main(void) {
	int x, y;
	printf("\nInforme os valores de x e y: ");
	scanf("%d %d", &x, &y);
	printf("O ponto informado está");
	quadrante(x,y);
	return 0;
}
