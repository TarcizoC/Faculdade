#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int N=1;
	int n;
	printf("digite seu numero");
	scanf("%d",&n);
	for(;n>=1;n--)
	{
		N=N*n;
	}
	printf("%d",N);
	return 0;
}
