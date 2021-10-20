#include <stdio.h>
#include <stdlib.h>

int divide (int a, int b) {
  if (a < b)
    return 0;
  return 1 + divide(a - b, b);
}

int main (void) {
  int a, b;

  printf("Insira o primeiro número: ");
  scanf("%d", &a);

  printf("Insira o segundo número: ");
  scanf("%d", &b);

  printf("\n%d\n", divide(a, b));

  return 0;
}
