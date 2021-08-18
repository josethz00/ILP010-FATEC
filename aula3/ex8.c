#include <stdio.h>

int main(void) {
  int faltas;
  double media;
  
  printf("Digite o número de faltas do aluno:   ");
  scanf("%d", &faltas);
  printf("Digite a média do aluno:   ");
  scanf("%lf", &media);

  char * faltas_str = faltas == 1 ? "falta" : "faltas";

  if (faltas > 5)
    printf("Conceito F para a média %.2lf com %d %s", media, faltas, faltas_str);
  else if (media < 6)
    printf("Conceito C para a média %.2lf com %d %s", media, faltas, faltas_str);
  else if (media >= 6.0 && media < 7.5)
    printf("Conceito B para a média %.2lf com %d %s", media, faltas, faltas_str);
  else if (media >= 7.5 && media < 9)
    printf("Conceito E para a média %.2lf com %d %s", media, faltas, faltas_str);
  else
    printf("Conceito A para a média %.2lf com %d %s", media, faltas, faltas_str);

  return 0;
}