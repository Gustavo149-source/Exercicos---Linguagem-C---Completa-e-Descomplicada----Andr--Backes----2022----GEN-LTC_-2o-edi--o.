/*
13) Faça um programa para ler 10 números diferentes a serem armazenados
em um vetor. Os números deverão ser armazenados no vetor na ordem em
que forem lidos, sendo que, caso o usuário digite um número que já foi
digitado, o programa deverá pedir a ele para digitar outro número. Note
que cada valor digitado pelo usuário deve ser pesquisado no vetor,
veriﬁcando se ele existe entre os números que já foram fornecidos. Exiba na
tela o vetor ﬁnal que foi digitado.
*/
#include <stdio.h>

int main() {
    int vetor[10], i, j, num, repetido;

    for(i = 0; i < 10; i++) {
        do{
            repetido = 0;
            printf("Digite um numero: ");
            scanf("%d",&num);
            for(j = 0; j < i; j++) {
                if(num == vetor[j]) {
                    repetido = 1;
                    printf("Numero ja digitado!\n");
                    break;
                }
            }
        }while(repetido);

        vetor[i] = num;
    }

    printf("\n---------Numeros digitados----------\n\n");
    for(i = 0; i < 10; i++) {
        printf("%d\n",vetor[i]);
    }

    return 0;
}