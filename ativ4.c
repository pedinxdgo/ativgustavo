#include <stdio.h>

void main(){
    int numero1;
    printf("Digite um numero:");
    scanf("%d", &numero1);
    if(numero1 > 0){
        printf("O numero %d e positivo", numero1);
    }
    else if(numero1 == 0){
        printf("O numero %d e igual a 0", numero1);
    }
    else{
        printf("O numero %d e negativo", numero1);
    }
}