/*
6) Faça um programa que leia um valor do tipo
double e depois o imprima na forma de notação
científica.
*/
#include <stdio.h>

int main() {
    double numero;

    printf("Digite um numero: ");
    scanf("%lf",&numero);

    printf("\nValor double imprimido com o operador e (notacao cientifica): %.e\n",numero);

    return 0;
}