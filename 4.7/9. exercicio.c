/*
9) Faça um programa que leia a altura e o peso de uma pessoa.
De acordo com a tabela a seguir, verifique e mostre qual a
classificação dessa pessoa.
*/
#include <stdio.h>

int main() {
    float altura;
    float peso;

    printf("Digite a sua peso: ");
    scanf("%f",&peso);
    printf("Digite a sua altura: ");
    scanf("%f",&altura);

    if(altura <= 1.20) {
        if(peso <= 60) {
            printf("\nA\n");
        } else if(peso <= 90) {
            printf("\nD\n");
        } else {
            printf("\nG\n");
        }
    } else if(altura <= 1.70) {
        if(peso <= 60) {
            printf("\nB\n");
        } else if(peso <= 90) {
            printf("\nE\n");
        } else {
            printf("\nH\n");
        }
    } else {
        if(peso <= 60) {
            printf("\nC\n");
        } else if(peso <= 90) {
            printf("\nF\n");
        } else {
            printf("\nI\n");
        }
    }

    return 0;
}