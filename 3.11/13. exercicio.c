/*
13) Sejam a e b os catetos de um triângulo cuja hipotenusa h é
obtida pela equação:

h = raiz((a*a) + (b*b))

Faça um programa que leia os valores de a e b, e
calcule o valor da hipotenusa através da
fórmula dada. Imprima o resultado.
*/
#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    int h;

    printf("Cateto: ");
    scanf("%d",&a);
    printf("Cateto: ");
    scanf("%d",&b);

    h = ((a * a) + (b * b));
    h = sqrt(h);

    printf("\nCateto oposto: %d\nCateto adjacente: %d\nHipotenusa: %d\n",a,b,h);

    return 0;
}