#include <stdio.h>
#include <stdlib.h>
#define max 7

void obtem(float * temp, int arrLen) {
  for (int i = 0; i < arrLen; i++) {
    printf("Insira a %dª temperatura: ", i+1);
    scanf("%f", &temp[i]);
  }
}

float media(float * temp, int arrLen) {
  float soma = 0;
  for (int i = 0; i < arrLen; i++) {
    soma += temp[i];
  }
  return soma / arrLen;
}

int conta(float * temp, int arrLen, float media) {
  int cont = 0;
  for (int i = 0; i < arrLen; i++) {
    if (temp[i] > media) {
      cont++;
    }
  }
  return cont;
}

int main() {
  float temp[max], m;
  obtem(temp, max);
  m = media(temp, max);
  printf("Estatística: %d", conta(temp, max, m));
  return 0;
}