/* programa calculo de média
autor: Rayssa
data: 13/09/2016
última modificação: */

#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

 main() {
	setlocale(LC_ALL,"portuguese");
	int p1,p2,p3;
	printf("Digite três numeros separados por espaço: ");
	scanf("%d, %d, %d",&p1, &p2, &p3);
	printf("A media é: %.2f \n",float(p1+p2+p3)/3); 
	system("pause");
}
