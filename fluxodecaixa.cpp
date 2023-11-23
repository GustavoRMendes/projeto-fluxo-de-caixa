#include <stdio.h>
#include <stdlib.h>
//Luis Elias e Gustavo Mendes
//Fluxo de Caixa
//Nome da Impresa: LG Sapiens
//Data de Inicio: 13/11
//Data final: 24/11
int main(void) {
  // Declaração de variáveis
  float receitas[12], despesas[12], saldo[12];
  //Cor do Ambiente
  system("color F0");
  // Entrada de dados
  for (int i = 0; i < 12; i++) {
    printf("\t Digite as receitas do mes %d: ", i + 1);
    scanf("%f", &receitas[i]);

    printf("\t Digite as despesas do mes %d: ", i + 1);
    scanf("%f", &despesas[i]);
  }

  // Cálculo do fluxo de caixa
  for (int i = 0; i < 12; i++) {
    saldo[i] = receitas[i] - despesas[i];
  }

  // Saldo
  for (int i = 0; i < 12; i++) {
    printf("\t Mes %d: R$ %.2f\n", i + 1, saldo[i]);
  }
}


