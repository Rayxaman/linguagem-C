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
	int i, op;
	struct Tipoproduto item[5];
	struct Tipocliente cliente[5];
	
	while (1==1){
		printf("\n Escolha uma opção: ");
		printf("\n cadastrar: (1)");
		printf("\n consultar: (2)");
		printf("\n imprimir (3) \t \t");
		scanf("%d \n", &op);
		switch (op)
		{
			case 1: 
				for (i=0; i<5; i++) {
					printf("\n \n Digite o código do produto: ");
					scanf("%d", &item[i].cod);
					fflush(stdin);
					printf("\n Digite o nome do produto: ");
					gets(item[i].produto);
					printf("\n Digite a quantidade em estoque desse produto: ");
					scanf("%d", &item[i].quant);
					fflush(stdin);
					printf("\n Digite o preço do produto: ");	
					scanf("%.2f", &item[i].valor);
					fflush(stdin); 
				}
				break;
			case 2: 
				for (i=0; i<5; i++) {
					printf("\t %d ", item[i].cod);
					printf("\t %s", item[i].produto);
					printf("\t %d", item[i].quant);
					printf("\t %.2f", item[i].valor);	
				}
				break;
			case 3:
				for (i=0; i<5; i++) {
					printf("%d \n", item[i].cod);
					printf("%s \n", item[i].produto);
					printf("%d \n", item[i].quant);
					printf("%.2f \n", item[i].valor);	
				}
		}
		
		}
return 0;
}
