/*
17) Escreva um programa que leia um número inteiro positivo N
e em seguida imprima N linhas do chamado triângulo de
Floyd:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21
*/
#include <stdio.h>

int main() {
    int num, i, j, f = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d",&num);


    printf("\n");

    for(i = 1; i <= num; i++) {
        for(j = 1; j <= i; j++) {
            f++;
            printf("%d ",f);
        }
        printf("\n");
    }

    return 0;
}