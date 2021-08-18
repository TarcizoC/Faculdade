#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int X[2][2];
	int Y[2][2];
	int Z[2][2];
	int i,j,J,soma=0;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("valor [%d][%d]",i,j);
			scanf("%d",&X[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("2 valor [%d][%d]",i,j);
			scanf("%d",&Y[i][j]);
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(J=0;J<2;J++)
		{
			for(j=0;j<2;j++)
			{
				soma=soma+(X[i][j] * Y[j][J]);
			}
		Z[i][J]=soma;
		soma=0;			
		}
	
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" %d ",Z[i][j]);
		}
		printf("\n");
	}
	return 0;
}
