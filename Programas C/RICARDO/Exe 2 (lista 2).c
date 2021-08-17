#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,j,k=0,Soma=0,Media=0,Num;
		
	int X[10];
	int Y[10];											//CASO COLOQUE TODOS OS NUMEROS IGUAIS ELE ACUSA QUE NAO EXISTE NUMERO MENOR
	printf("Digite os valores:  ");						// COM UM IF JA ARRUMA MAS TO COM PREGUIÇA
	for(i=0;i<10;i++)
	{
		printf("\n");
		scanf("%d",&X[i]);	
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(X[i] > X[j])
			{
				k++;
			}		
		}
	Y[k]=X[i];
	k=0;
	}
	printf("O maior numero  %d",Y[9]);
	printf("\nO menor numero  %d",Y[0]);
	
	for(i=0;i<10;i++)
	{
		Soma=Soma + X[i];
	}
	
	Media=Soma/10;
	printf("\nA media   %d",Media);
	
	for(i=0;i<10;i++)
	{
		if(X[i] > Media)
		{
			Num++;
		}
	}
	printf("\n Quantidade de numeros maiores que a media    %d",Num);
	
	return 0;
}
