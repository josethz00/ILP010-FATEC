#include <stdio.h>

int main()
{
  float celsius, fahrenheit;

  printf("Entre a temperatura em Fahrenheit: ");
  scanf("%f", &fahrenheit);

  celsius = (fahrenheit - 32) * 5 / 9;
  printf("%.3f Fahrenheit = %.2f Celsius", fahrenheit, celsius);

  return 0;
}