#include <stdio.h>
#include <stdlib.h>
#define max 10

typedef struct {
  union {
    float fval;
    float * fvalarr;
  } a;
  union {
    float fval;
    float * fvalarr;
  } b;
} tuple;

tuple initTuple() {
  tuple t;
  t.a.fvalarr = (float *) malloc(max * sizeof(float));
  t.b.fvalarr = (float *) malloc(max * sizeof(float));
  return t;
}

void obtem(float temp[max][2], int arrLen) {
  for (int i = 0; i < arrLen; i++) {
    printf("\033[0;35m****************************************\n\n");
    printf("\033[0m");
    printf("Aluno %d\n", i+1);
    printf("Insira a %dª nota: ", 1);
    scanf("%f", &temp[i][0]);
    printf("Insira a %dª nota: ", 2);
    scanf("%f", &temp[i][1]);
    printf("\033[0;35m\n****************************************\n\n");
  }
}

tuple media(float temp[max][2], int arrLen) {
  float mediaAlunos[max];
  float soma;
  tuple t = initTuple();

  for (int i = 0; i < arrLen; i++) {
    soma += temp[i][0] + temp[i][1];
    mediaAlunos[i] = (temp[i][0] + temp[i][1]) / 2;
  }
  t.a.fval = soma / arrLen;
  t.b.fvalarr = mediaAlunos;
  return t;
}

void conta(float * notas, int arrLen, float media) {
  for (int i = 0; i < arrLen; i++) {
    if (notas[i] > media)
      printf("\033[0;32mAluno %d está acima da média\n", i+1);
    else if (notas[i] == media)
      printf("\033[0;33mAluno %d está na média\n", i+1);
    else
      printf("\033[0;31mAluno %d está abaixo da média\n", i+1);
  }
}

int main() {
  float temp[max][2];
  tuple t = initTuple();
  obtem(temp, max);
  t = media(temp, max);
  conta(t.b.fvalarr, max, t.a.fval);
  return 0;
}
