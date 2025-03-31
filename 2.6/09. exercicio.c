/*
9) Faça um programa que leia dois valores do tipo
float. Use um único comando de leitura para isso.
Em seguida, imprima os valores lidos na ordem
inversa em que eles foram lidos.
*/
#include <stdio.h>

int main() {
    float numero_1, numero_2;

    printf("Digite dois numeros do tipo float seguidos: ");
    scanf("%f %f",&numero_1, &numero_2);

    printf("\nValores impressos na ordem inversa a que foram lidas: %.2f e %.2f\n",numero_2, numero_1);

    return 0;
}