/*
16) Em matemática, o número harmônico designado por Hn
define-se como o enésimo termo da série harmônica. Ou seja:

h = 1 + (1/2) + (1/3) + (1/4) ... (1/n)
*/
#include <stdio.h>

int main() {
    int i, num;
    float h = 0;

    printf("Digite um numero: ");
    scanf("%d",&num);

    for(i = 1; i <= num; i++) {
        h += (1 / (float) i);
    }

    printf("\nSoma: %.2f\n",h);
    
    return 0;
}