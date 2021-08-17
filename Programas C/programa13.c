#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	float M,h,h2,m,m2;
	int h1,m1,s;
	
	printf("quantos minutos?...:");
	scanf("%f",&M);
		h=M/60;
		h1=M/60;
		h2=h-h1;
	
			m=h2*60;
			m1=h2*60;
			m2=m-m1;
			
				s=m2*60;
				
			
	printf("%d h",h1);
	printf(" %d min",m1);
	printf(" %d.1 seg",s);
	
	return 0;
}
