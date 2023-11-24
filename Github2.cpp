#include <stdio.h>
#include <stdlib.h>
//Fluxo de Caixa
//Luiz Elias e Gustavo Mendes
//Nome da Empresa: LG Sapiens
//Data de Início: 13/11
//Data final: 24/11
//Data da ultima Atualização: 22/11

int main(void) {
    float CustosDiretos, DespesasOperacionais, DespesasGerais, AtivosFixos, Pagamentosdeemprestimos, Suprimentos, Fornecedores;
    float DinheiroInicial, RendimentoJuros, Impostos, emprestimos, ContadeCliente, VendasEmDinheiro, OutrosRecibos;
    float pagamentoMes;
    float totalMes[12];
    float variacaoLiquidaCaixa = 0;
    float totalFiscaisAno = 0;
    int repetir;
	// Cor do Ambiente
    system("color F0");
    printf("\t Bem-vindo(a) a LG SAPIENS \n");

    // Entrada do dinheiro inicial apenas no primeiro mês
    printf("\n\t Insira o dinheiro inicial do primeiro mes: \n\t");
    scanf("%f", &DinheiroInicial);

    for (int mes = 0; mes < 12; mes++) {
        printf("\n\t Vamos calcular os recibos em dinheiro para o mes %d? \n", mes + 1);

        // Inserção dos outros valores
        printf("\n\t Digite o total de vendas em dinheiro do mes %d: \n\n\t", mes + 1);
        scanf("%f", &VendasEmDinheiro);

        printf("\n\t Insira as cobrancas das contas dos clientes em dinheiro do mes %d: \n\n\t", mes + 1);
        scanf("%f", &ContadeCliente);

        printf("\n\t Insira o total de emprestimos em dinheiro do mes %d: \n\n\t", mes + 1);
        scanf("%f", &emprestimos);

        printf("\n\t Insira o rendimento de juros em dinheiro do mes %d: \n\n\t", mes + 1);
        scanf("%f", &RendimentoJuros);

        printf("\n\t Insira a restituicao de impostos em dinheiro do mes %d: \n\n\t", mes + 1);
        scanf("%f", &Impostos);

        printf("\n\t Se houver, Insira outros recibos em dinheiro para o mes %d: \n\n\t", mes + 1);
        scanf("%f", &OutrosRecibos);

        totalMes[mes] = DinheiroInicial + VendasEmDinheiro + ContadeCliente + emprestimos + Impostos + RendimentoJuros + OutrosRecibos;

        printf("\n\t O total calculado no mes %d foi: %.2f \n\t", mes + 1, totalMes[mes]);

        // Despesas
        printf("\n\t Vamos calcular as despesas agora para o mes %d? \n", mes + 1);

        // Inserção das despesas
        printf("\n\t Insira os custos diretos de produto do mes %d: \n\t", mes + 1);
        scanf("%f", &CustosDiretos);

        printf("\n\t Digite o total de suprimentos em dinheiro do mes %d: \n\n\t", mes + 1);
        scanf("%f", &Suprimentos);

        printf("\n\t Insira os pagamentos de fornecedores em dinheiro do mes %d: \n\n\t", mes + 1);
        scanf("%f", &Fornecedores);

        printf("\n\t Insira o total de pagamentos de emprestimos em dinheiro do mes %d: \n\n\t", mes + 1);
        scanf("%f", &Pagamentosdeemprestimos);

        printf("\n\t Insira o total de compras de ativos fixos em dinheiro do mes %d: \n\n\t", mes + 1);
        scanf("%f", &AtivosFixos);

        printf("\n\t Insira o total de impostos em dinheiro do mes %d: \n\n\t", mes + 1);
        scanf("%f", &Impostos);

        printf("\n\t Se houver, Insira outras despesas gerais em dinheiro para o mes %d: \n\n\t", mes + 1);
        scanf("%f", &DespesasGerais);

        printf("\n\t Se houver, Insira outras despesas operacionais em dinheiro para o mes %d: \n\n\t", mes + 1);
        scanf("%f", &DespesasOperacionais);

        pagamentoMes = CustosDiretos + Suprimentos + Fornecedores + Pagamentosdeemprestimos + Impostos + AtivosFixos + DespesasGerais + DespesasOperacionais;
        printf("\n\t O total calculado de despesas no mes %d foi: %.2f \n\t", mes + 1, pagamentoMes);

        totalMes[mes] -= pagamentoMes;

        printf("\n\t O saldo final no mes %d foi: %.2f \n\t", mes + 1, totalMes[mes]);

        // Cálculo da variação líquida da caixa
        variacaoLiquidaCaixa += totalMes[mes] - DinheiroInicial;

        // Ajuste do dinheiro inicial para os próximos meses
        DinheiroInicial = totalMes[mes];

        // Cálculo do total fiscal do ano
        totalFiscaisAno += Impostos;

        system("\n\tpause");
        system("cls");
    }

    printf("\n\t A variacao liquida da caixa ao longo do ano foi: %.2f \n\t", variacaoLiquidaCaixa);
    printf("\n\t O total fiscal do ano foi: %.2f \n\t", totalFiscaisAno);

    // Verifica se houve lucro ou prejuízo
    if (variacaoLiquidaCaixa >= 0) {
        printf("\n\t Houve lucro ao longo do ano: %.2f \n\t", variacaoLiquidaCaixa);
    } else {
        printf("\n\t Houve prejuizo ao longo do ano: %.2f \n\t", variacaoLiquidaCaixa);
    }
}

