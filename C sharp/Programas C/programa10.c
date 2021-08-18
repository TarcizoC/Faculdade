#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int forma;
	float c,l,a,V,A;
	
	printf("voce tem uma caixa...:\n 1-cilindrica:\n 2-retangular:\n");
	scanf("%d",&forma);
	
	switch(forma)
	{
		case 2:
			printf("digite o valor do cumprimento");
			scanf("%f",&c);
			printf("digite o valor da largura");
			scanf("%f",&l);
			printf("digite o valor da altura");
			scanf("%f",&a);
			V=a*l*c;
			system("CLS");
			printf("O VOLUME DA SUA MAE...:%f",V);
			break;
		case 1:
			printf("digite o valor do raio");
			scanf("%f",&c);
			A=pow(c,2)*3,14;
			printf("digite o valor da altura");
			scanf("%f",&a);
			V=A*a;
			system("CLS");
			printf("O VOLUME DA SUA MAE...:%f \n SUA MAE E QUE NEM A SKOL,DESCE REDONDO",V);
			break;
	}
	
	
	return 0;
}
