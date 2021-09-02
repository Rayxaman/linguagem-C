/* programa usando struct
autor: Rayssa
data: 17/11/2016
última modificação: */


#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

struct TipoProduto{
	int codigo;
	int q_est;
	char nome[50];
	float preco;
};
main() {
	setlocale (LC_ALL,"portuguese");
	int i;
	struct TipoProduto produto[15];
	for (i=0; i<15; i++) {
		printf("\n Digite o nome do produto: ");
		gets(produto[i].nome);
		printf("\n Digite o código do produto: ");
		scanf("%d", &produto[i].codigo);
		fflush(stdin);
		printf("\n Digite a quantidade em estoque desse produto: ");
		scanf("%d", &produto[i].q_est);
		fflush(stdin);
		printf("\n Digite o preço do produto: ");	
		scanf("%.2f", &produto[i].preco);
		fflush (stdin);
}
	for (i=0; i<15; i++)
	{
		printf("\n %s", produto[i].nome);
		printf("\n %d", produto[i].codigo);
		printf("\n %d", produto[i].q_est);
		printf("\n %.2f", produto[i].preco);
	}
}
