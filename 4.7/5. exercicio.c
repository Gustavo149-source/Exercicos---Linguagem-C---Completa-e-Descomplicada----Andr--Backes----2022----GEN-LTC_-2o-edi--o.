/*
5) Faça um programa que leia um número e, caso ele seja
positivo, calcule e mostre:
• O número digitado ao quadrado.
• A raiz quadrada do número digitado.
*/
#include <stdio.h>
#include <math.h>

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d",&num);

    if(num < 0) {
        printf("\n%d ao quadrado e igual a %d\n",num*num);
    } else {
        printf("\nRaiz quadrada de %d e %d\n",num, sqrt(num));
    }

    return 0;
}