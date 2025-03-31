/*
3) Escreva um programa que leia um número
inteiro e depois imprima a mensagem “Valor
lido:”, seguido do valor inteiro. Use apenas um
comando printf().
*/
#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d",&numero);

    printf("\nValor lido: %d\n",numero);

    return 0;
}