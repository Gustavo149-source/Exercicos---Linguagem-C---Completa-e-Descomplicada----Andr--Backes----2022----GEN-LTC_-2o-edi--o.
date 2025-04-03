/*
7) Elabore um programa que peça ao usuário para digitar 10
valores. Some esses valores e apresente o resultado na tela.
*/
#include <stdio.h>

int main() {
    int i, num, soma = 0;

    for(i = 0; i < 10; i++) {
        printf("%d Numero: ",i+1);
        scanf("%d",&num);
        soma += num;
    }

    printf("\nSoma dos 10 numeros: %d\n",soma);

    return 0;
}