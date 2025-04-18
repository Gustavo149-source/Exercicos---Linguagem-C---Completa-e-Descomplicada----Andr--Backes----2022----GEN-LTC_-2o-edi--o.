/*
10) Faça um programa que preencha um vetor de tamanho 100 com os 100
primeiros números naturais que não são múltiplos de 7. Ao ﬁnal, imprima
esse vetor na tela.
*/
#include <stdio.h>

int main() {
    int i = 0, j = 1, multiplos[100];

    while(i <= 100 - 1) {
        if(j % 7 != 0) {
            multiplos[i] = j;
            i++;
        }
        j++;
    }

    for(int i = 0; i < 100; i++) {
        printf("[%d] - %d\n",i + 1, multiplos[i]);
    }

    return 0;
}