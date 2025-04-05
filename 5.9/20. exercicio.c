/*
20) Faça um programa que leia um valor inteiro e positivo N, calcule o mostre
o valor E, conforme a fórmula a seguir:
*/
#include <stdio.h>

int main() {
    int num, i, j, f = 1;
    float h = 0, total = 0;

    printf("Digite um numero: ");
    scanf("%d",&num);

    int v[num + 1];

    printf("\n----------Calculos---------\n\n");

    for(i = 1; i <= num; i++) {
        f = 1;
        h = 0;
        for(j = 1; j <= i; j++) {
            f *= j;
        }
        h = 1 / (float) f;
        v[i] = f;
        printf("1 / %d! ---> 1 / %d = %.5f\n", i, f, h);
        total += h;
    }

    printf("\n\n----------Soma dos fatoriais----------\n");
    for(i = 1; i <= num; i++) {
        if(i == 1) {
            printf("\ne = ");
        }
        printf("1 / %d",v[i]);
        if(i < num) {
            printf(" + ");
        }
    }

    printf(" = %.5f\n",total);

    return 0;
}