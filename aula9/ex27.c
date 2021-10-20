#include <stdio.h>
#include <string.h>

int numOfWords(char sentence[200]) {
  int numOfWords = 0;
  for (int i = 0;sentence[i] != '\0';i++) {
    if (sentence[i] == ' ' && sentence[i+1] != ' ')
      numOfWords++;    
  }
  return numOfWords + 1;
}

int main(void) {
  char sentence[200];
  printf("Digite uma frase: ");
  fgets(sentence, 200, stdin);

  printf("A frase digitada possui %d palavras \n", numOfWords(sentence));
  return 0;
}