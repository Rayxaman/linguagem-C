/* programa usando switch
autor: Rayssa
data: 08/09/2016
última modificação: */

#include <locale>
#include <stdlib.h>
#include <stdio.h>

main() {
	setlocale(LC_ALL,"portuguese");
  int n, ant, suc;
  printf("Informe um número: ");
  scanf("%d", &n);
  ant = n - 1;
  suc = n + 1;
  printf("\n");
  printf("Seu antecessor é:%d \n", ant);
  printf("Seu sucessor é: %d \n", suc);
  system("pause");
}
