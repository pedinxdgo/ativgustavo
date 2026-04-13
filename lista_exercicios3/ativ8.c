#include <stdio.h>

void main() {
    int numeros[5];
    for (int i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }
    for (int i = 0; i < 5; i++) {
        if(numeros[i] == 50) {
            printf(" O numero %d existe ", numeros[i]);
        }
        else{
            printf("O numero 50 nao existe")
        }
    }
}