int main() 
{
	int P,a,b;
	
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
}
