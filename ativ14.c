#include <stdio.h>

int main(){
    int valor;
    printf("Digite o valor que você quer sacar:");
    scanf("%d", &valor);
    if(valor <= 0){
        printf("Valor inválido\n")
    }
    else{
        printf("Saque Disponível\n")
    }
    printf("Notas de 200")

}