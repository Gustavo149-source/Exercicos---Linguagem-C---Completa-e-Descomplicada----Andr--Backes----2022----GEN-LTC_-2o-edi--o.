/*
8) Escreva um programa que, dada a idade de um nadador,
classifique-o em uma das seguintes categorias:
*/
#include <stdio.h>

int main() {
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d",&idade);

    if(idade >= 5 && idade <= 7) {
        printf("\nInfantil A\n");
    } else if(idade <= 10) {
        printf("\nInfantil B\n");
    } else if(idade <= 13) {
        printf("\nJuvenil A\n");
    } else if(idade <= 17) {
        printf("\nJuvenil B\n");
    } else {
        printf("\nSenior\n");
    }

    return 0;
}