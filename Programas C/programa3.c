#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float n1,n2,s;
	printf("digite o primeiro numero....:");
	scanf("%f", &n1);
	printf("digite o segundo numero....:");
	scanf("%f", &n2);
	s=n1+n2;
	printf("A soma dos dois numeros...:%.3f",s);
	return 0;
}
