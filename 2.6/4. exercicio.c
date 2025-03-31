/*
4) Faça um programa que leia um número inteiro e
depois o imprima usando o operador “%f”. Veja o
que aconteceu.
*/
#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d",&numero);

    printf("\nValor inteiro imprimido com operador %%f: %f\n",numero);

    return 0;
}