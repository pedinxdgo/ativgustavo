#include <stdio.h>

int maiorMenor(int n1, int n2){
    int maior;
    if(n1>n2){
        maior = 1;
    }
    else{
        maior = 0;
    }
    return (maior);
}

    int main(){
        int n1;
        int n2;
        int maiorN = maiorMenor(n1, n2);
        printf("Digite um numero:\n");
        scanf("%d", &n1);
        printf("Digite outro numero:\n");
        scanf("%d", &n2);
        if(maiorN == 1){
            printf("O numero %d e maior que o numero %d", n1, n2);
        }
        else if(n1 == n2){
            printf("Os numeros sao iguais");
        }
        else{
            printf("O numero %d e maior que o numero %d", n2, n1);
        }

        return 0;
    }
