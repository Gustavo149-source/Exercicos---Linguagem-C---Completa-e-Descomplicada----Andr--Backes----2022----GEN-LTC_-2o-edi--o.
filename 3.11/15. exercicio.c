/*
15) Faça um programa para ler um número inteiro positivo de
três dígitos. Em seguida, calcule e mostre o número formado
pelos dígitos invertidos do número lido. Exemplo:
Número lido = 123 Número gerado = 321
*/
#include <stdio.h>

int main() {
    int numero, ref, centenas, dezenas, unidades;

    printf("Digite um numero: ");
    scanf("%d",&numero);

    ref = numero;

    unidades = numero / 100;
    numero %= 100;
    dezenas = numero / 10;
    numero %= 10;
    centenas = numero;

    int inverso = (centenas * 100) + (dezenas * 10) + (unidades * 1);

    if(centenas == 0) {
        printf("\nNumero na ordem normal: %d\nNumero invertido: 0%d\n",ref, inverso);
    } else {
        printf("\nNumero na ordem normal: %d\nNumero invertido: %d\n",ref, inverso);
    }

    return 0;
}