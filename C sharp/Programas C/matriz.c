#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int a,b,val,i,j;
	
		printf("Quantas linhas voce tem ?...:");
		scanf("%d",&i);
		printf("Quantas colunas voce tem ?...:");
		scanf("%d",&j);
		
	int x[i][j];
	
	for(a=0;a<j;a++)
	{
		for(b=0;b<j;b++)
		{
			printf("digite o valor..:");
			scanf("%d",&x[a][b]);
		}
	}
	for(a=0;a<j;a++)
	{
		for(b=0;b<i;b++)
		{
			printf("%d",x[a][b]);
		}
			
	}
	
	
	
	return 0;
}
