/* programa gasto de combustível
autor: Rayssa
data: 13/09/2016
última modificação: */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

main() {
	setlocale(LC_ALL,"portuguese");
	int horas, vel_media;
	float distancia, consumo;
	printf("Informe o tempo da viagem: ");
	scanf("%d", &horas);
	printf("Informe a velocidade média: ");
	scanf("%d", &vel_media); 
	distancia = horas * vel_media;
	consumo = distancia / 12;
	printf("Foram gastos %.2f de combustivel \n",consumo);
	system("pause"); 
}
