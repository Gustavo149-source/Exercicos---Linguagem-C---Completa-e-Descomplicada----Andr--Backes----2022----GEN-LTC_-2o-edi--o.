/*
6) Escreva um programa que leia do teclado um vetor de 10 posições. Escreva
na tela quantos valores pares foram armazenados nesse vetor.
*/
#include <stdio.h>

int main() {
    int i, vetor[10], pares = 0;

    for(i = 0; i < 10; i++) {
        printf("%d Numero: ",i+1);
        scanf("%d",&vetor[i]);
        if(vetor[i] % 2 == 0) {
            pares++;
        }
    }

    if(pares > 0) {
        printf("\n%d Numeros pares foram digitados!\n",pares);
    } else {
        printf("\nNenhum valor par foi digitado.\n");
    }

    return 0;
}