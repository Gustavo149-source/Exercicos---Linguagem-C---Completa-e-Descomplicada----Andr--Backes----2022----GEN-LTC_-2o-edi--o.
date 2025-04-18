/*
12) Faça um programa que leia um vetor de 10 posições. Veriﬁque se existem
valores iguais e os escreva na tela.
*/
#include <stdio.h>

int main() {
    int i, j, vetor[10];

    for(i = 0; i < 10; i++) {
        printf("%d numero: ",i+1);
        scanf("%d",&vetor[i]);
    }

    printf("\n");
    for(i = 0; i < 10; i++) {
        for(j = i + 1; j < 10; j++) {
            if(vetor[i] == vetor[j]) {
                printf("Posicoes [%d] e [%d] - %d\n",i+1,j+1,vetor[i]);
            }
        }
    }

    return 0;
}