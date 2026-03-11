#include <stdio.h>

int main(){
    int n1, n2;
    printf("Digite um numero:\n");
    scanf("%d", &n1);
    printf("Digite outro numero:\n");
    scanf("%d", &n2);
    if(n1>=n2){
        if(n1 % n2 == 0){
            printf("O numero %d e multiplo do numero %d", n2, n1);
        }
        
        }
        else{
            printf("O segundo numero e maior que o primeiro.");
        }
    return 0;
    }

