#include <stdio.h>

int main(void) {
  unsigned int n;
  unsigned long int fact_result = 1;

  printf("Digite o número que deseja saber o fatorial:    ");
  scanf("%d", &n);

  int index = n;

  while (index > 1) {
    fact_result *= index--;
  }

  printf("%d! = %ld\n", n, fact_result);
  return 0;
}