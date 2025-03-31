/*
14) Faça um programa que leia três caracteres do
tipo char e depois os imprima um em cada linha.
Use um único comando printf() para isso.
*/
#include <stdio.h>

int main() {
    char c1, c2, c3;

    printf("Digite tres caracteres: ");
    scanf("%c %c %c",&c1,&c2,&c3);

    printf("\nPrimeiro caractere: %c\nSegundo caractere: %c\nTerceiro caractere: %c\n",c1,c2,c3);
    
    return 0;
}