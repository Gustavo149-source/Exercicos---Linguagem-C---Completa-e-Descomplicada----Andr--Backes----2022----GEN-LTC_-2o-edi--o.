/*
21) Escreva um programa que leia certa quantidade de números, imprima o
maior deles e quantas vezes o maior número foi lido. A quantidade de
números a serem lidos deve ser fornecida pelo usuário.
*/
#include <stdio.h>

int main() {
    int quan, num, maior = 0, cont = 0;

    printf("Quantidade de numeros a serem lidos: ");
    scanf("%d",&quan);

    for(int i = 0; i < quan; i++) {
        printf("%d Numero: ",i+1);
        scanf("%d",&num);
        if(i == 0) {
            maior = num;
            cont = 1;
        } else {
            if(num > maior) {
                maior = num;
                cont = 1;
            } else if (num == maior) {
                cont++;
            }
        }
    }

    printf("\nMaior: %d\nVezes em que foi repetido: %d\n",maior, cont);

    return 0;
}