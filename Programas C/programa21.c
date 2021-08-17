#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	
	float p,m;	
	
	printf("Quantos quilos o peixe pesa ?...:");
	scanf("%f",&p);
	
		if (p>50)
		{
			p=p-50;
			m=p*4;
			printf("multa de %.2f",m);
		}
		else 
		{
			m=0;
			printf("multa de %.2f",m);
			
		}
	
	
	
	return 0;
}
