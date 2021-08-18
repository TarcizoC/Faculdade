#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
float s[4][3];
int i,j;

	
	printf("Digite os tempos de cada interaçao");
	for(i=0;i<4;i++)
	{
		scanf("%f",&s[i][0]);
	}
	printf("Digite as tensoes de cada interaçao");
	for(i=0;i<4;i++)
	{
		scanf("%f",&s[i][1]);
	}	
	printf("Digite as correntes de cada interaçao");
	for(i=0;i<4;i++)
	{
		scanf("%f",&s[i][2]);
	}

	RMS(s,i,j);
	
	
	return 0;
}

int RMS(float s[4][3],int i, int j)
{
	float SomaI=0,SomaV=0,Vrms;
	for(i=0;i<4;i++)
	{
	SomaV=SomaV + pow(s[i][1],2);
	}
	Vrms=sqrt(0.25*SomaV);
	printf("%f",Vrms);
}
