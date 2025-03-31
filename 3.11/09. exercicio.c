/*
9) Leia um ângulo em graus e apresente-o convertido em
radianos. A fórmula de conversão é R = G * π/180, sendo G o
ângulo em graus e R em radianos e π = 3.141592.
*/
#include <stdio.h>
#define pi 3.141592

int main() {
    float graus, radianos;

    printf("Digite um angulo (em graus): ");
    scanf("%f",&graus);

    radianos = graus * pi / 180.0;

    printf("\n%.2f Graus - %.2f Radianos\n",graus,radianos);

    return 0;
}