#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float f,c;
	printf("digite a temperatura em Fahrenheit....:");
	scanf("%f",&f);
	c=(f-32)/1,8;
	printf("a temperatura em graus Celcius....:%.3f",c);
	return 0;
}
