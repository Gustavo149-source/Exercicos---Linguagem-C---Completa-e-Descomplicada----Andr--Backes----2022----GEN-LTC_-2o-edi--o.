/*
14) Escreva um programa que leia um número inteiro, maior ou
igual a zero, do usuário. Imprima o enésimo termo da
sequência de Fibonacci. Essa sequência começa no termo de
ordem zero, e, a partir do segundo termo, seu valor é dado
pela soma dos dois termos anteriores. Alguns termos dessa
sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.
*/
#include <stdio.h>

int main() {
    int num, i, f = 0, n = 1, h;

    printf("Digite um numero inteiro: ");
    scanf("%d",&num);

    if(num == 0) {
        printf("\n0\n");
        return 0;
    } else if(num == 1) {
        printf("\n1\n");
        return 0;
    } else {
        printf("\n0 ");
    }

    for(i = 2; i <= num; i++) {
        printf("%d ",n);
        h = f + n;
        f = n;
        n = h;
    }

    printf("\n");

    return 0;
}