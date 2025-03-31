/*
5) Faça um programa que leia um valor do tipo
float e depois o imprima usando o operador “%d”.
Veja o que aconteceu.
*/
#include <stdio.h>

int main() {
    float numero;

    printf("Digite um numero: ");
    scanf("%f",&numero);

    printf("\nValor com ponto de precisao imprimido usando o operador: %d\n",numero);

    return 0;
}