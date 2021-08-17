#include <stdio.h>
#include <stdlib.h>
#include <time.h>  
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int e,i,aux=0,j;
	float R; 
	float x[2];
	float y[3];
	float z[2];
	float w[2];
	printf("entre com a resposta    ");
	scanf("%f",&R);
	system("cls");
	printf("Quais operaçoes voce quer usar:");
	printf("\n Soma-  1   ");
	printf("\n Soma/Subtraçao-  2   ");
	scanf("%d",&e);	
	srand( (unsigned)time(NULL) );
	for(i=0;i<3;i++)
	{
		w[i]=((rand()%1000/10)-10);
		printf("\n%.2f (%d  1)",w[i],i);	//numero aleatorio
	}
	
	switch (e)
	{
		case 1:
			for(i=0;i<2;i++)
			{
					x[i]=w[i]+w[i+1];  
				//	printf("\n%.2f (%d  2)",x[i],i);
				
			}
			
			for(i=0;i<2;i++)
			{
					z[i]=x[i]-R;
					printf("\n%.2f (%d  3)",z[i],i);
			}
			for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				{
					if(z[i]>z[j])
					{
						aux++;
					}
				}
				y[aux]=z[i];
				aux=0;
			}
			for(i=0;i<2;i++)
			{
					printf("\n%.2f (%d  4)",y[i],i);
			}
				
			
	}	
 
}
