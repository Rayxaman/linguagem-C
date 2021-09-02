/* programa soma entre limites
autor: Rayssa
data: 13/09/2016
última modificação: */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

main() {
	setlocale(LC_ALL,"portuguese");
	int lim_inferior, lim_superior, x;
	float s = 0;
	printf("Informe o valor do limite inferior: ");
		scanf("%d", &lim_inferior);
	printf("Informe o valor do limite superior: ");
		scanf("%d", &lim_superior);
	if (lim_inferior % 2 == 0)
		 lim_inferior = lim_inferior + 2;
	else
		 lim_inferior = lim_inferior + 1;
	for (x=lim_inferior; x <= lim_superior -1; x=x+2){
	printf("Saída:%d \n",x);
	s = s + x;
 }
 printf("Soma: %.0f \n",s);
 system("pause");
}
