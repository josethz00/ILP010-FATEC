#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * reverse(char fr[200]) {
  int length = strlen(fr), final = length - 1, inicio = 0;
  char * fr_reverse = (char *) malloc(sizeof(char) * length);
  
  for (inicio = 0; inicio < length; inicio++) {
    fr_reverse[inicio] = fr[final];
    final--;
  }
  return fr_reverse;
}

int main(void) {
  char fr[200];
  printf("Digite uma frase: ");
  fgets(fr, 200, stdin);

  printf("%s", reverse(fr));

  return 0;
}
