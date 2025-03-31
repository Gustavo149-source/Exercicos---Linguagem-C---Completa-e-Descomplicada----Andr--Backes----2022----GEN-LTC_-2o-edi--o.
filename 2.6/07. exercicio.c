/*
7) Elabore um programa que leia um caractere e
depois o imprima como um valor inteiro.
*/
#include <stdio.h>

int main() {
    char caractere;

    printf("Digite um caractere: ");
    scanf("%c",&caractere);

    printf("\nValor do tipo caractere (char) imprimido usando operador %%d: %d\n",caractere);

    return 0;
}