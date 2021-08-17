#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int X[3][3];
	int Soma,i,j;
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("valor [%d][%d]",i,j);
			scanf("%d",&X[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		Soma=X[i][i] + Soma;
	}
	printf("%d ",Soma);
	return 0;
}
