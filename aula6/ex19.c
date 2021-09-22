#include <stdio.h>

long int factorial(int n) {
  if (n == 0 || n == 1) {
    return 1;
  }
  return n* factorial(n - 1);
}

int main(void) {
  int n_factor;

  printf("Digite o número que deseja saber o fatorial:    ");
  scanf("%d", &n_factor);

  const long int fact_result = factorial(n_factor);
  printf("%d! = %ld\n", n_factor, fact_result);
  
  return 0;
}