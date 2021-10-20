#include <stdio.h>

int main(void) {
  int gols_gremio = 0, gols_inter = 0, vitorias_gremio = 0, 
  grenais = 0, vitorias_inter = 0, empates = 0, 
  numero_gols = 0, continua = 0,
  gols_gremio_total = 0, gols_inter_total = 0;
  
  for (;;) {
    scanf ("%d %d", &gols_gremio, &gols_inter);
    gols_gremio_total += gols_gremio;
    gols_inter_total += gols_inter;
    if (gols_gremio > gols_inter) {
      vitorias_gremio++;
    } else if (gols_gremio < gols_inter) {
      vitorias_inter++;
    } else {
      empates++;
    }
    grenais++;
    numero_gols = gols_gremio + gols_inter;
    printf ("Novo grenal? (1-sim 2-nao) ");
    scanf ("%d", &continua);
    if (continua == 2) {
      break;
    }
  }

  printf ("\n\033[0;35m****************************************\n\n");

  printf ("Número de GRENAIS: %d\n", grenais);
  printf ("Vitórias do Inter: %d\n", vitorias_inter);
  printf ("Vitórias do Grêmio: %d\n", vitorias_gremio);
  printf ("Empates: %d\n", empates);
  
  if (vitorias_inter > vitorias_gremio) {
    printf ("Inter venceu mais\n");
  } else if (vitorias_gremio > vitorias_inter) {
    printf ("Grêmio venceu mais\n");
  } else {
    printf ("Não houve vencedor\n");
  }

  printf ("\n\033[0;35m****************************************\n\n");
  
  return 0;
}