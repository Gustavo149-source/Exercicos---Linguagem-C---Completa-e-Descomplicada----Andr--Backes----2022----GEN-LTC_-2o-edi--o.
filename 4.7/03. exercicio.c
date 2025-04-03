/*
3) Faça um programa que leia um número inteiro e verifique se
esse número é par ou ímpar.
*/
#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d",&num);

    if(num % 2 == 0) {
        printf("\nO numero %d e par!\n",num);
    } else {
        printf("\nO numero %d e impar!\n",num);
    }

    return 0;
}