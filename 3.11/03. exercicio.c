/*
3) Faça um programa que leia três valores inteiros e mostre sua
soma.
*/
#include <stdio.h>

int main() {
    int n1,n2,n3;

    printf("Digite a valor para A: ");
    scanf("%d",&n1);
    printf("Para B: ");
    scanf("%d",&n2);
    printf("E para C: ");
    scanf("%d",&n3);

    printf("\n%d + %d + %d = %d\n",n1,n2,n3,(n1+n2+n3));

    return 0;
}