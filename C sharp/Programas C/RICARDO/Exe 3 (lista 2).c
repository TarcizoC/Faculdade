#include <stdio.h>

int main()
{
	int n;
    printf("Digite o numero de funcionarios   ");
    scanf("%d",&n);	
    printf("\n");
    char nome[n][60];
    int l,j=0,i;
	float sal[l],Sal[l];
	
    for( l=0; l<n; l++)
    {
        printf("Digite o nome do %d funcionario: ", (l+1));
      	scanf("%s",nome[l]);
      
        printf("Digite o salario do %d funcionario: ", (l+1));
      	scanf("%f",& sal[l]);
    
    }
    for( l=0; l<n; l++)
    {
  		if(sal[l] < 200)
  		{
  			sal[l]=sal[l]*1.2;
  			printf("%s\n", nome[l]);
  			printf("%.2f novo salario\n ", sal[l]);
		}
		else
		{
			if(sal[l] > 500)
			{
				printf("%s\n", nome[l]);
				printf("%.2f\n", sal[l]);
			}
		}
    }
}
