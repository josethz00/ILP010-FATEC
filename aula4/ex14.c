#include <stdio.h>

int main(void) {
  int numero,
      contador,
      somador = 1,
      quadrado = 0;

  printf("Digite o valor: ");
  scanf("%d",&numero);  

  for (contador = 0; contador < numero; contador++) {
    quadrado += somador;
    somador += 2;
  }

  printf("O quadrado de %d é %d.\n", numero, quadrado);    
  return 0;
}