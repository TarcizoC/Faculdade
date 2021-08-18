#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float funcao(int n,float Mat[n][3],float SomaV,int i,int j,float SomaI,float VIrms[2])
{
	for(i=0;i<n;i++)
	{
	
		SomaV=SomaV+pow(Mat[i][1],2);
	}
	VIrms[0]=sqrt(SomaV/n);
    
    printf("valor da VRMS %f ",VIrms[0]);
	
	for(i=0;i<n;i++)
	{
	
		SomaI=SomaI+pow(Mat[i][2],2);
	}
	VIrms[1]=sqrt(SomaI/n);
		
	printf("valor da IRMS %f ",VIrms[1]);
	
	return(VIrms[2]);
}
int main() 
{
	int i,j,n;
	float SomaV=0,SomaI;
	
	float VIrms[2];
	float rms;
	printf("Digite o numero de pontos?  ");
	scanf("%d",&n);
	float Mat[n][3];
	
		for(i=0;i<n;i++)
		{
			printf("Digite o tempo da posicao[%d][%d] ",i,j);
			scanf("%f",&Mat[i][0]);	
				printf("\a");				
		}
		for(i=0;i<n;i++)
		{
			printf("Digite a tensao da posicao[%d][%d] ",i,j);
			scanf("%f",&Mat[i][1]);
				printf("\a");					
		}
		for(i=0;i<n;i++)
		{
			printf("Digite a corrente da posicao[%d][%d] ",i,j);
			scanf("%f",&Mat[i][2]);
				printf("\a");					
		}		
	rms=funcao(n,Mat,SomaV,i,j,SomaI,VIrms);
	return 0;
}
