#include <stdio.h>

int max(int a, int b) {
  return a > b ? a : b;
}

int main (void) {
  int a, b;

  printf("Digite o primeiro número:    ");
  scanf("%d", &a);

  printf("Digite o segundo número:    ");
  scanf("%d", &b);

  printf("O maior número é %d\n", max(a, b));
}