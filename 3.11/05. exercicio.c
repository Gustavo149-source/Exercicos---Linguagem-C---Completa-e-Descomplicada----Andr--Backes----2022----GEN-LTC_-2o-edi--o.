/*
5) Faça um programa que calcule o ano de nascimento de uma
pessoa a partir de sua idade e do ano atual.
*/
#include <stdio.h>

int main() {
    int idade, ano_atual, ano_nascimento;

    printf("Digite a sua idade: ");
    scanf("%d",&idade);
    printf("Qual o ano atual: ");
    scanf("%d",&ano_atual);

    ano_nascimento = ano_atual - idade;

    printf("\nAno de nascimento: %d\n",ano_nascimento);

    return 0;
}