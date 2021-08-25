#include <stdio.h>

int main(void) {
  for(;;) {
    int input;
    printf("\nDigite um número:   ");
    scanf("%d", &input);

    if (input == 0) {
      return 0;
    }
    printf("%d ==> %d", input, input * input);
  }

  return 0;
}