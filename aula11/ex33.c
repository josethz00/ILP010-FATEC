#include <stdio.h>
#include <stdlib.h>
#include "./ex33.h"

void LeALunos(Aluno alunos[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("Digite o nome do aluno: ");
    fgets(alunos[i].nome, 21, stdin);

    printf("Digite o registro de matrícula do aluno: ");
    scanf("%s", &alunos[i].matricula);

    printf("Digite a média final do aluno:  ");
    scanf("%f", &alunos[i].mediaFinal);
  }
}

void ImprimeAlunos(Aluno alunos[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("Nome: %s\n", alunos[i].nome);
    printf("Matrícula: %s\n", alunos[i].matricula);
    printf("Média final: %.2f\n", alunos[i].mediaFinal);
  }
}

int main(void) {
  int n;
  printf("Digite o número de alunos: ");
  scanf("%d", &n);

  Aluno alunos[n];
  LeALunos(alunos, n);
  ImprimeAlunos(alunos, n);
  return 0;
}
