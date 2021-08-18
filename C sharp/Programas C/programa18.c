#include <stdlib.h>
#include <stdio.h>

int main()
{
	int L,D,r;
	float A;
	D=0;
	
	while (D==0)
	{
		printf("digite o raio do circulo");
		scanf("%d",&r);
		A=pow(r,2)*3.14;
		printf("a area do circulo...:%f",A);
		printf("\ncontinuar calculando a area do circulo ?...:\n1-Sim\n2-Nao\n");
		scanf("%d",&D);
			if(D==1)
			{
				D=1;
			}
			else
			{
				if(D==2)
				{
					system("CLS");
					printf("1-calcular a area do circulo\n2-Fechar\n");
					scanf("%d",&D);
						if(D==1)
						{
						D=0;
						}
						else
						{
							return 0;
						}
				}	
			}
	}
	while (D==1)
	{
				printf("a area do circulo...:%f",A);
		printf("\ncontinuar calculando a area do circulo ?...:\n1-Sim\n2-Nao\n");
		scanf("%d",&D);
			if(D==1)
			{
				D=1;
			}
			else
			{
				if(D==2)
				{
					system("CLS");
					printf("1-calcular a area do circulo\n2-Fechar\n");
					scanf("%d",&D);
						if(D==1)
						{
						D=1;
						}
						else
						{
							return 0;
						}
				}	
			}
	}
	
	
}
