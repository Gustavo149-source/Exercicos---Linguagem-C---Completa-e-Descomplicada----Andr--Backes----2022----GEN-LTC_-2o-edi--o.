/*
16) Escreva um programa que leia um número inteiro e mostre a
multiplicação e a divisão desse número por dois (utilize os
operadores de deslocamento de bits).
*/
#include <stdio.h>

int main() {
    int numero;

    printf("Digit um numero: ");
    scanf("%d",&numero);

    // "<<" Simbolo do deslocamento de bits
    int multiplicacao = numero << 1;
    int divisao = numero >> 1;

    printf("\nMultiplicacao: %d\nDivisao: %d\n",multiplicacao, divisao);

    return 0;
}