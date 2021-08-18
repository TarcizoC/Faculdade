#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float n1,n2,n3,n4,m;
	printf("digite a primeira nota....:");
	scanf("%f", &n1);
	printf("digite a segunda nota....:");
	scanf("%f", &n2);
	printf("digite a terceira nota....:");
	scanf("%f", &n3);
	printf("digite a quarta nota....:");
	scanf("%f", &n4);
	m=(n1+n2+n3+n4)/4;
	printf("sua nota bimestral...:%.3f",m);
	return 0;
}
