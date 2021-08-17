#include <stdio.h>
#include <stdlib.h>
#include <conio.c>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int i,j,x,y,X,Y,cont=0;
int d[20][20];
int XX[3];
int YY[3];
int ordx[3];
int ordy[3];

int matriz(int i,int j,int ordx[3],int ordy[3],int x,int y,int XX[3],int YY[3])
{
	int o;

			for(i=0;i<19;i++)
			{
			for(j=0;j<19;j++)
				{
					d[i][j]=0;
					if(i==0||j==0||i==18||j==18)
					{
						d[i][j]=1;
					}
				for(o=0;o<3;o++)
				{	
					if(i==XX[o] && j==YY[o])
					{
						d[i][j]=4;
					}
				}
					if(i==ordx[0] && j==ordy[0])
					{
						d[i][j]=3;
					}
					if(i==x && j==y)
					{
						d[i][j]=2;
					}
				}
			}
		printf("\n\t \n");
		for(i = 0; i < 19; i++)
		{
		printf("\t  ");	
			for(j = 0; j < 19; j++)
			{
			printf("| %d ",d[i][j]);
			}
		printf("| \n ");
		printf("\t  \n");	
		}
	printf("Final [%d/%d]",x,y);
	for(i=0;i<3;i++)
	{
	printf("\npos %d [%d][%d]",i,XX[i],YY[i]);
	}
	printf("\n Avanço [%d][%d]",ordx[0],ordy[0]);
		
		
			return 1;
}






int main()
{
	////////////////////////////////////////////////////////////////////// TELA INICIAL COM BORDAS DE 1
	srand(time(NULL));
	
		for(i=0;i<19;i++)
			{
			for(j=0;j<19;j++)
				{
					d[i][j]=0;
					if(i==0||j==0||i==18||j==18)
					{
						d[i][j]=1;
						textcolor(128+BLINK);
						textbackground(3);
					}
				}
			}
//////////////////////////////////////////////////////////////////////////////////	PRINTA MATRIZ
	printf("\n\t \n");
	for(i = 0; i < 19; i++)
	{
	printf("\t  ");	
		for(j = 0; j < 19; j++)
		{
		
		printf("| %d ",d[i][j]);
		}
	printf("| \n ");
	printf("\t  \n");	
	}
/////////////////////////////////////////////////////////////////////////////////////	LOCAL ALEATORIO PARA O FINAL
	x=1+rand()%16;
	y=1+rand()%16;
	d[x][y]=2;
///////////////////////////////////////////////////////////////////////////////////////	 LOCAL ALEATORIO PARA O INICIO
	for(i=0;i<3;i++)
	{
		X=1+rand()%16;
		Y=1+rand()%16;
		XX[i]=X;
		YY[i]=Y;
		d[X][Y]=4;	
	}
//////////////////////////////////////////////////////////////////////////////////////PRINTF MATRIZ	
		printf("\n\t \n");
	for(i = 0; i < 19; i++)
	{
	printf("\t  ");	
		for(j = 0; j < 19; j++)
		{	
		printf("| %d ",d[i][j]);
		}
	printf("| \n ");
	printf("\t  \n");	
	}
	printf("Final [%d/%d]",x,y);
	for(i=0;i<3;i++)
	{
	printf("\npos %d [%d][%d]",i,XX[i],YY[i]);
	}
	////////////////////////////////////////////////////////////////////////////// CONDIÇAO DE QUAL ESTA MAIS PERTO (LINHA)    ordx[0] é o melhor
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if (sqrt(pow(x-XX[i],2)) > sqrt(pow(x-XX[j],2)))
			{
				cont++;
			}
		}
		ordx[cont]=XX[i];
		cont=0;
	}
	
	cont=0;
	////////////////////////////////////////////////////////////////////////////////////////CONDIÇAO DE QUAL ESTA MAIS PERTO (COLUNA)   ordy[0] é o melhor
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if (sqrt(pow(y-YY[i],2)) > sqrt(pow(y-YY[j],2)))
			{
				cont++;
			}
		}
		ordy[cont]=YY[i];
		cont=0;
	}
	matriz(i,j,ordx,ordy,x,y,XX,YY);
	
////////////////////////////////////////////////////////////////////////////////////////////////	
	
	return 0;
}
