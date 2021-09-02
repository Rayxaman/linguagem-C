/* programa usando switch e struct
autor: Rayssa
data: 01/12/2016
última modificação: */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

struct Tipoproduto{
	int cod;
	char produto[50];
	int quant;
	float valor;
};

struct Tipocliente{
	int codigo;
	char nome[100], end[100], telefone[20];
	int idade;
};

main () {
	setlocale(LC_ALL,"portuguese");
	int i, op, op2;
	struct Tipoproduto item[5];
	struct Tipocliente cliente[5];
	
	while (1==1){
		printf("\n Escolha uma opção: ");
		printf("\n cadastrar Produto: (1)");
		printf("\n cadastrar Cliente: (2)");
		printf("\n consultar: (3)");
		printf("\n imprimir: (4) \t");
		scanf("%d", &op);
		printf("\n \n");
		switch (op)
		{
			case 1: 
				for (i=0; i<5; i++) {
					printf("\n Digite o código do produto: ");
					scanf("%d", &item[i].cod);
					fflush(stdin);
					printf("\n Digite o nome do produto: ");
					gets(item[i].produto);
					printf("\n Digite a quantidade em estoque: ");
					scanf("%d", &item[i].quant);
					fflush(stdin);
					printf("\n Digite o preço do produto: ");	
					scanf("%.2f", &item[i].valor);
					fflush(stdin); 
				}
				break;
			case 2:
				for (i=0; i<5; i++){
					printf("\n Cód. do cliente:");
					scanf("%d", &cliente[i].codigo);
					fflush(stdin);
					printf("\n Nome: \t" );
					gets(cliente[i].nome);
					printf("\n Idade:");
					scanf("%d", &cliente[i].idade);
					fflush(stdin);
					printf("\n Endereço:");
					gets(cliente[i].end);
					printf("\n Telefone:");
					gets(cliente[i].telefone);
					printf("\n ");
				}
				break;
			case 3: 
				for (i=0; i<5; i++) {
					printf("\n Código - Produto: %d ", item[i].cod);
					printf("\n Nome - Produto: %s", item[i].produto);
					printf("\n Estoque - Produto: %d", item[i].quant);
					printf("\n Preço - Produto: %.2f", item[i].valor);
					printf("\n");
					printf("\n Código - Cliente: %d", cliente[i].codigo);
					printf("\n Nome - Cliente: %s", cliente[i].nome);
					printf("\n Idade - Cliente: %d", cliente[i].idade);
					printf("\n Endereço - Cliente: %s", cliente[i].end);
					printf("\n Telefone - Cliente: %s", cliente[i].telefone);
					printf("\n \n");
				}
				break;
			case 4:
				for (i=0; i<5; i++) {
					printf("%s \n", item[i].produto);
					printf("%d \n", item[i].cod);
					printf("%d \n", item[i].quant);
					printf("%.2f \n", item[i].valor);
					printf("\n \n");
					printf("%s \n", cliente[i].nome);
					printf("%d \n", cliente[i].codigo);
					printf("%d \n", cliente[i].idade);
					printf("%s\n", cliente[i].end);
					printf("%s \n", cliente[i].telefone);
					printf("\n");
				}
				break;
			default:
				printf("Opção inválida!");
				break;
		}
	}
	return 0;
}
