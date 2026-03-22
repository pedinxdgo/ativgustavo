#include <stdio.h>

int maiorMenor(int n1, int n2){
    int maior;
    if(n1>n2){
        maior = 1;
    }
    return (maior);
}

    void main(){
        int num1;
        int num2;
        printf("Digite um numero:\n");
        scanf("%d", &num1);
        printf("Digite outro numero:\n");
        scanf("%d", &num2);
        int maiorN = maiorMenor(num1, num2);
        if(maiorN == 1){
            printf("O numero %d e maior que o numero %d", num1, num2);
        }
        else{
            printf("O numero %d e maior que o numero %d", num2, num1);
        }
    }
