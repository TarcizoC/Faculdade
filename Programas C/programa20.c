#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	float h,p;
	
	printf("digite sua altura...:");
	scanf("%f",&h);
	p=(h*72.7)-58;
	printf("o peso ideal...:%f",p);
	return 0;
}
