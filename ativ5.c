#include <stdio.h>
#include <stdlib.h>

void main(){
    int numero1;
    int numero2;
    int sinal;
    float resultado;
    printf("Digite um numero:");
    scanf("%d", &numero1);
    printf("Digite outro numero:");
    scanf("%d", &numero2);
    printf("\n============= 1 - Adicao ====================\n");
    printf("=============== 2 - Subtracao =================\n");
    printf("=============== 3 -Divisao ====================\n");
    printf("=============== 4 - Multiplicacao =============\n");
    printf("Escolha uma operacao:");
    scanf("%d", &sinal);
    switch(sinal){
        case 1:
        resultado = numero1 + numero2;
        break;
    case 2:
        resultado = numero1 - numero2;
        break;
    case 3:
        resultado = numero1 / numero2;
        break;
    case 4:
        resultado = numero1 * numero2;
        break;
    default:
        printf("Numero Invalido");

    }
    

    printf("O resultado da operacao e %.2f", resultado);
}