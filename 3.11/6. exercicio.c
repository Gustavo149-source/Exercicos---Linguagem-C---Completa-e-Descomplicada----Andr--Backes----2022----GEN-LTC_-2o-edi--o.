/*
6) Leia uma velocidade em km/h (quilômetros por hora) e
apresente convertida em m/s (metros por segundo). A fórmula
de conversão é M = K/36, sendo K a velocidade em km/h e M
em m/s.
*/
#include <stdio.h>

int main() {
    float km_hora, m_s;

    printf("Digite a velocidade (Km/h): ");
    scanf("%f",&km_hora);

    m_s = km_hora / 36;

    printf("\n%.2f Km/h e equivalente a %.2f por segundo!\n",km_hora, m_s);

    return 0;
}