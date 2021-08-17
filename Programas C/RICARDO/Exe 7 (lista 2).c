#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int i,j,J,aux=0,I;
	int X[2][2];
	int Y[2];
	int Z[2][2];
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Valor [%d][%d] ",i,j);
			scanf("%d",&X[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(I=0;I<2;I++)
			{
				for(J=0;J<2;J++)
				{
					if(X[i][j] > X[I][J])
					{
						aux++;
					}
				}
			}
		Y[aux]=X[i][j];
		aux=0;		
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			Z[i][j]=X[i][j] * Y[3];
			
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",Z[i][j]);
		}
		printf("\n");
	}
	return 0;
}
