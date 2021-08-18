#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int temp(int x, int t)
{
	int r;
	switch(x)
	{
	case 1:
		r=((t-32)*5)/9;
		break;
	case 2:
		r=(t*9)/5 + 32;
		break;
	}
	return(r);		
}



int main() 
{
	int x,t,r;
	printf("Sua temperatura esta em que escala?  \n(1)faro do rato\n(2)Celso batista            ");
	scanf("%d",&x);
	printf("a temperatura desgraça      ");
	scanf("%d",&t);
	
	r=temp(x,t);
	if(x==1)
	{
		printf("Sua temperatura   %d C",r );
	}
	else
	if(x==2)
	{
		printf("Sua temperatura   %d F",r );
	}
	return 0;
}
