/*
10) Faça um programa que leia 10 inteiros positivos, ignorando
não positivos, e imprima sua média.
*/
#include <stdio.h>

int main() {
    int i, num, media = 0, cont = 0;

    for(i = 0; i < 10; i++) {
        printf("%d Numero: ",i+1);
        scanf("%d",&num);
        if(num > 0) {
            media += num;
            cont++;
        }
    }

    printf("\nMedia: %.2f\n",media / (float) cont);

    return 0;
}