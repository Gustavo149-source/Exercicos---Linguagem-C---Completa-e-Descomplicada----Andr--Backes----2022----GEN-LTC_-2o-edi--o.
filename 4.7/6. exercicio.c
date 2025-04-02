/*
6) Faça um programa que receba a altura e o sexo de uma pessoa
e calcule e mostre seu peso ideal, utilizando as seguintes
fórmulas (em que “h” corresponde à altura):
• Homens: (72,7 * h) – 58
• Mulheres: (62,1 * h) – 44,7
*/
#include <stdio.h>

int main() {
    float altura, peso_ideal;
    char sexo;

    printf("Digite a sua altura: ");
    scanf("%f",&altura);
    setbuf(stdin, NULL);
    printf("Digite o seu sexo: ");
    scanf("%c",&sexo);

    if(sexo >= 'a' || sexo <= 'z') {
        sexo -= 32;
    }

    switch(sexo) {
        case 'M':
            peso_ideal = (72.7 * altura) - 58;
            break;
        case 'F':
            peso_ideal = (62.1 * altura) - 44.7;
            break;
    }

    printf("\nPeso ideal: %.2f\n",peso_ideal);

    return 0;
}