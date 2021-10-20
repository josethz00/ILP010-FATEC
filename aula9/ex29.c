#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strpos(char fr[200], char busca) {
  int length = strlen(fr);
  
  for (int i = 0; i < length; i++) {
    if (fr[i] == busca) {
      return i;
    }
  }
  return -1;
}

int main(void) {
  char frase[200], busca;
  printf("Digite uma frase: ");
  fgets(frase, 200, stdin);
  printf("Digite o caractere que deseja buscar: ");
  scanf("%c", &busca);

  int pos = strpos(frase, busca);
  char * texto = calloc(30, sizeof(char));
  texto = pos == -1 ? "Não encontrado: " : "Encontrado na posição: "; 

  printf("%s%d\n", texto, pos);
  return 0;
}