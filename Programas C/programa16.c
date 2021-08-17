#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
	int x,n2,E,St,y,l,mult,St0,ele,m,s1;
	float N,n1,s,z,el;

	printf("digite um numero inteiro...:");
	scanf("%f",&N);
	St0=0;	
	St=0;
	y=N*10;
	ele=2;
	for(mult=10;el<0;)
	{
		el=N/mult;
		ele++;
		mult=mult*10;
	}
	
	

	for(x=10;x<y;)
	{
		
		n1=N/x;
		n2=N/x;
		s=n1-n2;
		
		s1=(s*10)+0.1;

		St=pow(s1,ele);
		St0=St+St0;
		
		x=x*10;
		
	}
	printf("%d",St0);
}
	
