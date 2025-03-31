/*
2) Leia a altura e o raio de um cilindro circular e imprima o
volume desse cilindro. O volume de um cilindro circular é
calculado por meio da seguinte fórmula:

V = pi * (raio*raio) * altura;

em que π = 3.141592
*/
#include <stdio.h>
#define pi 3.141592

int main() {
    float altura, raio, volume;

    printf("Altura do cilindro: ");
    scanf("%f",&altura);
    printf("Raio do cilindro: ");
    scanf("%f",&raio);

    volume = pi * (raio*raio) * altura;

    printf("\nVolume do cilindro: %.2f\n",volume);

    return 0;
}