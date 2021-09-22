#include <stdio.h>

void rodizio(int num_placa) {
  printf("O dia do rodízio do seu carro, de acordo com a sua placa é na: ");

  switch (num_placa % 10) {
    case 1: {printf("Segunda-feira");} break;
    case 2: {printf("Segunda-feira");} break;
    case 3: {printf("Terça-feira");} break;
    case 4: {printf("Terça-feira");} break;
    case 5: {printf("Quarta-feira");} break;
    case 6: {printf("Quarta-feira");} break;
    case 7: {printf("Quinta-feira");} break;
    case 8: {printf("Quinta-feira");} break;
    case 9: {printf("Sexta-feira");} break;
    case 0: {printf("Sexta-feira");} break;
    default: {printf("Placa inválida");} break;
  }
}

int main (void) {
  int num_placa;
  printf("Digite o número da sua placa:   ");
  scanf("%d", &num_placa);

  rodizio(num_placa);
}