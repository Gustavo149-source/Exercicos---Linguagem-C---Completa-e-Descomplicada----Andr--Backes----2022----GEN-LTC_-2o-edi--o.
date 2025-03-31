/*
18) Elabore um programa que leia dois números inteiros e exiba o
deslocamento, à esquerda e à direita, do primeiro número pelo
segundo.
*/
#include <stdio.h>

int main() {
    int n1, n2;
    int deslocamento_direita, deslocamento_esquerda;

    printf("Primeiro numero: ");
    scanf("%d",&n1);
    printf("Segundo numero: ");
    scanf("%d",&n2);

    deslocamento_direita = n2 >> n1;
    deslocamento_esquerda = n2 << n1;

    printf("\nDeslocamento a direita: %d\nDeslocamento a esquerda: %d\n",deslocamento_direita, deslocamento_esquerda);

    return 0;
}