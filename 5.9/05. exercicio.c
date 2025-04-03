/*
5) Faça um programa que calcule e mostre a soma dos 50
primeiros números pares.
*/
#include <stdio.h>

int main() {
    int i, soma = 0;

    for(i = 0; i <= 50; i++) {
        if(i % 2 == 0) {
            soma += i;
        }
    }

    printf("\nSoma dos 50 primeiros numeros pares: %d\n",soma);

    return 0;
}