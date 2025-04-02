/*
1) Faça um programa que leia dois números e mostre qual deles
é o maior.
*/
#include <stdio.h>

int main() {
    int a, b, maior;

    printf("A: ");
    scanf("%d",&a);
    printf("B: ");
    scanf("%d",&b);

    if(a > b) {
        maior = a;
    } else {
        maior = b;
    }

    printf("\nO maior numero digitado foi: %d\n",maior);

    return 0;
}