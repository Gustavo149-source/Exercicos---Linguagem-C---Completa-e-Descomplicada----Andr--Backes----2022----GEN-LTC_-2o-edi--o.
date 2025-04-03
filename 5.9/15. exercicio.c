/*
15) Elabore um programa que faça a leitura de vários números
inteiros até que se digite um número negativo. O programa
tem de retornar o maior e o menor número lido.
*/
#include <stdio.h>

int main() {
    int num, cont = 0, maior, menor;

    do{
        printf("Digite um numero: ");
        scanf("%d",&num);
        if(cont == 0) {
            maior = menor = num;
        }
        if(maior < num) {
            maior = num;
        }
        if(menor > num) {
            menor = num;
        }
        cont++;
    }while(num > -1);

    printf("\nMaior: %d\nMenor: %d\n",maior, menor);

    return 0;
}