/*
3) Faça um programa que leia cinco valores e os armazene em um vetor. Em
seguida, mostre todos os valores lidos juntamente com a média dos valores.
*/
#include <stdio.h>

int main() {
    int num [5], i;
    float media = 0;

    printf("----------Leitura dos valores---------\n\n");
    for(i = 0; i < 5; i++) {
        printf("%d Valor: ",i+1);
        scanf("%d",&num[i]);
        media += num[i];
    }

    printf("\n----------Exibicao dos valores---------\n\n");
    for(i = 0; i < 5 ; i++) {
        printf("%d Valor lido: %d\n",i+1,num[i]);
    }

    printf("\nMedia dos valores lidos: %.2f\n", media / 5.0);

    return 0;
}