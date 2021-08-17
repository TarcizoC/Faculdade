#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int a,b,A,B,i,j,I,J;
	
	
	printf("quantas linhas?[primeira matriz]..:");
	scanf("%d",&i);
	printf("quantas colunas?[segunda matriz]...:");
	scanf("%d",&j);
	int x[i][j];
	int z[i][j];
	
	printf("quantas linhas?[primeira matriz]..:");
	scanf("%d",&I);
	printf("quantas colunas?[segunda matriz]...:");
	scanf("%d",&J);
	int y[I][J];
	
	for(a=0;a<i;a++)
	{
		for(b=0;b<j;b++)
		{
			printf("digite o valor I[%d] J[%d]",a,b);
			scanf("%d", &x[a][b]);
			printf("%d",x[a][b]);
		}
	}
	
	for(A=0;A<I;A++)
	{
		for(B=0;B<J;B++)
		{
			printf("digite o valor I[%d] J[%d]",A,B);
			scanf("%d",&y[A][B]);
		}
	}
	
		for(a=0,B=0;a<i,B<j;a++,B++)
		{
			for(b=0,A=0;b<i,A<I;b++,A++)
			{
				z[a][b]=z[a][b]+ x[a][b]*y[A][B];
			}
		}
	
	for(a=0;a<i;a++)
	{
		for(b=0;b<j;b++)
		{
			printf("%d  I[%d] J[%d] ",z[a][b],a,b);
	
		}
	}


	return 0;
}
