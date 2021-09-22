#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int numberlen(n) {
  int count = 0;
  do { n /= 10; ++count; } while (n != 0);
  return count;
}

int main(void) {
  int a;
  printf("Digite um numero: ");
  scanf("%d", &a);
  printf("O inverso de %d é: ", a);
  print_reverse(a);
}