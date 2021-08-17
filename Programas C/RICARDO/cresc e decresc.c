#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{

int x[3];
int y[3];
int cont=0,igual=0,rep =0,i,j;


	
	printf("Digite 3 numeros:");
	for(i=0;i<3;i++)
	{
		scanf("%d",&x[i]);
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(x[i] > x[j])
			{
				cont++;
			}
			if(x[i] == x[j] && rep == 0)
			{
				igual++;
			
			}
		}
		rep=1;
		if(igual > 0)
		{
			y[cont+igual]=x[i];
			
		}
		y[cont]=x[i];
		cont=0;
		igual--;
	}
	for(i=0;i<3;i++)
	{
		printf("[%d]",y[i]);
	}
	
	return 0;
}
