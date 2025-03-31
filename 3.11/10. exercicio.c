/*
10) A importância de R$ 780.000,00 será dividida entre três
ganhadores de um concurso, sendo que:

i. O primeiro ganhador receberá 46% do total.
ii. O segundo receberá 32% do total.
iii. O terceiro receberá o restante.
Calcule e imprima a quantia recebida por cada
um dos ganhadores.
*/
#include <stdio.h>

int main() {
    float quantia = 780000;
    float g1, g2, g3;

    // Não tem problema escrever dessa forma, desde que o (;) esteja no final de cada intrução, para indicar onde cada expressão começa e termina
    g1 = quantia * 0.46; g2 = quantia * 0.32; g3 = quantia * 0.22;

    printf("\n1 Ganhador: %.2f\n2 Ganhador: %.2f\n3 Ganhador: %.2f\n",g1,g2,g3);

    return 0;
}