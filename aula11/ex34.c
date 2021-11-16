#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "./ex34.h"

double distancia(Coords a, Coords b) {
  double x = a.x - b.x;
  double y = a.y - b.y;
  return sqrt(x*x + y*y);
}

int main(void) {
  Coords a, b;

  printf("Digite as coordenadas do ponto A: ");
  scanf("%lf %lf", &a.x, &a.y);

  printf("Digite as coordenadas do ponto B: ");
  scanf("%lf %lf", &b.x, &b.y);

  printf("A distância entre os pontos é %.2lf\n", distancia(a, b));

  return 0;
}
