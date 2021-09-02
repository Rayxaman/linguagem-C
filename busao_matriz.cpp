/* trabalhando com matrizes
autor: Rayssa
data: 02/06/2017
última modificação: */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<locale.h>

main()
{
	char busao [4][10];
	int l, c, usu_l, usu_c, reservas=0;
	printf("\n \n \n");
	printf("\n 1 2 3 4 5 6 7 8 9 10 \n");
	for (l=0;l<4;l++)
	{	printf("%d", l+1);
		for(c=0;c<10;c++)
		{	busao[l][c]='.';
			printf("%c ",busao[l][c]);
		}
		printf("\n");
	}
	do
	{	printf("\n Escolha a poltrona desejada"); //ou 0 p/ sair"
		printf("\n Digite a fileira:");
		scanf("%d",&usu_l);
			if(usu_l==0)
			break;
			printf("Digite a coluna:");
			scanf("%d",&usu_c);
			system("cls"); //ou "cls"
			usu_l--;
			usu_c--;
				if(busao [usu_l][usu_c]=='.')
				{	printf("Reserva realizada com sucesso!");
					busao[usu_l][usu_c]='*';
					reservas++;
				}
				else
				{	printf("Poltrona ocupada, favor escolher outra.");
				}
				printf("\n \n \n");
				printf("\n 1 2 3 4 5 6 7 8 9 10 \n");
					for (l=0;l<4;l++)
					{	printf("%d", l+1);
						for(c=0;c<10;c++)
						{	printf("%c ",busao[l][c]);
						}
						printf("\n");
					}	
	}
	while (reservas<40);
}

