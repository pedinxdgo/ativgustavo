#include <stdio.h>

int main(){
    int valor;
    printf("Digite o valor que voce quer sacar: ");
    scanf("%d", &valor);
    if(valor <= 0){
        printf("\nValor invalido\n");
    }
    else{
        printf("\nSaque Disponivel\n");
    }
    printf("Notas de 200: %d\n", valor/200);
    printf("Notas de 100: %d\n", valor%200/100);
    printf("Notas de 50: %d\n", valor%200%100/50);
    printf("Notas de 20: %d\n", valor%200%100%50/20);
    printf("Notas de 10: %d\n", valor%200%100%50%20/10);
}