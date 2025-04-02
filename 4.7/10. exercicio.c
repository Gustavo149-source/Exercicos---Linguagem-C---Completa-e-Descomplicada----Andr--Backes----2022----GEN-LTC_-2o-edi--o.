/*
10) Faça um programa que leia três números inteiros positivos e
efetue o cálculo de uma das seguintes médias de acordo com
um valor numérico digitado pelo usuário e mostrado na tabela
a seguir:
*/
#include <stdio.h>
#include <string.h>

int main() {
    int op;
    float a,b,c,media = 0;

    printf("Digite tres numeros:\n\n");
    scanf("%f %f %f",&a,&b,&c);

    printf("----------MENU----------\n\n");
    printf("[1]. Geometrica\n[2]. Ponderada\n[3]. Harmonica\n[4]. Aritmetica\n\nDigite aqui: ");
    scanf("%d",&op);

    switch(op) {
        case 1:
            media = a*b*c;
            break;
        case 2:
            media = (a + (2 * b) + (3 * c)) / 6;
            break;
        case 3:
            media = 1 / ((1 / a) + (1 / b) + (1 / c));
            break;
        case 4:
            media = (a+b+c) / 3;
            break;
    }

    printf("\nMedia: %.2f\n",media);

    return 0;
}