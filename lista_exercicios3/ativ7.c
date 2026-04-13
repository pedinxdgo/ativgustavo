#include <stdio.h>

void main() {
    int numeros[5];
    for (int i = 0; i < 6; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }
    for (int i = 0; i < 6; i++) {
        if(numeros[i] > 10) {
            printf("%d ", numeros[i]);
        }
    }
}