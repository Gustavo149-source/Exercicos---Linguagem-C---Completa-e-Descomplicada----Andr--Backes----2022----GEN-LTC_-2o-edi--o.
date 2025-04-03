/*
18) Faça um programa que receba um número inteiro maior do que 1 e
verifique se o número fornecido é primo ou não.
*/
#include <stdio.h>

int main() {
    int num, i, cont = 0;

    do{
        printf("Digite um numero: ");
        scanf("%d",&num);
    }while(num <= 1);

    for(i = 2; i < num / 2; i++) {
        if(num % i == 0) {
            cont++;
            break;
        }
    }

    if(cont == 0) {
        printf("\nO numero e primo!\n");
    } else {
        printf("\nO numero nao e primo!\n");
    }

    return 0;
}