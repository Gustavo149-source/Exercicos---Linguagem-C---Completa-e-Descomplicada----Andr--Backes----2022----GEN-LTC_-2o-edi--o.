/*
11) Faça um programa que informe o mês de acordo com o
número digitado pelo usuário. Exemplo: Entrada = 4.
Saída = Abril.
*/
#include <stdio.h>

int main() {
    int op;

    printf("Digite um numero correspondente a algum mes: ");
    scanf("%d",&op);

    switch(op) {
        case 1:
            printf("\nJaneiro\n");
        break;
        case 2:
            printf("\nFevereiro\n");
        break;
        case 3:
            printf("\nMarco\n");
        break;
        case 4:
            printf("\nAbril\n");
        break;
        case 5:
            printf("\nMaio\n");
        break;
        case 6:
            printf("\nJunho\n");
        break;
        case 7:
            printf("\nJulho\n");
        break;
        case 8:
            printf("\nAgosto\n");
        break;
        case 9:
            printf("\nSetembro\n");
        break;
        case 10:
            printf("\nOutubro\n");
        break;
        case 11:
            printf("\nNovembro\n");
        break;
        case 12:
            printf("\nDezembro\n");
        break;
    }

    return 0;
}