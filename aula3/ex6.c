#include <stdio.h>

int main(void) {
  int num;
  
  printf("Digite um número:   ");
  scanf("%d", &num);

  char * val = num % 2 == 0 ? "par" : "ímpar";

  printf("O número %d é %s", num, val);

  return 0;
}