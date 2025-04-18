/*
9) Faça um programa que receba do usuário dois arrays, A e B, com 10
números inteiros cada. Crie um novo array C calculando C = A – B. Mostre
na tela os dados do array C.
*/
#include <stdio.h>

int main() {
    int A[10], B[10], C[10];

    printf("----------VETOR A----------\n\n");
    for(int i = 0; i < 10; i++) {
        printf("%d Numero: ",i+1);
        scanf("%d",&A[i]);
    }

    printf("\n\n----------VETOR B----------\n\n");
    for(int i = 0; i < 10; i++) {
        printf("%d Numero: ",i+1);
        scanf("%d",&B[i]);
        C[i] = A[i] - B[i];
    }

    printf("\n\n----------VETOR C----------\n\n");
    for(int i = 0; i < 10; i++) {
        printf("C[%d] - %d\n",i+1,C[i]);
    }

    return 0;
}