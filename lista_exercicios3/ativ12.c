#include <stdio.h>

void main() {
    int numeros[5];
    int soma;
    for (int i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }
    soma = numeros[0] + numeros[1] + numeros[2] + numeros[3] + numeros[4];
    printf("A soma dos numeros e: %d ", soma);
    }
