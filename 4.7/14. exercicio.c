/*
14) Faça um programa para verificar se determinado número
inteiro lido é divisível por 3 ou 5, mas não simultaneamente
pelos dois.
*/
#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero qualquer: ");
    scanf("%d",&num);

    if(num % 3 == 0 && num % 5 != 0) {
        printf("\nO numero %d e divisivel por 3!\n",num);
    } else if(num % 5 == 0 && num % 3 != 0){
        printf("\nO numero %d e divisivel por 5!\n",num);
    }

    return 0;
}