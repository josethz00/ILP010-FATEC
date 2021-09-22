#include <stdio.h>

/*int numberlen(int n) {
  int count = 0;
  do { n /= 10; ++count; } while (n != 0);
  return count;
}*/

int rev (int number){
  int base = 1;

  while (number / (base * 10)) {
    base *= 10;
  }
  if (number <= 9){
    return number;
  } else if (number >= 10){
    int revNum = (number % 10) * base;
    return rev(number / 10) + revNum;
  }
}

int main(void) {
  int a;
  printf("Digite um numero: ");
  scanf("%d", &a);
  printf("O inverso de %d é: %d ", a, rev(a));
}