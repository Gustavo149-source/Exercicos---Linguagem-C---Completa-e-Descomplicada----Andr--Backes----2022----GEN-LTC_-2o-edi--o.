/*
7) Uma empresa vende o mesmo produto para quatro diferentes
estados. Cada estado possui uma taxa diferente de imposto
sobre o produto. Faça um programa em que o usuário entre
com o valor e o estado de destino do produto e o programa
retorne o preço final do produto acrescido do imposto do
estado em que ele será vendido. Se o estado digitado não for
válido, mostrará uma mensagem de erro.
*/
#include <stdio.h>

int main() {
    float valor, taxa, novo_preco;
    int op;

    printf("Digite o valor do produto: ");
    scanf("%f",&valor);
    do {
        printf("\n----------MENU----------\n\n");
        printf("[1]. Minas gerais\n[2]. Sao Paulo\n[3]. Rio de Janeiro\n[4]. Mato Grosso do Sul\n\nDigite aqui: ");
        scanf("%d",&op);
    }while(op < 1 || op > 4);

    switch(op) {
        case 1:
            taxa = 1.07;
            break;
        case 2:
            taxa = 1.12;
            break;
        case 3:
            taxa = 1.15;
            break;
        case 4:
            taxa = 1.08;
            break;
    }

    novo_preco = taxa * valor;

    printf("\nNovo preco: %.2f\n",novo_preco);

    return 0;
}