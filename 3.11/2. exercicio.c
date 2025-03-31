/*
2) Faça um programa que leia um número real e imprima a
quinta parte desse número.
*/
#include <stdio.h>

int main() {
    float numero;

    printf("Digite um numero com ponto flutuante: ");
    scanf("%f",&numero);

    printf("\nNumero real ate a 5 casa decimal: %.5f\n",numero);
    
    return 0;
}