/* programa convers�o de escala termom�trica
autor: Rayssa
data: 13/09/2016
�ltima modifica��o: */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

main() {
	setlocale(LC_ALL,"portuguese");
	int tgc;
	float F=(9*tgc+160)/5;
	printf("Informe temperatura em graus Celsius: ");
	scanf("%d",&tgc);
	printf("\n %d C� corresponde a %.2f Graus Farenheit \n\n", tgc,F );
	system("pause");
}

