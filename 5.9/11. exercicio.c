/*
11) Faça um algoritmo que leia um número positivo e imprima
seus divisores. Exemplo: Os divisores do número 66 são: 1, 2,
3, 6, 11, 22, 33 e 66.
*/
#include <stdio.h>

int main() {
    int num, i;

    printf("Digite um numero inteiro: ");
    scanf("%d",&num);

    for(i = 1; i <= num; i++) {
        if(num % i == 0) {
            printf("%d\n",i);
        }
    }

    return 0;
}