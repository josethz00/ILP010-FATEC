#include <stdio.h>

int main(void) {
  double x;
  unsigned int n;

  printf("\nDigite o valor real de x:   ");
  scanf("%lf", &x);

  printf("\nDigite o valor inteiro positivo de n:   ");
  scanf("%d", &n);

  if (x == 0) {
    return 0;
  }

  if (n == 0) {
    printf("%.2lf^%d ==> %.2lf", x, n, (double)1);
    return 0;
  }

  double res = x;

  for (int i=1; i < n; i++) {
    res = res * x;
  }

  printf("%.2lf^%d ==> %.2lf", x, n, res);

  return 0;
}