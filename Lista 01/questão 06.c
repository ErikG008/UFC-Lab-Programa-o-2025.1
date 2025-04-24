//6-escreva um programa em C que imprima as seguintes variaveis idade, altura letra.
#include <stdio.h>

int main() {

int idade;
float altura;
char letra;

printf("Digite idade:");
scanf("%d", &idade);

printf("Digite altura:");
scanf("%f", &altura);

printf("Digite letra:");
scanf(" %c", &letra);

//detalhe:não estava compilando direito scanf de letra, apenas funcionou após espaço

printf("Idade eh: %d\n", idade);
printf("Altura eh: %.2f\n", altura);
printf("Letra eh: %c\n", letra);

    return 0;
}
