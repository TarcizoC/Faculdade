#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int n,i,j,l,k=1,Inf=0;
	printf("Numero de colunas/linhas");
	scanf("%d",&n);
	int X[n][n];
	
	for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
			printf("Numero [%d][%d]  ",j,i);
			scanf("%d",&X[j][i]);
		}
	}
	
	for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
			printf(" %.3d ",X[j][i]);	
		}
		printf("\n");
	}
	
	for(j=1;j<n;j++)
	{
		for(i=0;i<k;i++)
		{
			if(X[j][i] != 0)
			{
			 Inf++;	
			}	
		}
		k++;
	}
	if(Inf == 0)
	{
		printf("Matriz triangular inferior");
	}
	else
	{
		printf("nao e cara");
	}
	return 0;
}
