#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int l,c,i,j,m;
	
	printf("quantas linhas ?   ");
	scanf("%d",&l);
	printf("\nquantas colunas ?   ");
	scanf("%d",&c);
	printf("Valor a ser multiplicado  ");
	scanf("%d",&m);
	int X[c][l];
	
	for(j=0;j<c;j++)
	{
		for(i=0;i<l;i++)
		{
			printf("Numero da pos[%d][%d]  ",j,i);
			scanf("%d",&X[j][i]);	
		}
	}
		for(j=0;j<c;j++)
		{
			for(i=0;i<l;i++)
			{
				X[j][i]=m*X[j][i];	
			}
		}
		for(j=0;j<c;j++)
	{
		for(i=0;i<l;i++)
		{
			printf("%.3d ",X[i][j]);	
		}
		printf("\n");
	}
	
	return 0;
}
