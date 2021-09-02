/* programa raiz quadrada
autor: Rayssa
data: 13/09/2016
última modificação: */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

main() {
	setlocale(LC_ALL,"portuguese");
	int x;
	printf("Digite um número inteiro: ");
	scanf ("%d",&x);
	printf("Elevado ao quadrado:%.f \n",float(pow(x,2)));
	system("pause");
}
