/* programa calculo de empr�stimo
autor: Rayssa
data: 13/09/2016
�ltima modifica��o: */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

main() {
	setlocale(LC_ALL,"portuguese");
	float sal_bruto, prest, porcent;
	printf("Digite o sal�rio bruto: ");
	scanf("%f",&sal_bruto);
	printf("Dgite o valor da presta��o: ");
	scanf("%f",&prest);
	porcent = (sal_bruto * 0.20);
	if (prest > porcent)
	 printf("\n Empr�stimo n�o pode ser concedito \n");
	else
	 printf("\n Empr�stimo pode ser concedido \n"); 
system("pause");
}
