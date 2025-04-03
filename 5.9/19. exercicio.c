/*
19) Faça um programa que calcule e escreva o valor de S:
*/
#include <stdio.h>

int main() {
    int i, j = 1;
    float s = 0;

    for(i = 1; i <= 55; i++) {
        s += j / (float) i;
        j += 2;
    }

    printf("Valor de S: %.2f\n",s);

    return 0;
}