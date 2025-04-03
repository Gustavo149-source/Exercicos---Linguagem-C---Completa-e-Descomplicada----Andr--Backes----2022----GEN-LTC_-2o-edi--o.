/*
9) Escreva um programa que leia 10 números e escreva o menor
valor lido e o maior valor lido.
*/
#include <stdio.h>

int main() {
    int i, num, maior, menor;

    for(i = 0; i < 10; i++) {
        printf("%d Numero: ",i+1);
        scanf("%d",&num);
        if(i == 0) {
            maior = menor = num;
        }
        if(num > maior) {
            maior = num;
        }
        if(num < menor) {
            menor = num;
        }
    }

    printf("\nMaior: %d\nMenor: %d\n",maior, menor); 

    return 0;
}