/*
5) Faça um programa que leia um vetor de oito posições. Em seguida, leia
também dois valores X e Y quaisquer correspondentes a duas posições no
vetor. Seu programa deverá exibir a soma dos valores encontrados nas
respectivas posições X e Y.
*/
#include <stdio.h>

int main() {
    int i, A[8];
    int x, y;

    printf("---------PREENCHENDO O VETOR----------\n\n");
    for(i = 0; i < 8; i++) {
        printf("A[%d]: ",i);
        scanf("%d",&A[i]);
    }

    printf("\nDigite um numero X, para A[X]: ");
    scanf("%d",&x);
    printf("Digite um valor Y, para A[Y]: ");
    scanf("%d",&y);
    if(x >= 0 && x < 8 && y >= 0 && y < 8) {
        int soma = A[x] + A[y];
        printf("\nNumero da posicao X, A[%d]: %d",x, A[x]);
        printf("\nNumero da posicao Y, A[%d]: %d\n",y, A[y]);
        printf("\nSoma dos numeros %d + %d = %d\n",A[x],A[y],soma);
    } else {
        printf("\nPosicoes invalidas! Informe os valores entre 0 e 7.\n");
    }

    return 0;
}