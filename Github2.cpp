#include <stdio.h>
#include <stdlib.h>
//Luis Elias e Gustavo Mendes
//Nome da Impresa: LG Sapiens
//Data de Início: 13/11
//Data final: 24/11
//Data da ultima Atualização: 22/11
int main(void) {
	float CustosDiretos,DespesasOperacionais,DespesasGerais,AtivosFixos, Pagamentosdeemprestimos,Suprimentos,Fornecedores;
	float DinheiroInicial,RendimentoJuros,Impostos,emprestimos, ContadeCliente, VendasEmDinheiro,OutrosRecibos;
	float pagamentoMes1;
	float totalMes1, totalMes2;
	int repetir;	
	system("color F0");
	printf("\t Bem-vindo(a) a LG SAPIENS \n");
	do{
		//Entradas em Dinheiro
		printf("\t Vamos calcular os recibos em dinheiro?! \n");
		printf("\t Insira o dinheiro inicial do mes 1: \n\t");
		scanf("%f",&DinheiroInicial);
		printf("\n\t Digite o total de vendas em dinheiro do primeiro mes: \n\n\t");
		scanf("%f",&VendasEmDinheiro);
		printf("\n\t Insira as cobrancas das contas dos clientes em dinheiro do primeiro mes: \n\n\t");
		scanf("%f",&ContadeCliente);
		printf("\n\t Insira o total de emprestimos em dinheiro do primeiro mes: \n\n\t");
		scanf("%f",&emprestimos);
		printf("\n\t Insira o rendimento de juros em dinheiro do primeiro mes: \n\n\t");
		scanf("%f",&RendimentoJuros);
		printf("\n\t Insira a restituicao de impostos em dinheiro do primeiro mes: \n\n\t");
		scanf("%f",&Impostos);
		printf("\n\t Se houver, Insira outros recibos em dinhero : \n\n\t");
		scanf("%f",&OutrosRecibos);
		totalMes1 = DinheiroInicial + VendasEmDinheiro + ContadeCliente + emprestimos + Impostos + RendimentoJuros + OutrosRecibos;
		printf("\n\t O total calculado no primeiro mes foi: %.2f \n\t",totalMes1);
		system("\n\tpause");
		system("cls");
		printf("\t 0 - Sair do programa \n");
		printf("\t 1 - Calcular valor do proximo mes \n");
		printf("\t 2 - Calcular as saidas \n");
		scanf("%d",&repetir);
		system("cls");
		if(repetir == 1){
			printf("\n\t Digite o total de vendas em dinheiro do segundo mes: \n\n\t");
			scanf("%f",&VendasEmDinheiro);
			printf("\n\t Insira as cobrancas das contas dos clientes em dinheiro do segundo mes: \n\n\t");
			scanf("%f",&ContadeCliente);
			printf("\n\t Insira o total de emprestimos em dinheiro do segundo mes: \n\n\t");
			scanf("%f",&emprestimos);
			printf("\n\t Insira o rendimento de juros em dinheiro do segundo mes: \n\n\t");
			scanf("%f",&RendimentoJuros);
			printf("\n\t Insira a restituicao de impostos em dinheiro do segundo mes: \n\n\t");
			scanf("%f",&Impostos);
			printf("\n\t Se houver, Insira outros recibos em dinhero : \n\n\t");
			scanf("%f",&OutrosRecibos);
			totalMes2 = VendasEmDinheiro + ContadeCliente + emprestimos + Impostos + RendimentoJuros + OutrosRecibos;
			printf("\n\t O total calculado no segundo mes foi: %.2f \n\t",totalMes2);
			system("\n\tpause");
			system("cls");
			printf("\t 0 - Sair do programa \n");
			printf("\t 1 - Calcular valor do proximo mes \n");
			printf("\t 2 - Calcular as saidas \n\t");
			scanf("%d",&repetir);
			system("cls");	
		} else if(repetir == 2){
			printf("\t Vamos calcular as saidas agora?! \n");
			printf("\t Insira os custos diretos de produto do mes 1: \n\t");
			scanf("%f",&CustosDiretos);
			printf("\n\t Digite o total de suprimentos em dinheiro do primeiro mes: \n\n\t");
			scanf("%f",&Suprimentos);
			printf("\n\t Insira os pagamentos de fornecedores em dinheiro do primeiro mes: \n\n\t");
			scanf("%f",&Fornecedores);
			printf("\n\t Insira o total de pagamentos de emprestimos em dinheiro do primeiro mes: \n\n\t");
			scanf("%f",&Pagamentosdeemprestimos);
			printf("\n\t Insira o total de compras de ativos fixos em dinheiro do primeiro mes: \n\n\t");
			scanf("%f",&AtivosFixos);
			printf("\n\t Insira o total de impostos em dinheiro do primeiro mes: \n\n\t");
			scanf("%f",&Impostos);
			printf("\n\t Se houver, Insira outras despesas gerais em dinhero : \n\n\t");
			scanf("%f",&DespesasGerais);
			printf("\n\t Se houver, Insira outras despesas operacionais em dinhero : \n\n\t");
			scanf("%f",&DespesasOperacionais);
			pagamentoMes1 = CustosDiretos + Suprimentos + Fornecedores + Pagamentosdeemprestimos + Impostos + AtivosFixos + DespesasGerais + DespesasOperacionais;
			printf("\n\t O total calculado de despesas no primeiro mes foi: %.2f \n\t",pagamentoMes1);
			system("\n\tpause");
			system("cls");
			printf("\t 0 - Sair do programa \n");
			printf("\t 1 - Calcular valor do proximo mes \n");
			scanf("%d",&repetir);
			system("cls");
		}
	}while(repetir == 1);
}

