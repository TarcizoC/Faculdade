#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	float v,M,s,V,K,m;
	printf ("digite o valor da distancia em Km:...");
	scanf("%f",&K);
	M=K*1000;
	printf ("digite o valor do tempo em minutos:...");
	scanf("%f",&m);
	s=m*60;
	V=M/s;
	printf("sua velocidade em metros por segundo...:%.2f",V);
	
	return 0;
}
