/* programa salário professor
autor: Rayssa
data: 13/09/2016
última modificação: */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

main() {
setlocale(LC_ALL,"portuguese");
float vha,nad,inss, salario, desconto;
 printf("Informe o valor da hora aula: ");
 scanf("%f",&vha);
 printf("Informe o número de aulas dadas: ");
 scanf("%f",&nad);
 printf("Informe o valor do percentual de desconto do INSS: ");
 scanf("%f",&inss);
 salario = (vha * nad);
 desconto = (salario * inss)/100;
 printf("\n Salário líquido é: %.2f \n\n",salario - desconto);
 system("pause");
}
