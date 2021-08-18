#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int l,j,i,c,k=0,soma,rep;
	printf("Quantos colunas  ");
	scanf("%d",&c);									//FALTA QUANDO OS VETORES SAO IGUAIS
	printf("Quantos linhas  ");
	scanf("%d",&l);	
	int X[c][l];
	int Soma[l];
	int Y[l];
	for(i=0;i<l;i++)
	{
	 	for(j=0;j<c;j++)
		{
			printf("numero [%d][%d]  ",j,i);
			scanf("%d",&X[j][i]); 	
		}	
	}
	for(i=0;i<l;i++)
	{
	 	for(j=0;j<c;j++)
		{
			printf(" %.2d ",X[j][i]);	
		}
		printf("\n");	
	}	
		
	for(i=0,soma=0;i<l;i++)
	{
	 	for(j=0;j<c;j++)
		{	
			soma= X[j][i] + soma;
		}
		Soma[i]=soma;
		soma=0;
	}
		for(i=0;i<l;i++)
		{
			printf("Soma da linha [%d]: %d  \n",i,Soma[i]);
		}	
	
	for(i=0;i<l;i++)
	{
		for(j=0;j<l;j++)
		{
			if(Soma[i] > Soma[j])
			{
				k++;	
			}
		}
		Y[k]=Soma[i];
	}
		

	return 0;
}
