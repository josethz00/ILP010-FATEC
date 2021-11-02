#include <stdio.h>

void ordena(int *a, int *b) {
  int menor = *a < *b ? *a : *b;
  int maior = *a > *b ? *a : *b;

  *a = menor;
  *b = maior;
}

int main(void) {
  int a, b;
  
  printf("Digite dois números: ");
  scanf("%d %d", &a, &b);

  printf("a = %d, b = %d\n", a, b);
  ordena(&a, &b);
  printf("a = %d, b = %d\n", a, b);
  
  return 0;
}