/* exerc�cios 2
autor: Rayssa
data: 10/09/2016
�ltima modifica��o: */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

main() {
	setlocale(LC_ALL,"portuguese");

	float valor; 

	printf("Digite um n�mero:");
	scanf("%f", &valor);
	printf("\n Valor com reajuste de 10%% �:%.f \n", valor*10/100);
	
	system("pause");
	
}
