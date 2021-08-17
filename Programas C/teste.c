#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main () {
float n1,n,n2;


	print("digite um numero...:");
	scanf("%f",&n);
	n1=n/2;
	n2=n1*2;
	if(n2==2)
	{
		printf("seu numero é primo");
	}
	else 
	{
		if(n2==n)
		{
		printf("nenhum laço familiar com ele por enquanto");
		}
		else
		{
			printf("n primo bixo");
		}
	}
	
	
	
	return 0;
}
