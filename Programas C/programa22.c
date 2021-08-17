#include <stdio.h>
#include <stdlib.h>

int main()
{
	int Lata1,Preco;
	float Litros,Lata2,Latat,m;
	
	printf("quantos metros quadrados voce quer pintar?...:");
	scanf("%f",&m);
	Litros=m/3;
	Lata1=Litros/18;
	Lata2=Litros/18;
	Latat=Lata2-Lata1;
	
	if(Latat==0)
	{
	Preco=Lata1*80;
	printf("voce tem que comprar %d custando %d",Lata1,Preco);
	}
	else
	{
	Preco=(Lata1+1)*80;
	Lata1=Lata1+1;
	printf("voce tem que comprar %d custando %d",Lata1,Preco);
	}
	
	
}
