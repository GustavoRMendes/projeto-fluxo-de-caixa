#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//Luis Elias e Gustavo Mendes
//Fluxo de Caixa
//Nome da Impresa: LG Sapiens
//Data de Inicio: 13/11
//Data final: 24/11
int main(void) {
  // Declaração de variáveis
  float receitas[12], despesas[12], saldo[12];
  float dinheiroInicial;
  float variacaoLiquidaCaixa;
  int mes;
  //cor do ambiente
  system("color F0");
  // Entrada de dados
  printf("\t Digite o dinheiro inicial: \n\t ");
  scanf("%f", &dinheiroInicial);
  for (mes = 0; mes < 12; mes++) {
    printf("\t Digite as receitas do mes %d: \n\t ", mes + 1);
    scanf("%f", &receitas[mes]);
    printf("\t Digite as despesas do mes %d: \n\t ", mes + 1);
    scanf("%f", &despesas[mes]);
  }
  // Cálculo do fluxo de caixa
  for (mes = 0; mes < 12; mes++) {
    saldo[mes] = dinheiroInicial + receitas[mes] - despesas[mes];
  }
  // Saída de dados
  for (mes = 0; mes < 12; mes++) {
    printf("\t Mes %d: R$ %.2f\n", mes + 1, saldo[mes]);
  }
  // Totais fiscais
  float totalReceitasFiscais = 0;
  float totalDespesasFiscais = 0;
  for (mes = 0; mes < 12; mes++) {
    if (receitas[mes] > 0) {
      totalReceitasFiscais += receitas[mes];
    }
    if (despesas[mes] > 0) {
      totalDespesasFiscais += despesas[mes];
    }
  }
  //Variação Líquida
  for (mes = 1; mes < 12; mes++) {
    variacaoLiquidaCaixa += saldo[mes] - saldo[mes - 1];
  }
  printf("\t Variacao liquida de caixa: R$ %.2f\n", variacaoLiquidaCaixa);
  printf("\t Total de receitas fiscais: R$ %.2f\n", totalReceitasFiscais);
  printf("\t Total de despesas fiscais: R$ %.2f\n", totalDespesasFiscais);
  
  // Lucro ou prejuízo
  float lucroOuPrejuizo = totalReceitasFiscais - totalDespesasFiscais;
  printf("\t Lucro ou prejuizo: R$ %.2f\n", lucroOuPrejuizo);
}



