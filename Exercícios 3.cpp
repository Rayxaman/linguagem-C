/* programa calculo de m�dia
autor: Rayssa
data: 13/09/2016
�ltima modifica��o: */

#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

 main() {
	setlocale(LC_ALL,"portuguese");
	int p1,p2,p3;
	printf("Digite tr�s numeros separados por espa�o: ");
	scanf("%d, %d, %d",&p1, &p2, &p3);
	printf("A media �: %.2f \n",float(p1+p2+p3)/3); 
	system("pause");
}
