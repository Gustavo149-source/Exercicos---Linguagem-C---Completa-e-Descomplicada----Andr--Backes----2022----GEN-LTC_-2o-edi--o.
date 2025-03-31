/*
1) Faça um programa que leia um número inteiro e retorne seu
antecessor e seu sucessor.
*/
#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d",&numero);

    printf("\nSeu antecessor: %d\nNumero digitado: %d\nSeu sucessor: %d\n",numero-1, numero, numero+1);

    return 0;
}