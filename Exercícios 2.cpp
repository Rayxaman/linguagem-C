/* exercícios 2
autor: Rayssa
data: 10/09/2016
última modificação: */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

main() {
	setlocale(LC_ALL,"portuguese");

	float valor; 

	printf("Digite um número:");
	scanf("%f", &valor);
	printf("\n Valor com reajuste de 10%% é:%.f \n", valor*10/100);
	
	system("pause");
	
}
