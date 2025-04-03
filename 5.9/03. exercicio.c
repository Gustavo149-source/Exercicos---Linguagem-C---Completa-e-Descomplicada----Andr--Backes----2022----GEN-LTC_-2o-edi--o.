/*
) Faça um programa que leia um número inteiro N e depois
imprima os N primeiros números naturais ímpares.
*/
#include <stdio.h>

int main() {
    int num, i;

    printf("Digite um numero: ");
    scanf("%d",&num);

    for(i = 1; i <= num; i = i + 2) {
        printf("%d\n",i);
    }

    return 0;
}