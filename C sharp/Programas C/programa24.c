#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	
	int Vel;
	float T,s,Mb;
	printf("Qual o tamanho do arquivo(em Mb)?...:");
	scanf("%f",&Mb);
	printf("Qual a velocidade da sua internet(em Mb/s)");
	scanf("%d",&Vel);
	s=Mb/Vel;
	T=s/60;
	printf("voce vai demorar essa eternidade para baixar isso...:%.f minutos",T);
	return 0;
}
