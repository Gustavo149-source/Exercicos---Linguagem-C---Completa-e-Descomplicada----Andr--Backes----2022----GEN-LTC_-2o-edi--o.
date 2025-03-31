/*
10) Elabore um programa que solicite ao usuário
entrar com o valor do dia, mês e ano (inteiros).
Em seguida, imprima os valores lidos separados
por uma barra (\).
*/
#include <stdio.h>

int main() {
    int dia, mes, ano;

    printf("Digite a data atual (digite as barras tambem - dia/mes/ano):");
    scanf("%d/%d/%d",&dia,&mes,&ano);

    printf("\nDATA: %d/%d/%d\n",dia,mes,ano);

    return 0;
}