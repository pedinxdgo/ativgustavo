#include <stdio.h>

void main(){
    int numero1;
    int numero2;
    printf("Digite um numero:");
    scanf("%d", &numero1);
    printf("Digite outro numero:");
    scanf("%d", &numero2);
    if(numero1 > numero2){
        printf("O numero %d e maior que %d", numero1, numero2);
    }
    else{
        printf("O numero %d e maior que %d", numero2, numero1);
    }
}