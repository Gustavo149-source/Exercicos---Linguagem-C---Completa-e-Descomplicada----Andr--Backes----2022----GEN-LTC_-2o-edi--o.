/*
4) Faça um programa que leia o salário de um trabalhador e o
valor da prestação de um empréstimo. Se a prestação:
• For maior que 20% do salário, imprima: “Empréstimo
não concedido.”
• Caso contrário, imprima: “Empréstimo concedido.”
*/
#include <stdio.h>

int main() {
    float salario, valor_prestacao;

    printf("Digite o seu salario: ");
    scanf("%f",&salario);
    printf("Digite o valor da prestacao do emprestimo: ");
    scanf("%f",&valor_prestacao);

    if(valor_prestacao > salario * 0.20) {
        printf("\nEmprestimo nao concedido!\n");
    } else {
        printf("\nEmprestimo cedido!\n");
    }

    return 0;
}