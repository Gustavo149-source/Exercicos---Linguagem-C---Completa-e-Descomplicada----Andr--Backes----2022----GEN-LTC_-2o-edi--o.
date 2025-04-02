/*
13) Faça um programa que mostre ao usuário um menu com
quatro opções de operações matemáticas (as operações básicas,
por exemplo). O usuário escolhe uma das opções, e o seu
programa pede dois valores numéricos e realiza a operação,
mostrando o resultado.
*/
#include <stdio.h>

int main() {
    int a, b, op, operacao, con = 0;

    printf("Digite dois numeros: ");
    scanf("%d %d",&a,&b);

    printf("----------MENU----------\n\n");
    printf("[1]. Soma\n[2]. Subtracao\n[3]. Divisao\n[4]. Multiplicacao\n\nDigite aqui:");
    scanf("%d",&op);

    switch(op) {
        case 1:
            operacao = a + b;
            break;
        case 2:
            operacao = a - b;
            break;
        case 3:
            if(b == 0) {
                printf("\nNao e possivel prosseguir com o divisao pois e impossivel dividir algo por zero!\n");
            } else {
                float divisao = a / (float) b;
                printf("\nResultado: %.2f\n",divisao);
            }
            con = 1;
            break;
        case 4:
            operacao = a * b;
            break;
    }

    if(con == 0) {
        printf("\nResultado: %d\n",operacao);
    }

    return 0;
}