/*
19) Elabore um programa que leia dois números inteiros e exiba o
resultado das operações de “ou exclusivo”, “ou bit a bit” e “e
bit a bit” entre eles.
*/
#include <stdio.h>

int main() {
    int n1, n2, ebitabit, oubitbit, ouexclusivo;

    printf("Primeiro numero: ");
    scanf("%d",&n1);
    printf("Segundo numero: ");
    scanf("%d",&n2);

    ebitabit = n1 & n2;
    oubitbit = n1 | n2;
    ouexclusivo = n1 ^ n2;

    printf("\nOu exclusivo: %d\nOu bit a bit: %d\nE bit a bit: %d\n",ouexclusivo,oubitbit,ebitabit);

    return 0;
}