/*
7) Faça um programa que leia um valor em reais e a cotação do
dólar. Em seguida, imprima o valor correspondente em
dólares.
*/
#include <stdio.h>

int main() {
    float real, cotacao_dolar, convertido_dolar;

    printf("Digite um valor em reais: R$ ");
    scanf("%f",&real);
    printf("Digite a cotacao do dolar: US$ ");
    scanf("%f",&cotacao_dolar);

    convertido_dolar = real * cotacao_dolar;

    printf("\nR$ %.2f - US$ %.2f\n",real, convertido_dolar);

    return 0;
}