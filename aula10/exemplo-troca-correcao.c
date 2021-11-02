#include <stdio.h>

void troca(int *a, int *b) {
  int aux = *a;
  *a = *b;
  *b = aux;
}

int main(void) {
  int a = 5, b = 20;
  printf("a = %d, b = %d\n", a, b);
  troca(&a, &b);
  printf("a = %d, b = %d\n", a, b);
  return 0;
}