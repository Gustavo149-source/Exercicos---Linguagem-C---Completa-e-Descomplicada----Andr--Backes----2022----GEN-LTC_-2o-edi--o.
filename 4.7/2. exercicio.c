/*
2) Faça um programa que leia dois números e mostre o maior
deles. Se, por acaso, os dois números forem iguais, imprima
a mensagem “Números iguais”.
*/
#include <stdio.h>

int main() {
    int a, b;

    printf("A: ");
    scanf("%d",&a);
    printf("B: ");
    scanf("%d",&b);

    if(a == b) {
        printf("\nNumeros iguais!\n");
    } else if(a > b) {
        printf("\nO maior numero e %d\n",a);
    } else {
        printf("\nO maior numero e %d\n",b);
    }

    return 0;
}