/*
4) Leia quatro valores do tipo float. Calcule e exiba a média
aritmética desses valores.
*/
#include <stdio.h>

int main() {
    float n1, n2, n3, n4, media;

    printf("Digite quatro valores com ponto flutuante:\n\n");
    printf("A: ");
    scanf("%f",&n1);
    printf("B: ");
    scanf("%f",&n2);
    printf("C: ");
    scanf("%f",&n3);
    printf("D: ");
    scanf("%f",&n4);

    media = (n1 + n2 + n3 + n4) / 4.0;

    printf("\nMedia dos valores digitados: %.2f\n",media);

    return 0;
}