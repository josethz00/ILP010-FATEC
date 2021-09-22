#include <stdio.h>

unsigned int rec_prod(int a, int b) {
  if (b == 0 || a == 0)
    return 0;
  return a + rec_prod(a, b - 1);
} 

int main(void) {
  int a, b;
  printf("Digite o primeiro numero: ");
  scanf("%d", &a);
  printf("Digite o segundo numero: ");
  scanf("%d", &b);
  printf("O produto dos dois numeros é: %d\n", rec_prod(a, b));
}