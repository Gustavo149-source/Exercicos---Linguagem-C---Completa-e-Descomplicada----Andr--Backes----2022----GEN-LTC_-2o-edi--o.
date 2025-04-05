/*
1) Crie um programa que leia do teclado seis valores inteiros e em seguida
mostre na tela os valores lidos.
*/
#include <stdio.h>

int main() {
    int num[6], i;

    printf("---------Leitura dos valores----------\n\n");
    for(i = 0; i < 6; i++) {
        printf("%d Numero: ",i+1);
        scanf("%d",&num[i]);
    }

    printf("\n--------Exibicao dos valores----------\n\n");
    for(i = 0; i < 6; i++) {
        printf("%d valor digitado: %d\n",i+1, num[i]);
    }

    return 0;
}