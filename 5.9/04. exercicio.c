/*
4) Faça um programa que determine e mostre os cinco primeiros
múltiplos de 3 considerando números maiores que 0.
*/
#include <stdio.h>

int main() {
    int i = 0, con = 6;

    while(i < 5) {
        if(con % 3 == 0) {
            printf("%d\n",con);
            i++;
        }
        con += 3;
    }

    return 0;
}