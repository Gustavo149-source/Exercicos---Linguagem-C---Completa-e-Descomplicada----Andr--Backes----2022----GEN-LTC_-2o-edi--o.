/*
17) Escreva um programa que leia um número inteiro e mostre o
seu complemento bit a bit.
*/
#include <stdio.h>

int main() {
    int numero, bitabit;

    printf("Digite um numero: ");
    scanf("%d",&numero);

    bitabit = ~numero;

    printf("Complemento bit-a-bit do numero %d: %d\n",numero, bitabit);

    return 0;
}