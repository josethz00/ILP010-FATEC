#include <stdio.h>
#include <stdlib.h>
#include "./ex32.h"

int main(void) {
  PESSOA melhorAmigo;

  printf("Digite o nome do melhor amigo:  ");
  fgets(melhorAmigo.nome, 31, stdin);
  printf("\n");

  printf("Digite o telefone do seu melhor amigo:  ");
  scanf("%s", melhorAmigo.fone);
  printf("\n");

  printf("Digite a data de nascimento do seu melhor amigo (dd/mm/yyyy):  ");
  scanf("%d/%d/%d", 
    &melhorAmigo.nasc.dia, 
    &melhorAmigo.nasc.mes, 
    &melhorAmigo.nasc.ano
  );
  printf("\n");

  printf("Nome: %s", melhorAmigo.nome);
  printf("Telefone: %s", melhorAmigo.fone);
  printf("\n");
  printf("Data de nascimento: %d/%d/%d", 
    melhorAmigo.nasc.dia, 
    melhorAmigo.nasc.mes, 
    melhorAmigo.nasc.ano
  );
  printf("\n");

  return 0;
}