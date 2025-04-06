/*
7) Faça um programa que receba do usuário um vetor X com 10 posições. Em
seguida deverão ser impressos o maior e o menor elemento desse vetor.
*/
#include <stdio.h>

int main() {
    int vetor[10], i, maior = 0, menor = 0;

    for(i = 0; i < 10; i++) {
        printf("%d Numero: ",i+1);
        scanf("%d",&vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];

    for(i = 1; i < 10; i++) {
        if(vetor[i] > maior) {
            maior = vetor[i];
        }
        if(vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    printf("\nMaior: %d\nMenor: %d\n",maior, menor);

    return 0;
}