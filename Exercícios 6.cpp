/* programa gasto de kilowatts
autor: Rayssa
data: 13/09/2016
última modificação: */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

main() {
	setlocale(LC_ALL,"portuguese");
	float SM, kw_gasto, um_kw;
	printf("Informe o valor do salário mínimo: ");
	scanf("%f",&SM);
	printf("\n Informe o total de Kw gasto: ");
	scanf("%f",&kw_gasto);
		um_kw = (SM/7/100);
	printf("\n O valor de 1 Kw é: %.2f \n",um_kw);
	printf("\n O valor a ser pago é de: %.2f(R$)\n",kw_gasto * um_kw);
	printf("\n Novo valor a ser pago com desconto de 10%%: %.2f(R$)\n\n",(kw_gasto * um_kw) * 0.90); 
	system("pause");
}
