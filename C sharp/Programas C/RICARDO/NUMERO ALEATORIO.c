#include <stdio.h>
#include <conio.h>
#include <stdlib.h>// necess�rio p/ as fun��es rand() e srand()
#include<stdio.h>
#include<time.h>//necess�rio p/ fun��o time()

int main(void)
{
	int i;
	float a;
	
	
	printf("Gerando 10 valores aleatorios:\n\n");
	

	srand(time(NULL));
	
	for (i=0; i < 10; i++)
	{
		// gerando valores aleat�rios na faixa de 0 a 100
		printf("%.2d ", rand()%1000-500);
	}
	
	getch();
	return 0;
}
