//7-Programa recebe 2 valores A e B, troque valores para no fim A ter Valor de B e Vice Versa.
#include <stdio.h>

int main() {
    int A, B, temp;

    printf("Digite Valor de A: ");
    scanf("%d", &A);

    printf("Digite Valor de B: ");
    scanf("%d", &B);

    temp = A;
    A = B;
    B = temp;

    printf("Resultado de A Eh: %d\n", A);
    printf("Resultado de B Eh: %d\n", B);

    return 0;
}