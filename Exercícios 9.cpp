/* programa calculo de empréstimo
autor: Rayssa
data: 13/09/2016
última modificação: */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

main() {
	setlocale(LC_ALL,"portuguese");
	float sal_bruto, prest, porcent;
	printf("Digite o salário bruto: ");
	scanf("%f",&sal_bruto);
	printf("Dgite o valor da prestação: ");
	scanf("%f",&prest);
	porcent = (sal_bruto * 0.20);
	if (prest > porcent)
	 printf("\n Empréstimo não pode ser concedito \n");
	else
	 printf("\n Empréstimo pode ser concedido \n"); 
system("pause");
}
