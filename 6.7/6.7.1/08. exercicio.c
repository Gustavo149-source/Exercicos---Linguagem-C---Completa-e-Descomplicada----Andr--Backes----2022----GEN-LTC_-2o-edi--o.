/*
8) Faça um programa que preencha um vetor com 10 números reais. Em
seguida, calcule e mostre na tela a quantidade de números negativos e a
soma dos números positivos desse vetor
*/
#include <stdio.h>

int main() {
    float vetor[10], soma = 0;
    int cont_negativos = 0;

    for(int i = 0; i < 10; i++) {
        printf("%d Numero: ",i+1);
        scanf("%f",&vetor[i]);
        if(vetor[i] < 0) {
            cont_negativos++;
        } else {
            soma += vetor[i];
        }
    }

    printf("\nQuantidade de numeros negativos: %d\nSoma dos positivos: %.2f\n",cont_negativos, soma);

    return 0;
}