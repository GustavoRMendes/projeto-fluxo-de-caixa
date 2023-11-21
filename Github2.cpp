#include <stdio.h>
#include <stdlib.h>
//Nome da Impresa: LG Sapiens
//Data de Início: 13/11
//Data final: 24/11
//Data da ultima Atualização: 21/11
int main(void) {
	float DinheiroInicial;
	float PagamentosDinheiro;
	float VendasEmDinheiro;
	float RendimentoJuros;
	float SaldoInicial;
	float emprestimos;
	float ContadeCliente;
	float Impostos;
	float TotalRecibos;
	float variacaoLiquida;
	float TotalPagamentos;
	float TotalFiscais;
	int opcao;
	float totalMes1;
	int repetir;	
	system("color F0");
	do{
		//Recibos em Dinheiro
		printf("\t 1-Inserir: \n");
		printf("\t 2-Calcular Fluxo de caixa: \n");
		scanf("%d", &opcao);
		system("cls");
		printf("\tInsira o dinheiro inicial na mao do mes 1: \n");
		scanf("%f",&DinheiroInicial);
		printf("\tDigite o total de vendas em dinheiro do primeiro mes: \n");
		scanf("%f",&VendasEmDinheiro);
		printf("\tInsira as cobrancas das contas dos clientes em dinheiro do primeiro mes: \n");
		scanf("%f",&ContadeCliente);
		printf("\tInsira o total de emprestimos em dinheiro do primeiro mes: \n");
		scanf("%f",&emprestimos);
		printf("\tInsira o rendimento de juros em dinheiro do primeiro mes: \n");
		scanf("%f",&RendimentoJuros);
		printf("\tInsira a restituicao de impostos em dinheiro do primeiro mes: \n");
		scanf("%f",&Impostos);
		totalMes1 = DinheiroInicial + VendasEmDinheiro + ContadeCliente + emprestimos + Impostos + RendimentoJuros;
		printf("\t O total calculado no primeiros mes foi: %f \n",totalMes1);
		system("pause");
		system("cls");
		printf("\t0 - Sair do programa: \n");
		printf("\t1 - Continuar no programa: \n");
		scanf("%d",&repetir);
		system("cls");
	}while(repetir == 1);
}

