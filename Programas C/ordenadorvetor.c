#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i;
	int a,b=0,cont=0,X,Y;
	
	
	printf("digite quantos numeros da matriz");
	scanf("%d",&i);
	
	int x[i];
	int y[b];
	int z[cont];
	
	for(a=0;a<i;a++)
	{
		printf("digite o valor");
		scanf("%d",&x[a]);
		
		y[b]=x[a];
		b++;
	}
		
	for(a=0;a<i;a++)
	{
		X=x[a];
		for(b=0;b<i;b++)
	
			{
				Y=y[b];
				
				if (X > Y)
				{
					cont++;
				}
			}
			z[cont]=X;
			cont=0;
	}

	for(cont=0;cont<i;cont++)
	{
		printf("%d",z[cont]);
	}


}
