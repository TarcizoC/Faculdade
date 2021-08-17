#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int n,i,j=0,k=0,zero=0; 
	
	printf("Quantos numeros ?   ");
	scanf("%d",&n);
	
	int X[n];
	int A[n];
	int B[n];
	
	for(i=0;i<n;i++)
	{
		printf("digite o numero:  ");
		scanf("%d",&X[i]);
		//system("cls");
		
	}
	for(i=0;i<n;i++)
	{
		if(X[i] > 0)
		{
			A[j]=X[i];
			j++;
		}
		else 
		{
			if(X[i] < 0)
			{
				B[k]=X[i];
				k++;
			}
			else 
			{
				zero++;
			}
		}
		
	}
	printf("numeros positivos  [%d]\n",j);
	printf("numeros negativos [%d]\n",k);
	printf("zeros %d\n",zero);

	printf("Vetor A");
	for(i=0;i<j;i++)
	{
		printf(" %d ",A[i]);
	}
	
		printf("\nVetor B");
	for(i=0;i<k;i++)
	{
		printf(" %d ",B[i]);
	}
	
	return 0;
}
