/*
11) Leia um conjunto de números reais, armazenando-o em vetor. Em seguida,
calcule o quadrado de cada elemento desse vetor, armazenando esse
resultado em outro vetor. Os conjuntos têm, no máximo, 20 elementos.
Imprima os dois conjuntos de números.
*/
#include <stdio.h>

int main() {
    int numeros[20], quadrado[20];
    int i;

    for(i = 0; i < 20; i++) {
        printf("%d Numero: ",i+1);
        scanf("%d",&numeros[i]);
        quadrado[i] = (numeros[i] * numeros[i]);
    }

    printf("\n\n----------RESULTADOS---------\n\n");
    for(i = 0; i < 20; i++) {
        printf("%d\tao quadrado\t%d\n",numeros[i],quadrado[i]);
    }

    return 0;
}