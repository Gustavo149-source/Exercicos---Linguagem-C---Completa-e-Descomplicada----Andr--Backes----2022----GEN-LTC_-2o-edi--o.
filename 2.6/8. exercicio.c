/*
8) Faça um programa que leia dois números
inteiros e depois os imprima na ordem inversa em
que eles foram lidos.
*/
#include <stdio.h>

int main() {
    int numero_1, numero_2;

    printf("Digite o primeiro numero: ");
    scanf("%d",&numero_1);
    printf("Digite o segundo numero: ");
    scanf("%d",&numero_2);

    printf("\nNumeros na ordem inversa a que foram digitados: %d e %d\n",numero_2, numero_1);

    return 0;
}