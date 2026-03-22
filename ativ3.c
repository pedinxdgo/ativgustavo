#include <stdio.h>

void main(){
    int numero1;
    int numero2;
    int numero3;
    printf("Digite um numero:");
    scanf("%d", &numero1);
    printf("Digite outro numero:");
    scanf("%d", &numero2);
    printf("Digite mais um numero:");
    scanf("%d", &numero3);
    if(numero1 > numero2 && numero1 > numero3){
        printf("O numero %d e maior que %d e que %d", numero1, numero2, numero3);
    }
    else if(numero2 > numero1 && numero2 > numero3){
        printf("O numero %d e maior que %d e que %d", numero2, numero1, numero3);
    }
    else{
        printf("O numero %d e maior que %d e que %d", numero3, numero1, numero2);
    }
}