#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	int funcao(int P,int*x)
	{
		float soma=0,aptidao,posicao;
		int a,b,A,aux,R;
		float z[aux];
		float Z[aux];
		float y[P];
		float w[aux];
		float r[2];
		float W[P];
		float a1;
		float V[P];
		
		
		for(A=0;A<P;A++)
		{
		
			for(a=0;a<=A;a++)
			{
				soma=soma+(x[a]*(sin(sqrt(sqrt(pow(x[a],2))))));
			
			}
		
			y[b]=418.9829-soma;
		//	printf("%.2f\n",y[b]);
			if(A>0)
			{
				y[b]=y[b]-y[b-1];
			//	printf("%.2f  %d\n ",y[b],b);    //determinar a aptidao individual
			}
			b++;
		}
	
		for (a=0;a<P;a++)
		{
			aux=0;
			for(b=0;b<P;b++)
			{
				if(sqrt(y[a]*y[a]) > sqrt(y[b]*y[b]))
				{
					aux=aux+1;
				}
			}
			z[aux]=y[a];                          //determinar melhor aptidao
		}
		a=0;
		Z[a]=z[a];
		//printf("%.2f %d\n",Z[a],a);
		
		for(a=0;a<P;a++)	
		{
			aux=0;
			for(b=0;b<P;b++)
			{
				if(x[a]*x[a] > x[b]*x[b])
				{
					aux=aux+1;
				}
			}
			w[aux]=x[a];
			
		}
		a=0;
		Z[a+1]=w[a];                              //determinar melhor posicao
		printf("%.2f %d\n",Z[a+1],a+1);
		
		for(a=0;a<P;a++)
		{
			W[0]=0.9;
			W[a]=0.7+(0.2*(y[a]-z[P-1])/z[a]-z[P-1]);
		}
		
		
	srand(time(NULL));
	for(a=0;a<2;a++)
	{
		r[a]=rand()%100;
		
	}
		r[0]=r[0]/100;
		r[1]=r[1]/100;
		
		
		for(a=0;a<P;a++)
		{
			if(a=0)
			{
				V[a]=W[0]*V[0]+(r[0]*2);
			}
			V[a]=W[a]*V[0];
		}
		
		
		
	return(Z);
	}



int main() {
	int P,a,b,v;
	
	printf("Insira o numero de particulas:");
	scanf("%d",&P);
	int x[P][5];
	srand(time(NULL));
	for(a=0;a<P;a++)
	{
		for(b=0;b<5;b++)
		{
		x[a][b]=rand()%1000-500;
		printf("%d\n",x[a][b]);
		}
	}
	
	printf("Defina a velocidade inicial para todas as particuluas:");
	scanf("%d",&v);
	V[0]=v;
	//printf("%d",V[a]);
	
	 z = funcao(P,x);
	aptidao=z[0];
	posicao=z[1];
	
	
	
	
	return 0;
}
