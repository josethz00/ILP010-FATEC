#include <stdio.h>
#include <locale.h>

int main (void) {
  setlocale(LC_ALL, "Portuguese");

  char nome[] = "José Thomaz";
  int idade = 18;
  char formacao[] = "Técnico em informática";
  char profissao[] = "Desenvolvedor de Sistemas";
  char experiencia[] = "2 anos";
  
  printf("Nome: %s \nIdade: %i \nFormação: %s \nProfissão: %s \nExperiência: %s \n", 
    nome, 
    idade, 
    formacao, 
    profissao, 
    experiencia
  );

  return 0;
}