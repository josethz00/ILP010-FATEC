#include <stdio.h>

int main() {
  char c;
  printf("Digite um caracter: ");
  scanf("%c", &c);

  printf("caracter em octal: %o", c);
  return 0;
}