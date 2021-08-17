#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n,i,j,cont;
	printf("digite o numero de termos:...");
	scanf("%d", &n);
	float x[n];
	float y[n];
	
		for(i=0;i<n;i++)
		{
			printf("digite o termo [%d]",i);
			scanf("%f",& x[i]);
		}
			for(i=0;i<n;i++)
			{
				if(x[i]>x[i+1])
				{
					cont=cont+1;
					
					
				}
				
				else
				{
				}
				printf("%f",&y[j]);
			}
			
			
	return 0;
}
