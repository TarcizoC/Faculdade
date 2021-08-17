#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int H,h,M,m,t1,t2,T,R,D,d,U;
	float dia;
	char N[61];
	printf("DIGITA SEU NOME DE MERDA...:");
	scanf("%s",&N);
	printf("digite o horario que voce entra(horas)");
	scanf("%d",&H);
	printf("digite o horario que voce entra(minutos)");
	scanf("%d",&M);
	printf("entrou em que dia ?..:");
	scanf("%d",&D);	
	printf("digite o horario que voce sai(horas)");
	scanf("%d",&h);
	printf("digite o horario que voce sai(horas)");
	scanf("%d",&m);
	printf("saiu em que dia ?...:");
	scanf("%d",&d);
	
	dia= d-D;
	t1=(h-H)*60;
	t2=m-M;
	T=t1+t2;
	
	if(dia==0)
	{
		if(T>2.160)
		{
			printf("para de mentir ladrao");
		}
		else
		{
		if(T<240)
		{
			T=T/60;
			R=T*30;
			printf("horas de trabalho...:%d",T);
			printf("\nGANHOU ESSA MIXARIA...:%d",R);
			printf("\n %s VA GA BUN DO",N);
		}
		else 
		{
			if(T>480)
			{
				T=T/60;
				R=T*90;
				printf("horas de trabalho  %d",T);
				printf("\nPAGA UM BREJA AE...:%d",R);
				printf("\n %s TRA BA LHA DOR",N);	
			}
			else
			{
					T=T/60;
					R=T*70;
					printf("horas de trabalho  %d",T);
					printf("\nTA COM PREGUICA NE...:%d",R);
					printf("\n %s TRABALHA MAIS",N);		
			}
		}
		}
	}
	else 
	{
			if(dia <= -27)
			{
			H=H*60;
			h=h*60;
			U=1440-H;
			U=U+h;
			if(U>2.160)
			{
				printf("para de mentir ladrao");
			}
			else
			{
				U=U/60;
				R=U*90;
				printf("horas de trabalho  %d",U);
				printf("\nPAGA UM BREJA AE...:%d",R);
				printf("\n %s TRA BA LHA DOR",N);
			}
			}
			else
			{
			}
		
			
				if(dia=1)
				{
				H=H*60;
				h=h*60;
				U=1440-H;
				U=U+h;
					if(U>2.160)
					{
						printf("pare de mentir ladrao");
					}
					else
					{
					U=U/60;
					R=U*90;
					printf("horas de trabalho  %d",U);
					printf("\nPAGA UM BREJA AE...:%d",R);
					printf("\n %s TRA BA LHA DOR",N);
					}
				}
	}
	
	return 0;
}
