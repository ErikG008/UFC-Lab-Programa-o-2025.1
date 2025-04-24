//3-faça um programa em C que leia dois numeros reais e os imprima
#include <stdio.h>
int main() {
	
	float k, m;
	
	printf("Digite K:");
	scanf("%f", &k);
	
	printf("Digite M:");
	scanf("%f", &m);
	
	printf("Seus Numeros Reais Sao: %.2f %.2f \n", k, m);
	
		return 0;
}