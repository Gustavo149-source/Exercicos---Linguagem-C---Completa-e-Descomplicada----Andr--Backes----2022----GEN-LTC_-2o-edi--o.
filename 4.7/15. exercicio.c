#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    double delta, raiz_1, raiz_2;

    printf("A: ");
    scanf("%d", &a);
    if (a == 0) {
        printf("\nA variável A não pode ser igual a zero!\nPrograma encerrado.\n");
        return 1;
    }
    printf("B: ");
    scanf("%d", &b);
    printf("C: ");
    scanf("%d", &c);

    delta = (b * b) - (4 * a * c);

    if (delta < 0) {
        printf("\nNão existem raízes reais!\n");
    } else if (delta == 0) {
        raiz_1 = (-b + sqrt(delta)) / (2.0 * a);
        printf("\nRaiz única: %.2lf\n", raiz_1);
    } else {
        raiz_1 = (-b + sqrt(delta)) / (2.0 * a);
        raiz_2 = (-b - sqrt(delta)) / (2.0 * a);
        printf("\nExistem duas raízes reais!\n\n1ª Raiz: %.2lf\n2ª Raiz: %.2lf\n", raiz_1, raiz_2);
    }

    return 0;
}