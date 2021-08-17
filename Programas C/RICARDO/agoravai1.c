#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int funcao(int P,int x[P][5], int V[P][5],float U[P][5],float fi1,float fi2, int rep)
{ 
	int A,a,aux,B,b,aux1,I,J;
	float soma;
	float r[2];
	float apt[P];
	float fbest[P];
	int y[P][5];
	int pbest[P][5];
	
	
	for(A=0;A<P;A++)
		{
			for(a=0;a<5;a++)
			{
				soma=soma+(x[A][a]*(sin(sqrt(sqrt(pow(x[A][a],2))))));           //Calculo da aptidao
			
			}
			
			apt[A]=418.9829*5 -soma;
			printf("%.2f (%d)\n",apt[A],A);
	
			soma=0;
		}
	for(A=0;A<P;A++)
	{
		aux=0;
		for(B=0;B<P;B++)
		{
			if(sqrt(apt[A]*apt[A])>sqrt(apt[B]*apt[B]))
			{
				aux++;	
			}
			fbest[aux]=apt[A];                                               //MELHOR APTIDAO SEUS CORNO
		}																	// MELHOR Fbest[0]
																			// PIOR fworst[4]
	}	
	//	printf("%.2f \n",fbest[0]);  
		
	int z[P][5];
		
	for(A=0;A<P;A++)
	{
		for(B=0;B<5;B++)
		{
			z[A][B]=421-x[A][B];											
		}	
	}	
	
	for(A=0;A<P;A++)
	{
		
		for(B=0;B<5;B++)
		{
			for(b=0;b<5;b++)
			{
				if(sqrt(z[A][B]*z[A][B]) > sqrt(z[A][b]*z[A][b]))
				{
					aux++;
				}
			}
			pbest[A][aux] = x[A][B];
			//printf("%d   (%d)\n",pbest[A][aux],A);
			aux=0;
		}
	//	printf("%d    %d\n",pbest[A][0],A);                           //O MELHOR PBEST DE CADA
	}
	
	int	pbestall[P][5];
		
	for(A=0;A<P;A++)
	{
			y[A][0]=421-pbest[A][0];												
	}
	
	for(A=0;A<P;A++)
	{
		for(a=0;a<P;a++)
		{
			if(sqrt(y[A][0]*y[A][0]) > sqrt(y[a][0]*y[a][0]))
			{
				aux++;
			}
			
		}
		pbestall[aux][0] = pbest[A][0];
		aux=0;
	}
			
		printf("%d",pbestall[0][0]);										//A MELHOR POSIÇAO DE TODOS OS UNIVERSOS
    for(A=0;A<P;A++)
   {
   		for(B=0;B<5;B++)
		{
		//	printf("%d  (A)",x[A][B]);
		 	x[A][B]=x[A][B] + V[A][B];
		//	printf("%d  (D)",x[A][B]);	
			if (x[A][B]	>= 500)
			{
				x[A][B]=500;
			}
			else																	//limitando a posicao
			{
				if(x[A][B] <= -500)
				{
					x[A][B]=-500;
				}	
			}
		}
		printf("\n");
    }
			   

	for(A=0;A<P;A++)
	{
		for(B=0;B<5;B++)
		{	
		srand(time(NULL));
		for(a=0;a<2;a++)
		{
			r[a]=rand()%100;
		
		}
		r[0]=r[0]/100;
		r[1]=r[1]/100;
		
		//	printf("%d  (A)\n",V[A][B],A); 	
			V[A][B]=U[A][B]*V[A][B]+(r[0]*fi1*(pbest[A][0]-x[A][B]))+(r[1]*fi2*(pbestall[0][0]-x[A][B]));
		//	printf("%d  (D)\n",V[A][B],A); 
			if(V[A][B] > 1000)
			{
				V[A][B]=1;
			}
			else
			{
				if(V[A][B] < -1000)																			//limitando a velocidade
				{
					V[A][B]=1;
				}
			}
		r[0]=0;
		r[1]=0;
		}
	}
	for(I=0;I<P;I++)
	{
		for(J=0;J<5;J++)
		{
			U[I][J]=0.7+(0.2*(apt[I]-fbest[4])/(fbest[0]-fbest[4]));
		
			if(U[I][J] >= 0.9)
			{
				U[I][J]=0.9;
			}
			else 
			{
				if(U[I][J] < 0.7)
			{
				U[I][J]=0.7;														// LIMITANDO A MERDA DESSA PORCARIA DO U,W SEI LA OQ
			}
			}
			//printf("%.2f\n",U[I][J]);
		}
	}
	if(fbest==0)
	{
		A=rep;
	}
	if(pbest==421)
	{
		A=rep;
	}
		
	return(rep);
}


int main() 
{
	int P,a,b,v,A,B,I,J,rep;
	float r,u,fi1,fi2;
	
	
	printf("Insira o numero de particulas:");
	scanf("%d",&P);
	int x[P][5];
	int V[P][5];
	srand(time(NULL));
	for(a=0;a<P;a++)
	{
		for(b=0;b<5;b++)
		{
		x[a][b]=rand()%1000-500;
		printf("%d  ",x[a][b]);												//NUMERO ALEATORIO
		}
		printf("(%d) \n",a);												//QUAL LINHA
	}
	printf("Determine a velocidade inicial:");
	scanf("%d", &v);
	for(A=0;A<P;A++)
	{
		for(B=0;B<5;B++)
		{
			V[A][B]=v;
			//printf("%d  (%d)\n",V[A][B],A);									//VELOCIDADE INICIAL
		}
	}
	float U[P][5];
	u=0.9;
	for(I=0;I<P;I++)
	{
		for(J=0;J<5;J++)
		{
			U[I][J]=u;
		}
	}
	
	printf("Defina o parametro cognitivo:");
	scanf("%f",&fi1);
	printf("Defina o parametro social:");
	scanf("%f",&fi2);
	printf("Quantas repetifroes?..:");
	scanf("%d",&rep);
	
	for(A=0;A<rep;A++)
	{
	r=funcao(P,x,V,U,fi1,fi2,rep);
	printf("\n REPETICAO (%d) \n",A);
	}
	return 0;
}

