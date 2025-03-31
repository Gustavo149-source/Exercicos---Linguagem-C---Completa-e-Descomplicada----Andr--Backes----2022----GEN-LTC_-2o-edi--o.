/*
14) Faça um programa que converta uma letra maiúscula em
letra minúscula. Use a tabela ASCII para isso.
*/
#include <stdio.h>

int main() {
    char letra;

    printf("Digite uma letra: ");
    scanf("%c",&letra);

    if(letra >= 97 && letra <= 122) {
        letra -= 32;
    }

    printf("\nLetra: %c\n",letra);

    return 0;
}