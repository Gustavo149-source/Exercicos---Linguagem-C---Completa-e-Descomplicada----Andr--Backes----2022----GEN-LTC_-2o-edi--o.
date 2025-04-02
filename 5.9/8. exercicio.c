/*
8) Faça um programa que leia 10 inteiros e imprima sua média.
*/
#include <stdio.h>

int main() {
    float num, soma = 0;
    int i;

    for(i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%f",&num);
        soma += num;
    }

    printf("\nMedia dos 10 numeros: %.2f\n",soma/10);

    return 0;
}