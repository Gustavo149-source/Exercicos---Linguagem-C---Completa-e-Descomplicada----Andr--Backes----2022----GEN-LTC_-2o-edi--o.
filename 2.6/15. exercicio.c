/*
15) Escreva um programa que leia três variáveis:
char, int e float. Em seguida, imprima-as de três
maneiras diferentes: separadas por espaços, por
uma tabulação horizontal e uma em cada linha.
Use um único comando printf() para cada
operação de escrita das três variáveis.
*/
#include <stdio.h>

int main() {
    int inteiro;
    float flutuante;
    char caractere;

    printf("Digite um caractere: ");
    scanf("%c",&caractere);
    printf("Digite um inteiro: ");
    scanf("%d",&inteiro);
    printf("Digite um numero com ponto: ");
    scanf("%f",&flutuante);

    printf("\nSeparados por espaco: %c %d %.2f\nSeparados por uma tabulacao horizontal: %c\t%d\t%.2f\nSeparados por linha:\n%c\n%d\n%.2f\n",caractere,inteiro,flutuante,caractere,inteiro,flutuante,caractere,inteiro,flutuante);

    return 0;
}